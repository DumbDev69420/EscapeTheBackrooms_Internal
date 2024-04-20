#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Spectator_UI.Spectator_UI_C
// (None)

class UClass* USpectator_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spectator_UI_C");

	return Clss;
}


// Spectator_UI_C Spectator_UI.Default__Spectator_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpectator_UI_C* USpectator_UI_C::GetDefaultObj()
{
	static class USpectator_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpectator_UI_C*>(USpectator_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Spectator_UI.Spectator_UI_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void USpectator_UI_C::SetPlayerName(const class FString& Name, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spectator_UI_C", "SetPlayerName");

	Params::USpectator_UI_C_SetPlayerName_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Spectator_UI.Spectator_UI_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpectator_UI_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spectator_UI_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Spectator_UI.Spectator_UI_C.ExecuteUbergraph_Spectator_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpectator_UI_C::ExecuteUbergraph_Spectator_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spectator_UI_C", "ExecuteUbergraph_Spectator_UI");

	Params::USpectator_UI_C_ExecuteUbergraph_Spectator_UI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


