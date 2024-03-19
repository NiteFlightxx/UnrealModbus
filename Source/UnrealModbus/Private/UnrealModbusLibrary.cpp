// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealModbusLibrary.h"


char UUnrealModbusLibrary::GetParityChar(EModbusParity Parity)
{
	switch (Parity)
	{
	case EModbusParity::None:
		return 'N';
	case EModbusParity::Even:
		return 'E';
	case EModbusParity::Odd:
		return 'O';
	default:
		return 'N'; 
	}
}

UModbusConnection* UUnrealModbusLibrary::CreateModbusTCPConnection_IPV4(const FString& IPAddress, int32 Port)
{
	modbus_t* ctx = modbus_new_tcp(TCHAR_TO_UTF8(*IPAddress), Port);
	if (!ctx || modbus_connect(ctx) == -1)
	{
		if (ctx)
		{
			modbus_free(ctx);
		}
		return nullptr;
	}

	UModbusConnection* ConnectionObject = NewObject<UModbusConnection>();
	ConnectionObject->ModbusContext = ctx;
	return ConnectionObject;
}

UModbusConnection* UUnrealModbusLibrary::CreateModbusTCPConnection(const FString& IPAddress, int32 Port)
{
	FString PortStr = FString::FromInt(Port);
	
	modbus_t* ctx = modbus_new_tcp_pi(TCHAR_TO_UTF8(*IPAddress), TCHAR_TO_UTF8(*PortStr));
	if (!ctx || modbus_connect(ctx) == -1)
	{
		if (ctx)
		{
			modbus_free(ctx);
		}
		return nullptr;
	}

	UModbusConnection* ConnectionObject = NewObject<UModbusConnection>();
	ConnectionObject->ModbusContext = ctx;
	return ConnectionObject;
}

UModbusConnection* UUnrealModbusLibrary::CreateModbusRTUConnection(const FString& SerialPort, int32 BaudRate,
	EModbusParity Parity, int32 DataBit, int32 StopBit,int32 slaveID)
{
	
	const char ParityChar = GetParityChar(Parity);
	
	modbus_t* ctx = modbus_new_rtu(TCHAR_TO_UTF8(*SerialPort), BaudRate, ParityChar, DataBit, StopBit);
	if (!ctx)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create modbus RTU context"));
		return nullptr;
	}
	
	modbus_set_slave(ctx, slaveID);
	
	if (modbus_connect(ctx) == -1)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to connect modbus RTU: %s"), UTF8_TO_TCHAR(modbus_strerror(errno)));
		modbus_free(ctx);
		return nullptr;
	}
	
	UModbusConnection* ConnectionObject = NewObject<UModbusConnection>();
	ConnectionObject->ModbusContext = ctx;
	return ConnectionObject;
}


void UUnrealModbusLibrary::CloseModbusTCPConnection(UModbusConnection* ModbusConnection)
{
	if (ModbusConnection && ModbusConnection->ModbusContext)
	{
		modbus_close(ModbusConnection->ModbusContext);
		modbus_free(ModbusConnection->ModbusContext);
		ModbusConnection->ModbusContext = nullptr;
	}
}

bool UUnrealModbusLibrary::ReadHoldingRegisters(UModbusConnection* ModbusConnection, int32 Address, int32 NumberOfRegisters)
{
	if (!ModbusConnection || !ModbusConnection->ModbusContext || NumberOfRegisters <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Modbus context is invalid or number of registers is <= 0"));
		return false;
	}
	
	Async(EAsyncExecution::Thread, [ModbusConnection, Address, NumberOfRegisters]()
	{
		TArray<uint16_t> TempRegisters;
		TempRegisters.SetNumUninitialized(NumberOfRegisters);
		
		ModbusConnection->ModbusMutex.Lock();
		int status = modbus_read_registers(ModbusConnection->ModbusContext, Address, NumberOfRegisters, TempRegisters.GetData());
		ModbusConnection->ModbusMutex.Unlock();
		bool bSuccess = status == NumberOfRegisters;
		TArray<int32> OutRegisters;
		if (bSuccess)
		{
			for (int i = 0; i < NumberOfRegisters; ++i)
			{
				OutRegisters.Add(TempRegisters[i]);
			}
		}
		Async(EAsyncExecution::TaskGraphMainThread, [ModbusConnection, bSuccess, OutRegisters]()
		{
			ModbusConnection->OnReadHoldingRegistersComplete.Broadcast(bSuccess, OutRegisters);
			
		});
		return bSuccess;
	}
	);
	
	return false;
}

bool UUnrealModbusLibrary::WriteSingleRegister(UModbusConnection* ModbusConnection, int32 Address, int32 Value)
{
	if (!ModbusConnection || !ModbusConnection->ModbusContext)
	{
		return false;
	}

	Async(EAsyncExecution::Thread, [ModbusConnection, Address, Value]()
	{
		ModbusConnection->ModbusMutex.Lock();
		uint16_t modbusValue = static_cast<uint16_t>(Value);
		int status = modbus_write_register(ModbusConnection->ModbusContext, Address, modbusValue);
		ModbusConnection->ModbusMutex.Unlock();

		Async(EAsyncExecution::TaskGraphMainThread, [ModbusConnection, status]()
		{
			bool bSuccess = status != -1;
			ModbusConnection->OnModbusOperationComplete.Broadcast(bSuccess);
		});
	});

	return true;
}

