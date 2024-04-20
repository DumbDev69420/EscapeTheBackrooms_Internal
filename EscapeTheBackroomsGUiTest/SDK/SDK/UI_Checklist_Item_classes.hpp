#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x289 - 0x260)
// WidgetBlueprintGeneratedClass UI_Checklist_Item.UI_Checklist_Item_C
class UUI_Checklist_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_54;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         WasFound;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUI_Checklist_Item_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UI_Checklist_Item(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


