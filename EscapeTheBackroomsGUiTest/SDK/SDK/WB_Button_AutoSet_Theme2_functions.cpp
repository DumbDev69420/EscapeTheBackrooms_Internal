#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_AutoSet_Theme2.WB_Button_AutoSet_Theme2_C
// (None)

class UClass* UWB_Button_AutoSet_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_AutoSet_Theme2_C");

	return Clss;
}


// WB_Button_AutoSet_Theme2_C WB_Button_AutoSet_Theme2.Default__WB_Button_AutoSet_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_AutoSet_Theme2_C* UWB_Button_AutoSet_Theme2_C::GetDefaultObj()
{
	static class UWB_Button_AutoSet_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_AutoSet_Theme2_C*>(UWB_Button_AutoSet_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button_AutoSet_Theme2.WB_Button_AutoSet_Theme2_C.BndEvt__WB_Button_AutoSet_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button_AutoSet_Theme2_C::BndEvt__WB_Button_AutoSet_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_AutoSet_Theme2_C", "BndEvt__WB_Button_AutoSet_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_AutoSet_Theme2.WB_Button_AutoSet_Theme2_C.ExecuteUbergraph_WB_Button_AutoSet_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_AutoSet_Theme2_C::ExecuteUbergraph_WB_Button_AutoSet_Theme2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_AutoSet_Theme2_C", "ExecuteUbergraph_WB_Button_AutoSet_Theme2");

	Params::UWB_Button_AutoSet_Theme2_C_ExecuteUbergraph_WB_Button_AutoSet_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_AutoSet_Theme2.WB_Button_AutoSet_Theme2_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_AutoSet_Theme2_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_AutoSet_Theme2_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


