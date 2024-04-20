#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_RestartGame.WB_Button_RestartGame_C
// (None)

class UClass* UWB_Button_RestartGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_RestartGame_C");

	return Clss;
}


// WB_Button_RestartGame_C WB_Button_RestartGame.Default__WB_Button_RestartGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_RestartGame_C* UWB_Button_RestartGame_C::GetDefaultObj()
{
	static class UWB_Button_RestartGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_RestartGame_C*>(UWB_Button_RestartGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button_RestartGame.WB_Button_RestartGame_C.BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button_RestartGame_C::BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_RestartGame_C", "BndEvt__WB_Button_Close_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_RestartGame.WB_Button_RestartGame_C.ExecuteUbergraph_WB_Button_RestartGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_RestartGame_C::ExecuteUbergraph_WB_Button_RestartGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_RestartGame_C", "ExecuteUbergraph_WB_Button_RestartGame");

	Params::UWB_Button_RestartGame_C_ExecuteUbergraph_WB_Button_RestartGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_RestartGame.WB_Button_RestartGame_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_RestartGame_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_RestartGame_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


