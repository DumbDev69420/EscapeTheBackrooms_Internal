#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// BlueprintGeneratedClass BP_VRMenu.BP_VRMenu_C
class ABP_VRMenu_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_VRMenu_C* GetDefaultObj();

	void RefreshFocus(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UnHide();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VRMenu(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess);
};

}


