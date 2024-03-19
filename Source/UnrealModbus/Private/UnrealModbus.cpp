// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealModbus.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "FUnrealModbusModule"

void FUnrealModbusModule::StartupModule()
{
	
	FString BaseDir = IPluginManager::Get().FindPlugin("UnrealModbus")->GetBaseDir();
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/UnrealModbusLibrary/Win64/Rocky_Modbus.dll"));
#endif 
	Rocky_ModbusLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;
	
}

void FUnrealModbusModule::ShutdownModule()
{
	FPlatformProcess::FreeDllHandle(Rocky_ModbusLibraryHandle);
	Rocky_ModbusLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUnrealModbusModule, UnrealModbus)
