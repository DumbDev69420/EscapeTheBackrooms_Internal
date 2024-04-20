#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UI_Inventory_ItemToolTip_Row.UI_Inventory_ItemToolTip_Row_C
class UUI_Inventory_ItemToolTip_Row_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_Name;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Rarity;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x278(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUI_Inventory_ItemToolTip_Row_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Init(enum class EN_ItemRarity Rarity);
	void ExecuteUbergraph_UI_Inventory_ItemToolTip_Row(int32 EntryPoint, enum class EN_ItemRarity K2Node_CustomEvent_Rarity, const struct FLinearColor& Temp_struct_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, bool K2Node_Event_IsDesignTime, enum class EN_ItemRarity Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


