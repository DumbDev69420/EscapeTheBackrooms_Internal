#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x318 - 0x260)
// WidgetBlueprintGeneratedClass W_CreditsTitleName.W_CreditsTitleName_C
class UW_CreditsTitleName_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              MySizeBox;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Name;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HeightSize;                                        // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottomSize;                                        // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x280(0x18)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        Font;                                              // 0x298(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                           FontColor;                                         // 0x2F0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_CreditsTitleName_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_CreditsTitleName(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
};

}


