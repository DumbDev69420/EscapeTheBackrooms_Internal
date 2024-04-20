#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Inventory_ItemToolTip.UI_Inventory_ItemToolTip_C
// (None)

class UClass* UUI_Inventory_ItemToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Inventory_ItemToolTip_C");

	return Clss;
}


// UI_Inventory_ItemToolTip_C UI_Inventory_ItemToolTip.Default__UI_Inventory_ItemToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Inventory_ItemToolTip_C* UUI_Inventory_ItemToolTip_C::GetDefaultObj()
{
	static class UUI_Inventory_ItemToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Inventory_ItemToolTip_C*>(UUI_Inventory_ItemToolTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Inventory_ItemToolTip.UI_Inventory_ItemToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Inventory_ItemToolTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Inventory_ItemToolTip.UI_Inventory_ItemToolTip_C.ExecuteUbergraph_UI_Inventory_ItemToolTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Item                    CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Inventory_ItemToolTip_C::ExecuteUbergraph_UI_Inventory_ItemToolTip(int32 EntryPoint, const struct FST_Item& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Inventory_ItemToolTip_C", "ExecuteUbergraph_UI_Inventory_ItemToolTip");

	Params::UUI_Inventory_ItemToolTip_C_ExecuteUbergraph_UI_Inventory_ItemToolTip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


