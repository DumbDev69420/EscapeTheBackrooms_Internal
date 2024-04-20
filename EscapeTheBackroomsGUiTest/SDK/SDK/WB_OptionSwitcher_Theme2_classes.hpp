#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass WB_OptionSwitcher_Theme2.WB_OptionSwitcher_Theme2_C
class UWB_OptionSwitcher_Theme2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Decrease_Btn;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Increase_Btn;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOptionSwitched;                                  // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                        Options;                                           // 0x290(0x10)(Edit, BlueprintVisible)
	class FString                                SelectedOption;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Allow_OptionLooping_;                              // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWB_OptionSwitcher_Theme2_C* GetDefaultObj();

	void Setup(int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item);
	void Set_SelectedOption(const class FString& SelectedOption, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Switch_Option(bool Decrease_, int32 Max_Options, int32 Min_Options, int32 Current_Selection, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WB_OptionSwitcher_Decrease_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_OptionSwitcher_Increase_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WB_OptionSwitcher_Theme2(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnOptionSwitched__DelegateSignature(const class FString& SelectedOption);
};

}


