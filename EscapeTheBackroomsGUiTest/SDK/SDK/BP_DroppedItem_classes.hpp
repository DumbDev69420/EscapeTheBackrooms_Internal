#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x269 - 0x258)
// BlueprintGeneratedClass BP_DroppedItem.BP_DroppedItem_C
class ABP_DroppedItem_C : public ADroppedItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget;                                            // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableForFocus;                                    // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_C* GetDefaultObj();

	void ExamineModeOn();
	void ExamineModeOff();
	void CollisionOn();
	void CollisionOff();
	void ReceiveBeginPlay();
	void OnEndFocus();
	void OnBeginFocus();
	void OnEventLoaded(enum class EEventType EventType);
	void ToggleEvent(bool Enable);
	void ExecuteUbergraph_BP_DroppedItem(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FLinearColor& Temp_struct_Variable, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UHUD_DroppedItem_C* K2Node_DynamicCast_AsHUD_Dropped_Item, bool K2Node_DynamicCast_bSuccess_1, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FST_Item& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, enum class EN_ItemRarity Temp_byte_Variable, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class EEventType K2Node_CustomEvent_EventType, bool K2Node_Event_Enable);
};

}


