#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x330 - 0x260)
// WidgetBlueprintGeneratedClass UI_Calc.UI_Calc_C
class UUI_Calc_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Zero;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               One;                                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Two;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Three;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Four;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Five;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Six;                                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Seven;                                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Eight;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Nine;                                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Clear;                                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Divide;                                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Dot;                                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Equal;                                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Minus;                                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Multiply;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Plus;                                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Result;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                FirstNumber;                                       // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                SecondNumber;                                      // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         InputFirstNumber;                                  // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OperationID;                                       // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                OperationResult;                                   // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Calc_C* GetDefaultObj();

	void BndEvt__2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__3_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__4_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__5_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__6_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__7_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__8_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__9_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__divide_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__clear_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__divide_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__plus_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Multiply_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Minus_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__dot_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature();
	void Compute();
	void BndEvt__equal_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Calc(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, bool CallFunc_EqualEqual_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_StringToFloat_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_10);
};

}


