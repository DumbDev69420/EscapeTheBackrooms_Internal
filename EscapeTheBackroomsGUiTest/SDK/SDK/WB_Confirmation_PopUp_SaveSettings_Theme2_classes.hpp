#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass WB_Confirmation_PopUp_SaveSettings_Theme2.WB_Confirmation_PopUp_SaveSettings_Theme2_C
class UWB_Confirmation_PopUp_SaveSettings_Theme2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Button_Confirmation_Theme2_C*      WB_Button_Confirmation_Theme2_Left;                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_Confirmation_Theme2_C*      WB_Button_Confirmation_Theme2_Right;               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked_Confirm;                                 // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClicked_Decline;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Confirmation_PopUp_SaveSettings_Theme2_C* GetDefaultObj();

	void BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Left_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WB_Confirmation_PopUp_SaveSettings_Theme2_WB_Button_Confirmation_Theme2_Right_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WB_Confirmation_PopUp_SaveSettings_Theme2(int32 EntryPoint);
	void OnClicked_Decline__DelegateSignature();
	void OnClicked_Confirm__DelegateSignature();
};

}


