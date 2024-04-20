#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
// (None)

class UClass* UAsyncLoadingScreenLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncLoadingScreenLibrary");

	return Clss;
}


// AsyncLoadingScreenLibrary AsyncLoadingScreen.Default__AsyncLoadingScreenLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncLoadingScreenLibrary* UAsyncLoadingScreenLibrary::GetDefaultObj()
{
	static class UAsyncLoadingScreenLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncLoadingScreenLibrary*>(UAsyncLoadingScreenLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.StopLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAsyncLoadingScreenLibrary::StopLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncLoadingScreenLibrary", "StopLoadingScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              TipTextIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncLoadingScreenLibrary::SetDisplayTipTextIndex(int32 TipTextIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncLoadingScreenLibrary", "SetDisplayTipTextIndex");

	Params::UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Params Parms{};

	Parms.TipTextIndex = TipTextIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MovieIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncLoadingScreenLibrary::SetDisplayMovieIndex(int32 MovieIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncLoadingScreenLibrary", "SetDisplayMovieIndex");

	Params::UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Params Parms{};

	Parms.MovieIndex = MovieIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              BackgroundIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncLoadingScreenLibrary::SetDisplayBackgroundIndex(int32 BackgroundIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncLoadingScreenLibrary", "SetDisplayBackgroundIndex");

	Params::UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Params Parms{};

	Parms.BackgroundIndex = BackgroundIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AsyncLoadingScreen.LoadingScreenSettings
// (None)

class UClass* ULoadingScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenSettings");

	return Clss;
}


// LoadingScreenSettings AsyncLoadingScreen.Default__LoadingScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingScreenSettings* ULoadingScreenSettings::GetDefaultObj()
{
	static class ULoadingScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenSettings*>(ULoadingScreenSettings::StaticClass()->DefaultObject);

	return Default;
}

}


