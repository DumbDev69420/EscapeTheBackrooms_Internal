#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2E0 - 0x280)
// BlueprintGeneratedClass BP_LobbyActor.BP_LobbyActor_C
class ABP_LobbyActor_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget;                                            // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Keyboard;                                          // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*            MotionController;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*            MotionController1;                                 // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction1;                                // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction;                                 // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_Keyboard_Basic_C*                 WBP_Keyboard_Basic;                                // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     LeftBeam;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RightBeam;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LobbyActor_C* GetDefaultObj();

	void Update_Beam(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_3);
	void ToggleWidgetInteraction(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1);
	void RefreshFocus(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void InpActEvt_Use_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Secondary_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Secondary_K2Node_InputActionEvent_0(const struct FKey& Key);
	void OpenSettings();
	void CloseSettings();
	void ToggleKeyboard(bool Hide);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LobbyActor(int32 EntryPoint, class UWB_SettingsPanel_Theme2_C* CallFunc_Create_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& Temp_struct_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_CustomEvent_Hide, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_4, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, TScriptInterface<class IBPI_KeyboardInteraction_C> K2Node_DynamicCast_AsBPI_Keyboard_Interaction, bool K2Node_DynamicCast_bSuccess, class UWBP_Keyboard_Basic_C* K2Node_DynamicCast_AsWBP_Keyboard_Basic, bool K2Node_DynamicCast_bSuccess_1, class APostProcessVolume* CallFunc_GetActorOfClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACameraActor* CallFunc_GetActorOfClass_ReturnValue_1, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class ACameraActor* CallFunc_GetActorOfClass_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_MainMenu_C* CallFunc_Create_ReturnValue_1, class ULobby_Menu_C* K2Node_DynamicCast_AsLobby_Menu, bool K2Node_DynamicCast_bSuccess_3);
};

}


