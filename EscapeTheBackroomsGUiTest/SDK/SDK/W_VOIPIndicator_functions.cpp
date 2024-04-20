#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPIndicator.W_VOIPIndicator_C
// (None)

class UClass* UW_VOIPIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPIndicator_C");

	return Clss;
}


// W_VOIPIndicator_C W_VOIPIndicator.Default__W_VOIPIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPIndicator_C* UW_VOIPIndicator_C::GetDefaultObj()
{
	static class UW_VOIPIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPIndicator_C*>(UW_VOIPIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPIndicator.W_VOIPIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VOIPIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPIndicator.W_VOIPIndicator_C.ExecuteUbergraph_W_VOIPIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestSteamFriendInfo_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSteamPersonaName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_VOIPIndicator_C::ExecuteUbergraph_W_VOIPIndicator(int32 EntryPoint, bool CallFunc_RequestSteamFriendInfo_ReturnValue, const class FString& CallFunc_GetSteamPersonaName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPIndicator_C", "ExecuteUbergraph_W_VOIPIndicator");

	Params::UW_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RequestSteamFriendInfo_ReturnValue = CallFunc_RequestSteamFriendInfo_ReturnValue;
	Parms.CallFunc_GetSteamPersonaName_ReturnValue = CallFunc_GetSteamPersonaName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


