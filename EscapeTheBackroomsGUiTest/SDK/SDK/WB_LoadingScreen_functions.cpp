#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LoadingScreen.WB_LoadingScreen_C
// (None)

class UClass* UWB_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LoadingScreen_C");

	return Clss;
}


// WB_LoadingScreen_C WB_LoadingScreen.Default__WB_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LoadingScreen_C* UWB_LoadingScreen_C::GetDefaultObj()
{
	static class UWB_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LoadingScreen_C*>(UWB_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LoadingScreen.WB_LoadingScreen_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LoadingScreen_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadingScreen.WB_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadingScreen.WB_LoadingScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_LoadingScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "PreConstruct");

	Params::UWB_LoadingScreen_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadingScreen.WB_LoadingScreen_C.ExecuteUbergraph_WB_LoadingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_LoadingScreen_C::ExecuteUbergraph_WB_LoadingScreen(int32 EntryPoint, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetCurrentCulture_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "ExecuteUbergraph_WB_LoadingScreen");

	Params::UWB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


