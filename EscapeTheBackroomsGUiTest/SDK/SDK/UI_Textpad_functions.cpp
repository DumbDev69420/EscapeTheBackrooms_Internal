#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Textpad.UI_Textpad_C
// (None)

class UClass* UUI_Textpad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Textpad_C");

	return Clss;
}


// UI_Textpad_C UI_Textpad.Default__UI_Textpad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Textpad_C* UUI_Textpad_C::GetDefaultObj()
{
	static class UUI_Textpad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Textpad_C*>(UUI_Textpad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Textpad.UI_Textpad_C.PresetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Textpad_C::PresetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Textpad_C", "PresetText");

	Params::UUI_Textpad_C_PresetText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Textpad.UI_Textpad_C.ExecuteUbergraph_UI_Textpad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText                                        (None)

void UUI_Textpad_C::ExecuteUbergraph_UI_Textpad(int32 EntryPoint, class FText K2Node_CustomEvent_InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Textpad_C", "ExecuteUbergraph_UI_Textpad");

	Params::UUI_Textpad_C_ExecuteUbergraph_UI_Textpad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;

	UObject::ProcessEvent(Func, &Parms);

}

}


