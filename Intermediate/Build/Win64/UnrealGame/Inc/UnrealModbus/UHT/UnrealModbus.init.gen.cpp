// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealModbus_init() {}
	UNREALMODBUS_API UFunction* Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature();
	UNREALMODBUS_API UFunction* Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealModbus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealModbus()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealModbus.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealModbus_OnModbusOperationComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealModbus_OnReadHoldingRegistersComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealModbus",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5443C64D,
				0x02776907,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealModbus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealModbus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealModbus(Z_Construct_UPackage__Script_UnrealModbus, TEXT("/Script/UnrealModbus"), Z_Registration_Info_UPackage__Script_UnrealModbus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5443C64D, 0x02776907));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
