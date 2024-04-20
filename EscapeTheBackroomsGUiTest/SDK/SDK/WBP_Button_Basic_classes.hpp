#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x310 (0x570 - 0x260)
// WidgetBlueprintGeneratedClass WBP_Button_Basic.WBP_Button_Basic_C
class UWBP_Button_Basic_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               KeyboardButton;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  CurrentText;                                       // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LowercaseText;                                     // 0x290(0x18)(Edit, BlueprintVisible)
	class FText                                  UppercaseText;                                     // 0x2A8(0x18)(Edit, BlueprintVisible)
	class UWidgetInteractionComponent*           WidgetInteractor;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ButtonPressed;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  SecondaryText;                                     // 0x2D8(0x18)(Edit, BlueprintVisible)
	enum class EModifierKeys                     ModifierKey;                                       // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseCustomStyle;                                   // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FAD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          CustomStyle;                                       // 0x2F8(0x278)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_Button_Basic_C* GetDefaultObj();

	void ChangeTextToSymbols(bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, class FText K2Node_Select_Default);
	void SetButtonText(class FText TextToUse);
	void ChangeTextCasing(bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CapsLock();
	void SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent);
	void SymbolLock();
	void Space();
	void Shift();
	void SendKeyboardText();
	void ExecuteUbergraph_WBP_Button_Basic(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidgetInteractionComponent* K2Node_Event_WidgetInteractionComponent);
	void ButtonPressed__DelegateSignature(class FText ButtonText, enum class EModifierKeys Modifier);
};

}


