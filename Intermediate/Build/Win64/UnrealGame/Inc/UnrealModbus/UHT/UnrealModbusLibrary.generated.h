// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealModbusLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModbusConnection;
enum class EModbusParity : uint8;
#ifdef UNREALMODBUS_UnrealModbusLibrary_generated_h
#error "UnrealModbusLibrary.generated.h already included, missing '#pragma once' in UnrealModbusLibrary.h"
#endif
#define UNREALMODBUS_UnrealModbusLibrary_generated_h

#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_9_DELEGATE \
UNREALMODBUS_API void FOnReadHoldingRegistersComplete_DelegateWrapper(const FMulticastScriptDelegate& OnReadHoldingRegistersComplete, bool Success, TArray<int32> const& Result);


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_10_DELEGATE \
UNREALMODBUS_API void FOnModbusOperationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnModbusOperationComplete, bool bSuccess);


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_SPARSE_DATA
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginDestroy);


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_ACCESSORS
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModbusConnection(); \
	friend struct Z_Construct_UClass_UModbusConnection_Statics; \
public: \
	DECLARE_CLASS(UModbusConnection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealModbus"), NO_API) \
	DECLARE_SERIALIZER(UModbusConnection)


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModbusConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModbusConnection(UModbusConnection&&); \
	NO_API UModbusConnection(const UModbusConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModbusConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModbusConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModbusConnection) \
	NO_API virtual ~UModbusConnection();


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_21_PROLOG
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_SPARSE_DATA \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_ACCESSORS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALMODBUS_API UClass* StaticClass<class UModbusConnection>();

#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_SPARSE_DATA
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteSingleRegister); \
	DECLARE_FUNCTION(execReadHoldingRegisters); \
	DECLARE_FUNCTION(execCloseModbusTCPConnection); \
	DECLARE_FUNCTION(execCreateModbusRTUConnection); \
	DECLARE_FUNCTION(execCreateModbusTCPConnection); \
	DECLARE_FUNCTION(execCreateModbusTCPConnection_IPV4);


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_ACCESSORS
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealModbusLibrary(); \
	friend struct Z_Construct_UClass_UUnrealModbusLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnrealModbusLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealModbus"), NO_API) \
	DECLARE_SERIALIZER(UUnrealModbusLibrary)


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealModbusLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealModbusLibrary(UUnrealModbusLibrary&&); \
	NO_API UUnrealModbusLibrary(const UUnrealModbusLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealModbusLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealModbusLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealModbusLibrary) \
	NO_API virtual ~UUnrealModbusLibrary();


#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_54_PROLOG
#define FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_SPARSE_DATA \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_ACCESSORS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_INCLASS_NO_PURE_DECLS \
	FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALMODBUS_API UClass* StaticClass<class UUnrealModbusLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ContentExamples53_Plugins_UnrealModbus_Source_UnrealModbus_Public_UnrealModbusLibrary_h


#define FOREACH_ENUM_EMODBUSPARITY(op) \
	op(EModbusParity::None) \
	op(EModbusParity::Even) \
	op(EModbusParity::Odd) 

enum class EModbusParity : uint8;
template<> struct TIsUEnumClass<EModbusParity> { enum { Value = true }; };
template<> UNREALMODBUS_API UEnum* StaticEnum<EModbusParity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
