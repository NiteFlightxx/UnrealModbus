// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ThirdParty/UnrealModbusLibrary/Public/UnrealModbusLibrary/modbus.h"
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "UnrealModbusLibrary.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReadHoldingRegistersComplete, bool, Success, const TArray<int32>&, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModbusOperationComplete, bool, bSuccess);

UENUM(BlueprintType)
enum class EModbusParity : uint8
{
	None UMETA(DisplayName = "None"),
	Even UMETA(DisplayName = "Even"),
	Odd UMETA(DisplayName = "Odd"),
};


UCLASS(BlueprintType)
class UModbusConnection : public UObject
{
	GENERATED_BODY()

public:
	modbus_t* ModbusContext;
	UE::FMutex ModbusMutex;
	
	UPROPERTY(BlueprintAssignable, Category = "Modbus")
	FOnReadHoldingRegistersComplete OnReadHoldingRegistersComplete;
	
	UPROPERTY(BlueprintAssignable, Category = "Modbus")
	FOnModbusOperationComplete OnModbusOperationComplete;
	
	UFUNCTION(BlueprintCallable, Category = "Modbus")

	virtual void BeginDestroy() override
	{
		if (ModbusContext != nullptr)
		{
			modbus_close(ModbusContext);
			modbus_free(ModbusContext);
			ModbusContext = nullptr;
		}

		Super::BeginDestroy();
	}
};
/**
 * 
 */

UCLASS()
class UNREALMODBUS_API UUnrealModbusLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static char GetParityChar(EModbusParity Parity);

	UFUNCTION(BlueprintCallable, Category = "Modbus")
	static UModbusConnection* CreateModbusTCPConnection_IPV4(const FString& IPAddress, int32 Port);

	UFUNCTION(BlueprintCallable, Category = "Modbus")
	static UModbusConnection* CreateModbusTCPConnection(const FString& IPAddress, int32 Port);

	UFUNCTION(BlueprintCallable, Category = "Modbus")
	static UModbusConnection* CreateModbusRTUConnection(const FString& SerialPort, int32 BaudRate,EModbusParity Parity=EModbusParity::None,
		int32 DataBit=8, int32 StopBit=1,int32 slaveID=1);
	
	UFUNCTION(BlueprintCallable, Category = "Modbus")
	static void CloseModbusTCPConnection(UModbusConnection* ModbusConnection);

	UFUNCTION(BlueprintCallable, Category = "Modbus")
	static bool ReadHoldingRegisters(UModbusConnection* ModbusConnection, int32 Address, int32 NumberOfRegisters);

	UFUNCTION(BlueprintCallable, Category = "Modbus")
	static bool WriteSingleRegister(UModbusConnection* ModbusConnection, int32 Address, int32 Value);
	
};
