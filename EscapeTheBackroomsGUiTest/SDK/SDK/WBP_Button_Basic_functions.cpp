#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Button_Basic.WBP_Button_Basic_C
// (None)

class UClass* UWBP_Button_Basic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Button_Basic_C");

	return Clss;
}


// WBP_Button_Basic_C WBP_Button_Basic.Default__WBP_Button_Basic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Button_Basic_C* UWBP_Button_Basic_C::GetDefaultObj()
{
	static class UWBP_Button_Basic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Button_Basic_C*>(UWBP_Button_Basic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Button_Basic.WBP_Button_Basic_C.ChangeTextToSymbols
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_Button_Basic_C::ChangeTextToSymbols(bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "ChangeTextToSymbols");

	Params::UWBP_Button_Basic_C_ChangeTextToSymbols_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToUse                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Button_Basic_C::SetButtonText(class FText TextToUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "SetButtonText");

	Params::UWBP_Button_Basic_C_SetButtonText_Params Parms{};

	Parms.TextToUse = TextToUse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.ChangeTextCasing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_Button_Basic_C::ChangeTextCasing(bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "ChangeTextCasing");

	Params::UWBP_Button_Basic_C_ChangeTextCasing_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Button_Basic_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "PreConstruct");

	Params::UWBP_Button_Basic_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.CapsLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::CapsLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "CapsLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.SetComponentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetInteractionComponent* WidgetInteractionComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Basic_C::SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "SetComponentReference");

	Params::UWBP_Button_Basic_C_SetComponentReference_Params Parms{};

	Parms.WidgetInteractionComponent = WidgetInteractionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.SymbolLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::SymbolLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "SymbolLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.Space
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::Space()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "Space");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.Shift
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::Shift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "Shift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.SendKeyboardText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Button_Basic_C::SendKeyboardText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "SendKeyboardText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.ExecuteUbergraph_WBP_Button_Basic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetInteractionComponent* K2Node_Event_WidgetInteractionComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Basic_C::ExecuteUbergraph_WBP_Button_Basic(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidgetInteractionComponent* K2Node_Event_WidgetInteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "ExecuteUbergraph_WBP_Button_Basic");

	Params::UWBP_Button_Basic_C_ExecuteUbergraph_WBP_Button_Basic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_WidgetInteractionComponent = K2Node_Event_WidgetInteractionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Basic.WBP_Button_Basic_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EModifierKeys           Modifier                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Basic_C::ButtonPressed__DelegateSignature(class FText ButtonText, enum class EModifierKeys Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Basic_C", "ButtonPressed__DelegateSignature");

	Params::UWBP_Button_Basic_C_ButtonPressed__DelegateSignature_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);

}

}


