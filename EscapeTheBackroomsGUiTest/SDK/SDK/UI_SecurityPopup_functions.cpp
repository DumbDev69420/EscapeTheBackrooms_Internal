#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SecurityPopup.UI_SecurityPopup_C
// (None)

class UClass* UUI_SecurityPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SecurityPopup_C");

	return Clss;
}


// UI_SecurityPopup_C UI_SecurityPopup.Default__UI_SecurityPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SecurityPopup_C* UUI_SecurityPopup_C::GetDefaultObj()
{
	static class UUI_SecurityPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SecurityPopup_C*>(UUI_SecurityPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SecurityPopup.UI_SecurityPopup_C.CheckFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SecurityPopup_C::CheckFont(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SecurityPopup_C", "CheckFont");

	Params::UUI_SecurityPopup_C_CheckFont_Params Parms{};

	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SecurityPopup.UI_SecurityPopup_C.BndEvt__UI_SecurityPopup_RunButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SecurityPopup_C::BndEvt__UI_SecurityPopup_RunButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SecurityPopup_C", "BndEvt__UI_SecurityPopup_RunButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SecurityPopup.UI_SecurityPopup_C.BndEvt__UI_SecurityPopup_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SecurityPopup_C::BndEvt__UI_SecurityPopup_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SecurityPopup_C", "BndEvt__UI_SecurityPopup_OkButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SecurityPopup.UI_SecurityPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SecurityPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SecurityPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SecurityPopup.UI_SecurityPopup_C.ExecuteUbergraph_UI_SecurityPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Drag_C*                  K2Node_DynamicCast_AsUI_Drag                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_SecurityPopup_C::ExecuteUbergraph_UI_SecurityPopup(int32 EntryPoint, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UUI_Drag_C* K2Node_DynamicCast_AsUI_Drag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SecurityPopup_C", "ExecuteUbergraph_UI_SecurityPopup");

	Params::UUI_SecurityPopup_C_ExecuteUbergraph_UI_SecurityPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Drag = K2Node_DynamicCast_AsUI_Drag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


