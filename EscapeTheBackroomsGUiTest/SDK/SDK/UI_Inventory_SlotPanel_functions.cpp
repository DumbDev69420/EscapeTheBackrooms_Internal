#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C
// (None)

class UClass* UUI_Inventory_SlotPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Inventory_SlotPanel_C");

	return Clss;
}


// UI_Inventory_SlotPanel_C UI_Inventory_SlotPanel.Default__UI_Inventory_SlotPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Inventory_SlotPanel_C* UUI_Inventory_SlotPanel_C::GetDefaultObj()
{
	static class UUI_Inventory_SlotPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Inventory_SlotPanel_C*>(UUI_Inventory_SlotPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_SlotPanel_C::SetIcon(class FName Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_SlotPanel_C", "SetIcon");

	Params::UUI_Inventory_SlotPanel_C_SetIcon_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C.ExecuteUbergraph_UI_Inventory_SlotPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Item                    CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Inventory_SlotPanel_C::ExecuteUbergraph_UI_Inventory_SlotPanel(int32 EntryPoint, class FName K2Node_CustomEvent_Item, const struct FST_Item& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_SlotPanel_C", "ExecuteUbergraph_UI_Inventory_SlotPanel");

	Params::UUI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


