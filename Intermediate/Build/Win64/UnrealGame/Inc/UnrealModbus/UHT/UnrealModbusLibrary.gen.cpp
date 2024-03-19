// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealModbus/Public/UnrealModbusLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealModbusLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALMODBUS_API UClass* Z_Construct_UClass_UModbusConnection();
	UNREALMODBUS_API UClass* Z_Construct_UClass_UModbusConnection_NoRegister();
	UNREALMODBUS_API UClass* Z_Construct_UClass_UUnrealModbusLibrary();
	UNREALMODBUS_API UClass* Z_Construct_UClass_UUnrealModbusLibrary_NoRegister();
	UNREALMODBUS_API UEnum* Z_Construct_UEnum_UnrealModbus_EModbusParity();
	UNREALMODBUS_API UFunction* Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature();
	UNREALMODBUS_API UFunction* Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealModbus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics
	{
		struct _Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms
		{
			bool Success;
			TArray<int32> Result;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms), &Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result_MetaData), Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealModbus, nullptr, "OnReadHoldingRegistersComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::_Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::_Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReadHoldingRegistersComplete_DelegateWrapper(const FMulticastScriptDelegate& OnReadHoldingRegistersComplete, bool Success, TArray<int32> const& Result)
{
	struct _Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms
	{
		bool Success;
		TArray<int32> Result;
	};
	_Script_UnrealModbus_eventOnReadHoldingRegistersComplete_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Result=Result;
	OnReadHoldingRegistersComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics
	{
		struct _Script_UnrealModbus_eventOnModbusOperationComplete_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_UnrealModbus_eventOnModbusOperationComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UnrealModbus_eventOnModbusOperationComplete_Parms), &Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealModbus, nullptr, "OnModbusOperationComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::_Script_UnrealModbus_eventOnModbusOperationComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::_Script_UnrealModbus_eventOnModbusOperationComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnModbusOperationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnModbusOperationComplete, bool bSuccess)
{
	struct _Script_UnrealModbus_eventOnModbusOperationComplete_Parms
	{
		bool bSuccess;
	};
	_Script_UnrealModbus_eventOnModbusOperationComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnModbusOperationComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModbusParity;
	static UEnum* EModbusParity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModbusParity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModbusParity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealModbus_EModbusParity, (UObject*)Z_Construct_UPackage__Script_UnrealModbus(), TEXT("EModbusParity"));
		}
		return Z_Registration_Info_UEnum_EModbusParity.OuterSingleton;
	}
	template<> UNREALMODBUS_API UEnum* StaticEnum<EModbusParity>()
	{
		return EModbusParity_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::Enumerators[] = {
		{ "EModbusParity::None", (int64)EModbusParity::None },
		{ "EModbusParity::Even", (int64)EModbusParity::Even },
		{ "EModbusParity::Odd", (int64)EModbusParity::Odd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Even.DisplayName", "Even" },
		{ "Even.Name", "EModbusParity::Even" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EModbusParity::None" },
		{ "Odd.DisplayName", "Odd" },
		{ "Odd.Name", "EModbusParity::Odd" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealModbus,
		nullptr,
		"EModbusParity",
		"EModbusParity",
		Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealModbus_EModbusParity()
	{
		if (!Z_Registration_Info_UEnum_EModbusParity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModbusParity.InnerSingleton, Z_Construct_UEnum_UnrealModbus_EModbusParity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModbusParity.InnerSingleton;
	}
	DEFINE_FUNCTION(UModbusConnection::execBeginDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginDestroy();
		P_NATIVE_END;
	}
	void UModbusConnection::StaticRegisterNativesUModbusConnection()
	{
		UClass* Class = UModbusConnection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDestroy", &UModbusConnection::execBeginDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModbusConnection_BeginDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbusConnection_BeginDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbusConnection_BeginDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbusConnection, nullptr, "BeginDestroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModbusConnection_BeginDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModbusConnection_BeginDestroy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UModbusConnection_BeginDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbusConnection_BeginDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModbusConnection);
	UClass* Z_Construct_UClass_UModbusConnection_NoRegister()
	{
		return UModbusConnection::StaticClass();
	}
	struct Z_Construct_UClass_UModbusConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadHoldingRegistersComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadHoldingRegistersComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModbusOperationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModbusOperationComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModbusConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealModbus,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UModbusConnection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModbusConnection_BeginDestroy, "BeginDestroy" }, // 1244988374
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbusConnection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnrealModbusLibrary.h" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnReadHoldingRegistersComplete_MetaData[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnReadHoldingRegistersComplete = { "OnReadHoldingRegistersComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModbusConnection, OnReadHoldingRegistersComplete), Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnReadHoldingRegistersComplete_MetaData), Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnReadHoldingRegistersComplete_MetaData) }; // 4177583341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnModbusOperationComplete_MetaData[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnModbusOperationComplete = { "OnModbusOperationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModbusConnection, OnModbusOperationComplete), Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnModbusOperationComplete_MetaData), Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnModbusOperationComplete_MetaData) }; // 2969618013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModbusConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnReadHoldingRegistersComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbusConnection_Statics::NewProp_OnModbusOperationComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModbusConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModbusConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModbusConnection_Statics::ClassParams = {
		&UModbusConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModbusConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UModbusConnection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModbusConnection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UModbusConnection()
	{
		if (!Z_Registration_Info_UClass_UModbusConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModbusConnection.OuterSingleton, Z_Construct_UClass_UModbusConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModbusConnection.OuterSingleton;
	}
	template<> UNREALMODBUS_API UClass* StaticClass<UModbusConnection>()
	{
		return UModbusConnection::StaticClass();
	}
	UModbusConnection::UModbusConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModbusConnection);
	UModbusConnection::~UModbusConnection() {}
	DEFINE_FUNCTION(UUnrealModbusLibrary::execWriteSingleRegister)
	{
		P_GET_OBJECT(UModbusConnection,Z_Param_ModbusConnection);
		P_GET_PROPERTY(FIntProperty,Z_Param_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUnrealModbusLibrary::WriteSingleRegister(Z_Param_ModbusConnection,Z_Param_Address,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealModbusLibrary::execReadHoldingRegisters)
	{
		P_GET_OBJECT(UModbusConnection,Z_Param_ModbusConnection);
		P_GET_PROPERTY(FIntProperty,Z_Param_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfRegisters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUnrealModbusLibrary::ReadHoldingRegisters(Z_Param_ModbusConnection,Z_Param_Address,Z_Param_NumberOfRegisters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealModbusLibrary::execCloseModbusTCPConnection)
	{
		P_GET_OBJECT(UModbusConnection,Z_Param_ModbusConnection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnrealModbusLibrary::CloseModbusTCPConnection(Z_Param_ModbusConnection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealModbusLibrary::execCreateModbusRTUConnection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SerialPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_BaudRate);
		P_GET_ENUM(EModbusParity,Z_Param_Parity);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataBit);
		P_GET_PROPERTY(FIntProperty,Z_Param_StopBit);
		P_GET_PROPERTY(FIntProperty,Z_Param_slaveID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModbusConnection**)Z_Param__Result=UUnrealModbusLibrary::CreateModbusRTUConnection(Z_Param_SerialPort,Z_Param_BaudRate,EModbusParity(Z_Param_Parity),Z_Param_DataBit,Z_Param_StopBit,Z_Param_slaveID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealModbusLibrary::execCreateModbusTCPConnection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModbusConnection**)Z_Param__Result=UUnrealModbusLibrary::CreateModbusTCPConnection(Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealModbusLibrary::execCreateModbusTCPConnection_IPV4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModbusConnection**)Z_Param__Result=UUnrealModbusLibrary::CreateModbusTCPConnection_IPV4(Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	void UUnrealModbusLibrary::StaticRegisterNativesUUnrealModbusLibrary()
	{
		UClass* Class = UUnrealModbusLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseModbusTCPConnection", &UUnrealModbusLibrary::execCloseModbusTCPConnection },
			{ "CreateModbusRTUConnection", &UUnrealModbusLibrary::execCreateModbusRTUConnection },
			{ "CreateModbusTCPConnection", &UUnrealModbusLibrary::execCreateModbusTCPConnection },
			{ "CreateModbusTCPConnection_IPV4", &UUnrealModbusLibrary::execCreateModbusTCPConnection_IPV4 },
			{ "ReadHoldingRegisters", &UUnrealModbusLibrary::execReadHoldingRegisters },
			{ "WriteSingleRegister", &UUnrealModbusLibrary::execWriteSingleRegister },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics
	{
		struct UnrealModbusLibrary_eventCloseModbusTCPConnection_Parms
		{
			UModbusConnection* ModbusConnection;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModbusConnection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::NewProp_ModbusConnection = { "ModbusConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCloseModbusTCPConnection_Parms, ModbusConnection), Z_Construct_UClass_UModbusConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::NewProp_ModbusConnection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealModbusLibrary, nullptr, "CloseModbusTCPConnection", nullptr, nullptr, Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::UnrealModbusLibrary_eventCloseModbusTCPConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::UnrealModbusLibrary_eventCloseModbusTCPConnection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics
	{
		struct UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms
		{
			FString SerialPort;
			int32 BaudRate;
			EModbusParity Parity;
			int32 DataBit;
			int32 StopBit;
			int32 slaveID;
			UModbusConnection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerialPort_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SerialPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaudRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Parity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Parity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataBit;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StopBit;
		static const UECodeGen_Private::FIntPropertyParams NewProp_slaveID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_SerialPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_SerialPort = { "SerialPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, SerialPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_SerialPort_MetaData), Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_SerialPort_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_BaudRate = { "BaudRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, BaudRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_Parity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_Parity = { "Parity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, Parity), Z_Construct_UEnum_UnrealModbus_EModbusParity, METADATA_PARAMS(0, nullptr) }; // 985693821
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_DataBit = { "DataBit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, DataBit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_StopBit = { "StopBit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, StopBit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_slaveID = { "slaveID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, slaveID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms, ReturnValue), Z_Construct_UClass_UModbusConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_SerialPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_BaudRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_Parity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_Parity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_DataBit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_StopBit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_slaveID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "CPP_Default_DataBit", "8" },
		{ "CPP_Default_Parity", "None" },
		{ "CPP_Default_slaveID", "1" },
		{ "CPP_Default_StopBit", "1" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealModbusLibrary, nullptr, "CreateModbusRTUConnection", nullptr, nullptr, Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::UnrealModbusLibrary_eventCreateModbusRTUConnection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics
	{
		struct UnrealModbusLibrary_eventCreateModbusTCPConnection_Parms
		{
			FString IPAddress;
			int32 Port;
			UModbusConnection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusTCPConnection_Parms, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_IPAddress_MetaData), Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_IPAddress_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusTCPConnection_Parms, Port), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusTCPConnection_Parms, ReturnValue), Z_Construct_UClass_UModbusConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealModbusLibrary, nullptr, "CreateModbusTCPConnection", nullptr, nullptr, Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::UnrealModbusLibrary_eventCreateModbusTCPConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::UnrealModbusLibrary_eventCreateModbusTCPConnection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics
	{
		struct UnrealModbusLibrary_eventCreateModbusTCPConnection_IPV4_Parms
		{
			FString IPAddress;
			int32 Port;
			UModbusConnection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusTCPConnection_IPV4_Parms, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_IPAddress_MetaData), Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_IPAddress_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusTCPConnection_IPV4_Parms, Port), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventCreateModbusTCPConnection_IPV4_Parms, ReturnValue), Z_Construct_UClass_UModbusConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealModbusLibrary, nullptr, "CreateModbusTCPConnection_IPV4", nullptr, nullptr, Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::UnrealModbusLibrary_eventCreateModbusTCPConnection_IPV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::UnrealModbusLibrary_eventCreateModbusTCPConnection_IPV4_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics
	{
		struct UnrealModbusLibrary_eventReadHoldingRegisters_Parms
		{
			UModbusConnection* ModbusConnection;
			int32 Address;
			int32 NumberOfRegisters;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModbusConnection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfRegisters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_ModbusConnection = { "ModbusConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventReadHoldingRegisters_Parms, ModbusConnection), Z_Construct_UClass_UModbusConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventReadHoldingRegisters_Parms, Address), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_NumberOfRegisters = { "NumberOfRegisters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventReadHoldingRegisters_Parms, NumberOfRegisters), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealModbusLibrary_eventReadHoldingRegisters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnrealModbusLibrary_eventReadHoldingRegisters_Parms), &Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_ModbusConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_NumberOfRegisters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealModbusLibrary, nullptr, "ReadHoldingRegisters", nullptr, nullptr, Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::UnrealModbusLibrary_eventReadHoldingRegisters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::UnrealModbusLibrary_eventReadHoldingRegisters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics
	{
		struct UnrealModbusLibrary_eventWriteSingleRegister_Parms
		{
			UModbusConnection* ModbusConnection;
			int32 Address;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModbusConnection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_ModbusConnection = { "ModbusConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventWriteSingleRegister_Parms, ModbusConnection), Z_Construct_UClass_UModbusConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventWriteSingleRegister_Parms, Address), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealModbusLibrary_eventWriteSingleRegister_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealModbusLibrary_eventWriteSingleRegister_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnrealModbusLibrary_eventWriteSingleRegister_Parms), &Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_ModbusConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbus" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealModbusLibrary, nullptr, "WriteSingleRegister", nullptr, nullptr, Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::UnrealModbusLibrary_eventWriteSingleRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::UnrealModbusLibrary_eventWriteSingleRegister_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealModbusLibrary);
	UClass* Z_Construct_UClass_UUnrealModbusLibrary_NoRegister()
	{
		return UUnrealModbusLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealModbusLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealModbusLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealModbus,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealModbusLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealModbusLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealModbusLibrary_CloseModbusTCPConnection, "CloseModbusTCPConnection" }, // 3387720538
		{ &Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusRTUConnection, "CreateModbusRTUConnection" }, // 2312411786
		{ &Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection, "CreateModbusTCPConnection" }, // 4291070405
		{ &Z_Construct_UFunction_UUnrealModbusLibrary_CreateModbusTCPConnection_IPV4, "CreateModbusTCPConnection_IPV4" }, // 4210430733
		{ &Z_Construct_UFunction_UUnrealModbusLibrary_ReadHoldingRegisters, "ReadHoldingRegisters" }, // 4055680160
		{ &Z_Construct_UFunction_UUnrealModbusLibrary_WriteSingleRegister, "WriteSingleRegister" }, // 2731235745
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealModbusLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealModbusLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UnrealModbusLibrary.h" },
		{ "ModuleRelativePath", "Public/UnrealModbusLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealModbusLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealModbusLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealModbusLibrary_Statics::ClassParams = {
		&UUnrealModbusLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealModbusLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealModbusLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUnrealModbusLibrary()
	{
		if (!Z_Registration_Info_UClass_UUnrealModbusLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealModbusLibrary.OuterSingleton, Z_Construct_UClass_UUnrealModbusLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealModbusLibrary.OuterSingleton;
	}
	template<> UNREALMODBUS_API UClass* StaticClass<UUnrealModbusLibrary>()
	{
		return UUnrealModbusLibrary::StaticClass();
	}
	UUnrealModbusLibrary::UUnrealModbusLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealModbusLibrary);
	UUnrealModbusLibrary::~UUnrealModbusLibrary() {}
	struct Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics::EnumInfo[] = {
		{ EModbusParity_StaticEnum, TEXT("EModbusParity"), &Z_Registration_Info_UEnum_EModbusParity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 985693821U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModbusConnection, UModbusConnection::StaticClass, TEXT("UModbusConnection"), &Z_Registration_Info_UClass_UModbusConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModbusConnection), 2009254490U) },
		{ Z_Construct_UClass_UUnrealModbusLibrary, UUnrealModbusLibrary::StaticClass, TEXT("UUnrealModbusLibrary"), &Z_Registration_Info_UClass_UUnrealModbusLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealModbusLibrary), 2042576713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_1052143593(TEXT("/Script/UnrealModbus"),
		Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
