#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FadeOut_UI.FadeOut_UI_C
// (None)

class UClass* UFadeOut_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FadeOut_UI_C");

	return Clss;
}


// FadeOut_UI_C FadeOut_UI.Default__FadeOut_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFadeOut_UI_C* UFadeOut_UI_C::GetDefaultObj()
{
	static class UFadeOut_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFadeOut_UI_C*>(UFadeOut_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FadeOut_UI.FadeOut_UI_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFadeOut_UI_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FadeOut_UI_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FadeOut_UI.FadeOut_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFadeOut_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FadeOut_UI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FadeOut_UI.FadeOut_UI_C.ExecuteUbergraph_FadeOut_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFadeOut_UI_C::ExecuteUbergraph_FadeOut_UI(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FadeOut_UI_C", "ExecuteUbergraph_FadeOut_UI");

	Params::UFadeOut_UI_C_ExecuteUbergraph_FadeOut_UI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


