#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Checklist_Item.UI_Checklist_Item_C
// (None)

class UClass* UUI_Checklist_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Checklist_Item_C");

	return Clss;
}


// UI_Checklist_Item_C UI_Checklist_Item.Default__UI_Checklist_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Checklist_Item_C* UUI_Checklist_Item_C::GetDefaultObj()
{
	static class UUI_Checklist_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Checklist_Item_C*>(UUI_Checklist_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Checklist_Item.UI_Checklist_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Checklist_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Checklist_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Checklist_Item.UI_Checklist_Item_C.ExecuteUbergraph_UI_Checklist_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Checklist_Item_C::ExecuteUbergraph_UI_Checklist_Item(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Checklist_Item_C", "ExecuteUbergraph_UI_Checklist_Item");

	Params::UUI_Checklist_Item_C_ExecuteUbergraph_UI_Checklist_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


