#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BacktraceBlueprintLibrary.BacktraceBlueprintLibrary
// (None)

class UClass* UBacktraceBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BacktraceBlueprintLibrary");

	return Clss;
}


// BacktraceBlueprintLibrary BacktraceBlueprintLibrary.Default__BacktraceBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBacktraceBlueprintLibrary* UBacktraceBlueprintLibrary::GetDefaultObj()
{
	static class UBacktraceBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBacktraceBlueprintLibrary*>(UBacktraceBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BacktraceBlueprintLibrary.BacktraceBlueprintLibrary.CrashException
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UBacktraceBlueprintLibrary::CrashException()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacktraceBlueprintLibrary", "CrashException");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BacktraceBlueprintLibrary.BacktraceBlueprintLibrary.Crash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UBacktraceBlueprintLibrary::Crash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacktraceBlueprintLibrary", "Crash");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


