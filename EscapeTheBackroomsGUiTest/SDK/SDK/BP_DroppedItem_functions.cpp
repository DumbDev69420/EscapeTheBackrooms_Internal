#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem.BP_DroppedItem_C
// (Actor)

class UClass* ABP_DroppedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_C");

	return Clss;
}


// BP_DroppedItem_C BP_DroppedItem.Default__BP_DroppedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_C* ABP_DroppedItem_C::GetDefaultObj()
{
	static class ABP_DroppedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_C*>(ABP_DroppedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DroppedItem.BP_DroppedItem_C.ExamineModeOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::ExamineModeOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "ExamineModeOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.ExamineModeOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::ExamineModeOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "ExamineModeOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.CollisionOn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::CollisionOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "CollisionOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.CollisionOff
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::CollisionOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "CollisionOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.OnEndFocus
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::OnEndFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "OnEndFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.OnBeginFocus
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_C::OnBeginFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "OnBeginFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem.BP_DroppedItem_C.OnEventLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventType              EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_C::OnEventLoaded(enum class EEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "OnEventLoaded");

	Params::ABP_DroppedItem_C_OnEventLoaded_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DroppedItem.BP_DroppedItem_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_C::ToggleEvent(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "ToggleEvent");

	Params::ABP_DroppedItem_C_ToggleEvent_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DroppedItem.BP_DroppedItem_C.ExecuteUbergraph_BP_DroppedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUD_DroppedItem_C*          K2Node_DynamicCast_AsHUD_Dropped_Item                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Item                    CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EN_ItemRarity           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class EEventType              K2Node_CustomEvent_EventType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_C::ExecuteUbergraph_BP_DroppedItem(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FLinearColor& Temp_struct_Variable, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UHUD_DroppedItem_C* K2Node_DynamicCast_AsHUD_Dropped_Item, bool K2Node_DynamicCast_bSuccess_1, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FST_Item& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, enum class EN_ItemRarity Temp_byte_Variable, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class EEventType K2Node_CustomEvent_EventType, bool K2Node_Event_Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_C", "ExecuteUbergraph_BP_DroppedItem");

	Params::ABP_DroppedItem_C_ExecuteUbergraph_BP_DroppedItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Dropped_Item = K2Node_DynamicCast_AsHUD_Dropped_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_1 = K2Node_DynamicCast_AsBP_My_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_EventType = K2Node_CustomEvent_EventType;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;

	UObject::ProcessEvent(Func, &Parms);

}

}


