#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UI_Gate.UI_Gate_C
class UUI_Gate_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               CancelButton;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RunButton;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_3;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_4;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_5;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_6;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_108;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_563;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_592;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Desktop_C*                         Desktop;                                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Gate_C* GetDefaultObj();

	void CheckFont(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue);
	void BndEvt__UI_SecurityPopup_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_SecurityPopup_RunButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Gate_RunButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Gate_CancelButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_Gate(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UObject* CallFunc_GetOuterObject_ReturnValue_2, class UObject* CallFunc_GetOuterObject_ReturnValue_3, class UUI_Drag_C* K2Node_DynamicCast_AsUI_Drag, bool K2Node_DynamicCast_bSuccess, class UUI_Drag_C* K2Node_DynamicCast_AsUI_Drag_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class UUI_SecurityPopup_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABP_Computer_C* K2Node_DynamicCast_AsBP_Computer, bool K2Node_DynamicCast_bSuccess_2, class UUI_Drag_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable);
};

}


