#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C
// (None)

class UClass* UUI_Inventory_ItemToolTip_Row_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Inventory_ItemToolTip_Row_C");

	return Clss;
}


// UI_Inventory_ItemToolTip_Row_C UI_Inventory_ItemToolTip_Row.Default__UI_Inventory_ItemToolTip_Row_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Inventory_ItemToolTip_Row_C* UUI_Inventory_ItemToolTip_Row_C::GetDefaultObj()
{
	static class UUI_Inventory_ItemToolTip_Row_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Inventory_ItemToolTip_Row_C*>(UUI_Inventory_ItemToolTip_Row_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Inventory_ItemToolTip_Row_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_Row_C", "PreConstruct");

	Params::UUI_Inventory_ItemToolTip_Row_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EN_ItemRarity           Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_ItemToolTip_Row_C::Init(enum class EN_ItemRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_Row_C", "Init");

	Params::UUI_Inventory_ItemToolTip_Row_C_Init_Params Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C.ExecuteUbergraph_UI_Inventory_ItemToolTip_Row
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EN_ItemRarity           K2Node_CustomEvent_Rarity                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EN_ItemRarity           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_Inventory_ItemToolTip_Row_C::ExecuteUbergraph_UI_Inventory_ItemToolTip_Row(int32 EntryPoint, enum class EN_ItemRarity K2Node_CustomEvent_Rarity, const struct FLinearColor& Temp_struct_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, bool K2Node_Event_IsDesignTime, enum class EN_ItemRarity Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_Row_C", "ExecuteUbergraph_UI_Inventory_ItemToolTip_Row");

	Params::UUI_Inventory_ItemToolTip_Row_C_ExecuteUbergraph_UI_Inventory_ItemToolTip_Row_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Rarity = K2Node_CustomEvent_Rarity;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


