#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x358 - 0x2E0)
// BlueprintGeneratedClass BP_Menu_Computer.BP_Menu_Computer_C
class ABP_Menu_Computer_C : public AInteractablePawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget;                                            // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Umbrella_id_card_03_Metal_01;                      // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Umbrella_id_card_03_Strap;                         // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Umbrella_id_card_03_Rectangle001;                  // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Umbrella_id_card_03_Metal_03;                      // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Umbrella_id_card_03_Metal_02;                      // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene1;                                            // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction2;                                // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction1;                                // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction;                                 // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Screen;                                            // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUse;                                            // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UpdateLogin;                                       // 0x341(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2274[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     LeftBeam;                                          // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RightBeam;                                         // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Menu_Computer_C* GetDefaultObj();

	void Update_Beam(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ToggleWidgetInteraction(bool Enable, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceivePossessed(class AController* NewController);
	void OnPossess();
	void UnPossess();
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void OnVRPossess(bool bPossess);
	void ToggleScreen(bool IsHidden);
	void ExecuteUbergraph_BP_Menu_Computer(int32 EntryPoint, const struct FKey& Temp_struct_Variable, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key, class UUI_TheHubStats_C* CallFunc_Create_ReturnValue, class AController* K2Node_Event_NewController, bool CallFunc_ReleaseKey_ReturnValue, bool CallFunc_PressKey_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_1, float K2Node_InputAxisKeyEvent_AxisValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_Event_bPossess, const struct FKey& K2Node_InputActionEvent_Key, bool K2Node_CustomEvent_IsHidden, const struct FKey& K2Node_InputActionEvent_Key_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_GetWidget_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ABP_MenuActor_C* CallFunc_GetActorOfClass_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, TArray<class UW_MainMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UW_MainMenu_C* CallFunc_Array_Get_Item);
};

}


