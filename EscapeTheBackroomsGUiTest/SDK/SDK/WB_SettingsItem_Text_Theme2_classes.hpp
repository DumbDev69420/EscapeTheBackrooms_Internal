#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass WB_SettingsItem_Text_Theme2.WB_SettingsItem_Text_Theme2_C
class UWB_SettingsItem_Text_Theme2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Description_Text;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title_Text;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x278(0x18)(Edit, BlueprintVisible)
	class FText                                  Description;                                       // 0x290(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWB_SettingsItem_Text_Theme2_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WB_SettingsItem_Text_Theme2(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


