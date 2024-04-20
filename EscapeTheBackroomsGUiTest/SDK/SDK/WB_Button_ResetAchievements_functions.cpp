#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_ResetAchievements.WB_Button_ResetAchievements_C
// (None)

class UClass* UWB_Button_ResetAchievements_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_ResetAchievements_C");

	return Clss;
}


// WB_Button_ResetAchievements_C WB_Button_ResetAchievements.Default__WB_Button_ResetAchievements_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_ResetAchievements_C* UWB_Button_ResetAchievements_C::GetDefaultObj()
{
	static class UWB_Button_ResetAchievements_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_ResetAchievements_C*>(UWB_Button_ResetAchievements_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button_ResetAchievements.WB_Button_ResetAchievements_C.BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button_ResetAchievements_C::BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_ResetAchievements_C", "BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_ResetAchievements.WB_Button_ResetAchievements_C.ExecuteUbergraph_WB_Button_ResetAchievements
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_ResetAchievements_C::ExecuteUbergraph_WB_Button_ResetAchievements(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_ResetAchievements_C", "ExecuteUbergraph_WB_Button_ResetAchievements");

	Params::UWB_Button_ResetAchievements_C_ExecuteUbergraph_WB_Button_ResetAchievements_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_ResetAchievements.WB_Button_ResetAchievements_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_ResetAchievements_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_ResetAchievements_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


