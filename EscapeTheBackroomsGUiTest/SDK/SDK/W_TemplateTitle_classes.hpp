#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x29C - 0x260)
// WidgetBlueprintGeneratedClass W_TemplateTitle.W_TemplateTitle_C
class UW_TemplateTitle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              MySizeBox;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Title;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ShowTitle;                                         // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         First_;                                            // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_206B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomHeight;                                      // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        CustomWidth;                                       // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TemplateTitle_C* GetDefaultObj();

	void ChangeTitleColor(const struct FSlateColor& NewColorAndOpacity);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_TemplateTitle(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, float K2Node_Select_Default);
};

}


