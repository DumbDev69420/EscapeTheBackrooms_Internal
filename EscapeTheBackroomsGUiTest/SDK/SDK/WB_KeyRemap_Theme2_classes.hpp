#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x27C - 0x260)
// WidgetBlueprintGeneratedClass WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C
class UWB_KeyRemap_Theme2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInputKeySelector*                     InputKeySelector;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        KeyInput_Index;                                    // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InputAction_Name;                                  // 0x274(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_KeyRemap_Theme2_C* GetDefaultObj();

	void BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_KeyRemap_Theme2(int32 EntryPoint, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord);
};

}


