#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass WB_Dropdown_Theme2.WB_Dropdown_Theme2_C
class UWB_Dropdown_Theme2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                       ComboBox;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        Options;                                           // 0x270(0x10)(Edit, BlueprintVisible)
	class FString                                SelectedOption;                                    // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOptionSwitched;                                  // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Dropdown_Theme2_C* GetDefaultObj();

	void Setup(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_FindOptionIndex_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Set_SelectedOption(const class FString& Option);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WB_Dropdown_ComboBoxString_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void ExecuteUbergraph_WB_Dropdown_Theme2(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OnOptionSwitched__DelegateSignature(const class FString& SelectedOption);
};

}


