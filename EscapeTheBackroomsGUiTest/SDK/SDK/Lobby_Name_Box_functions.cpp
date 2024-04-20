#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lobby_Name_Box.Lobby_Name_Box_C
// (None)

class UClass* ULobby_Name_Box_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_Name_Box_C");

	return Clss;
}


// Lobby_Name_Box_C Lobby_Name_Box.Default__Lobby_Name_Box_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobby_Name_Box_C* ULobby_Name_Box_C::GetDefaultObj()
{
	static class ULobby_Name_Box_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobby_Name_Box_C*>(ULobby_Name_Box_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_Name_Box.Lobby_Name_Box_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_Name_Box_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Name_Box_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Name_Box.Lobby_Name_Box_C.BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULobby_Name_Box_C::BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Name_Box_C", "BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::ULobby_Name_Box_C_BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Name_Box.Lobby_Name_Box_C.ExecuteUbergraph_Lobby_Name_Box
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)

void ULobby_Name_Box_C::ExecuteUbergraph_Lobby_Name_Box(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Name_Box_C", "ExecuteUbergraph_Lobby_Name_Box");

	Params::ULobby_Name_Box_C_ExecuteUbergraph_Lobby_Name_Box_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Name_Box.Lobby_Name_Box_C.OnNameSwitched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ULobby_Name_Box_C::OnNameSwitched__DelegateSignature(class FText SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Name_Box_C", "OnNameSwitched__DelegateSignature");

	Params::ULobby_Name_Box_C_OnNameSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}

}


