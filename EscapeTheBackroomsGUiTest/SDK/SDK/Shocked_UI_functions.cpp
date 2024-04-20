#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Shocked_UI.Shocked_UI_C
// (None)

class UClass* UShocked_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shocked_UI_C");

	return Clss;
}


// Shocked_UI_C Shocked_UI.Default__Shocked_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShocked_UI_C* UShocked_UI_C::GetDefaultObj()
{
	static class UShocked_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShocked_UI_C*>(UShocked_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Shocked_UI.Shocked_UI_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShocked_UI_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shocked_UI_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Shocked_UI.Shocked_UI_C.ExecuteUbergraph_Shocked_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShocked_UI_C::ExecuteUbergraph_Shocked_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shocked_UI_C", "ExecuteUbergraph_Shocked_UI");

	Params::UShocked_UI_C_ExecuteUbergraph_Shocked_UI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


