#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C
// (None)

class UClass* ULobby_DifficultySwitcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_DifficultySwitcher_C");

	return Clss;
}


// Lobby_DifficultySwitcher_C Lobby_DifficultySwitcher.Default__Lobby_DifficultySwitcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobby_DifficultySwitcher_C* ULobby_DifficultySwitcher_C::GetDefaultObj()
{
	static class ULobby_DifficultySwitcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobby_DifficultySwitcher_C*>(ULobby_DifficultySwitcher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.Set_OptionButtons_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowOptionButtons_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_DifficultySwitcher_C::Set_OptionButtons_Visibility(bool ShowOptionButtons_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "Set_OptionButtons_Visibility");

	Params::ULobby_DifficultySwitcher_C_Set_OptionButtons_Visibility_Params Parms{};

	Parms.ShowOptionButtons_ = ShowOptionButtons_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void ULobby_DifficultySwitcher_C::Setup(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "Setup");

	Params::ULobby_DifficultySwitcher_C_Setup_Params Parms{};

	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.Set_SelectedOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ULobby_DifficultySwitcher_C::Set_SelectedOption(const class FString& SelectedOption, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "Set_SelectedOption");

	Params::ULobby_DifficultySwitcher_C_Set_SelectedOption_Params Parms{};

	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.Switch_Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Decrease_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Max_Options                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min_Options                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current_Selection                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobby_DifficultySwitcher_C::Switch_Option(bool Decrease_, int32 Max_Options, int32 Min_Options, int32 Current_Selection, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "Switch_Option");

	Params::ULobby_DifficultySwitcher_C_Switch_Option_Params Parms{};

	Parms.Decrease_ = Decrease_;
	Parms.Max_Options = Max_Options;
	Parms.Min_Options = Min_Options;
	Parms.Current_Selection = Current_Selection;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_DifficultySwitcher_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_DifficultySwitcher_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "PreConstruct");

	Params::ULobby_DifficultySwitcher_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobby_DifficultySwitcher_C::BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobby_DifficultySwitcher_C::BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.ExecuteUbergraph_Lobby_DifficultySwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_DifficultySwitcher_C::ExecuteUbergraph_Lobby_DifficultySwitcher(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "ExecuteUbergraph_Lobby_DifficultySwitcher");

	Params::ULobby_DifficultySwitcher_C_ExecuteUbergraph_Lobby_DifficultySwitcher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_DifficultySwitcher.Lobby_DifficultySwitcher_C.OnDifficultySwitched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULobby_DifficultySwitcher_C::OnDifficultySwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_DifficultySwitcher_C", "OnDifficultySwitched__DelegateSignature");

	Params::ULobby_DifficultySwitcher_C_OnDifficultySwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}

}


