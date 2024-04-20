#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Keyboard_Basic.WBP_Keyboard_Basic_C
// (None)

class UClass* UWBP_Keyboard_Basic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Keyboard_Basic_C");

	return Clss;
}


// WBP_Keyboard_Basic_C WBP_Keyboard_Basic.Default__WBP_Keyboard_Basic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Keyboard_Basic_C* UWBP_Keyboard_Basic_C::GetDefaultObj()
{
	static class UWBP_Keyboard_Basic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Keyboard_Basic_C*>(UWBP_Keyboard_Basic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SetButtonArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_Button_Basic_C*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Keyboard_Basic_C::SetButtonArray(TArray<class UWBP_Button_Basic_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SetButtonArray");

	Params::UWBP_Keyboard_Basic_C_SetButtonArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.UseModifierButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModifierKeys           ModifierToUse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PressAndReleaseKey_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Button_Basic_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_KeyboardInteraction_C>K2Node_DynamicCast_AsBPI_Keyboard_Interaction                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Button_Basic_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PressAndReleaseKey_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_KeyboardInteraction_C>K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PressAndReleaseKey_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Keyboard_Basic_C::UseModifierButton(enum class EModifierKeys ModifierToUse, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_PressAndReleaseKey_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_Button_Basic_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_KeyboardInteraction_C> K2Node_DynamicCast_AsBPI_Keyboard_Interaction, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_Button_Basic_C* CallFunc_Array_Get_Item_1, bool CallFunc_PressAndReleaseKey_ReturnValue_1, TScriptInterface<class IBPI_KeyboardInteraction_C> K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_PressAndReleaseKey_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "UseModifierButton");

	Params::UWBP_Keyboard_Basic_C_UseModifierButton_Params Parms{};

	Parms.ModifierToUse = ModifierToUse;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_PressAndReleaseKey_ReturnValue = CallFunc_PressAndReleaseKey_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Keyboard_Interaction = K2Node_DynamicCast_AsBPI_Keyboard_Interaction;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_PressAndReleaseKey_ReturnValue_1 = CallFunc_PressAndReleaseKey_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1 = K2Node_DynamicCast_AsBPI_Keyboard_Interaction_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PressAndReleaseKey_ReturnValue_2 = CallFunc_PressAndReleaseKey_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SendButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonTextToSend                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SendKeyChar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Keyboard_Basic_C::SendButtonText(class FText ButtonTextToSend, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_SendKeyChar_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SendButtonText");

	Params::UWBP_Keyboard_Basic_C_SendButtonText_Params Parms{};

	Parms.ButtonTextToSend = ButtonTextToSend;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_SendKeyChar_ReturnValue = CallFunc_SendKeyChar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.DetermineButtonFunctionality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EModifierKeys           ModifierKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EModifierKeys           ModifierToCheck                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TextToUse                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Keyboard_Basic_C::DetermineButtonFunctionality(class FText ButtonText, enum class EModifierKeys ModifierKey, enum class EModifierKeys ModifierToCheck, class FText TextToUse, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "DetermineButtonFunctionality");

	Params::UWBP_Keyboard_Basic_C_DetermineButtonFunctionality_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.ModifierKey = ModifierKey;
	Parms.ModifierToCheck = ModifierToCheck;
	Parms.TextToUse = TextToUse;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.CapsLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::CapsLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "CapsLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SendKeyboardText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::SendKeyboardText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SendKeyboardText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.Shift
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::Shift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "Shift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.Space
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::Space()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "Space");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SymbolLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::SymbolLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SymbolLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.KeyboardButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonTextToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EModifierKeys           ModifierKeyToUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::KeyboardButtonPressed(class FText ButtonTextToUse, enum class EModifierKeys ModifierKeyToUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "KeyboardButtonPressed");

	Params::UWBP_Keyboard_Basic_C_KeyboardButtonPressed_Params Parms{};

	Parms.ButtonTextToUse = ButtonTextToUse;
	Parms.ModifierKeyToUse = ModifierKeyToUse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EModifierKeys           Modifier                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::ButtonPressed(class FText ButtonText, enum class EModifierKeys Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "ButtonPressed");

	Params::UWBP_Keyboard_Basic_C_ButtonPressed_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.SetComponentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetInteractionComponent* WidgetInteractionComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "SetComponentReference");

	Params::UWBP_Keyboard_Basic_C_SetComponentReference_Params Parms{};

	Parms.WidgetInteractionComponent = WidgetInteractionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.ExecuteUbergraph_WBP_Keyboard_Basic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ButtonTextToUse                               (None)
// enum class EModifierKeys           K2Node_CustomEvent_ModifierKeyToUse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Button_Basic_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_ButtonText                                    (None)
// enum class EModifierKeys           K2Node_CustomEvent_Modifier                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetInteractionComponent* K2Node_Event_WidgetInteractionComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Keyboard_Basic_C::ExecuteUbergraph_WBP_Keyboard_Basic(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, class FText K2Node_CustomEvent_ButtonTextToUse, enum class EModifierKeys K2Node_CustomEvent_ModifierKeyToUse, class UWBP_Button_Basic_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_CustomEvent_ButtonText, enum class EModifierKeys K2Node_CustomEvent_Modifier, class UWidgetInteractionComponent* K2Node_Event_WidgetInteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "ExecuteUbergraph_WBP_Keyboard_Basic");

	Params::UWBP_Keyboard_Basic_C_ExecuteUbergraph_WBP_Keyboard_Basic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_ButtonTextToUse = K2Node_CustomEvent_ButtonTextToUse;
	Parms.K2Node_CustomEvent_ModifierKeyToUse = K2Node_CustomEvent_ModifierKeyToUse;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_ButtonText = K2Node_CustomEvent_ButtonText;
	Parms.K2Node_CustomEvent_Modifier = K2Node_CustomEvent_Modifier;
	Parms.K2Node_Event_WidgetInteractionComponent = K2Node_Event_WidgetInteractionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.WebBrowserButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Keyboard_Basic_C::WebBrowserButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "WebBrowserButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Keyboard_Basic.WBP_Keyboard_Basic_C.EnterButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToSend                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Keyboard_Basic_C::EnterButtonPressed__DelegateSignature(class FText TextToSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Keyboard_Basic_C", "EnterButtonPressed__DelegateSignature");

	Params::UWBP_Keyboard_Basic_C_EnterButtonPressed__DelegateSignature_Params Parms{};

	Parms.TextToSend = TextToSend;

	UObject::ProcessEvent(Func, &Parms);

}

}


