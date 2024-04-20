#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C
// (None)

class UClass* UWB_Confirmation_PopUp_SaveSettings_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Confirmation_PopUp_SaveSettings_Theme2_C");

	return Clss;
}


// WB_Confirmation_PopUp_SaveSettings_Theme2_C WB_Confirmation_PopUp_SaveSettings_Theme2.Default__WB_Confirmation_PopUp_SaveSettings_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Confirmation_PopUp_SaveSettings_Theme2_C* UWB_Confirmation_PopUp_SaveSettings_Theme2_C::GetDefaultObj()
{
	static class UWB_Confirmation_PopUp_SaveSettings_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Confirmation_PopUp_SaveSettings_Theme2_C*>(UWB_Confirmation_PopUp_SaveSettings_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C.BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Left_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Confirmation_PopUp_SaveSettings_Theme2_C::BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Left_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Confirmation_PopUp_SaveSettings_Theme2_C", "BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Left_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C.BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Right_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Confirmation_PopUp_SaveSettings_Theme2_C::BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Right_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Confirmation_PopUp_SaveSettings_Theme2_C", "BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Right_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C.ExecuteUbergraph_WB_Confirmation_PopUp_SaveSettings_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Confirmation_PopUp_SaveSettings_Theme2_C::ExecuteUbergraph_WB_Confirmation_PopUp_SaveSettings_Theme2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Confirmation_PopUp_SaveSettings_Theme2_C", "ExecuteUbergraph_WB_Confirmation_PopUp_SaveSettings_Theme2");

	Params::UWB_Confirmation_PopUp_SaveSettings_Theme2_C_ExecuteUbergraph_WB_Confirmation_PopUp_SaveSettings_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C.OnClicked_Decline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Confirmation_PopUp_SaveSettings_Theme2_C::OnClicked_Decline__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Confirmation_PopUp_SaveSettings_Theme2_C", "OnClicked_Decline__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C.OnClicked_Confirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Confirmation_PopUp_SaveSettings_Theme2_C::OnClicked_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Confirmation_PopUp_SaveSettings_Theme2_C", "OnClicked_Confirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


