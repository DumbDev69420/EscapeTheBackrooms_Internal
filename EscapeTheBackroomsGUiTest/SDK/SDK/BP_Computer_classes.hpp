#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x320 - 0x2E0)
// BlueprintGeneratedClass BP_Computer.BP_Computer_C
class ABP_Computer_C : public AInteractablePawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetInteractionComponent*           WidgetInteraction2;                                // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction1;                                // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction;                                 // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Screen;                                            // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUse;                                            // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UpdateLogin;                                       // 0x309(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_22BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     LeftBeam;                                          // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RightBeam;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Computer_C* GetDefaultObj();

	void Update_Beam(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ToggleWidgetInteraction(bool Enable, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void OnRep_UpdateLogin(class UUI_Desktop_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceivePossessed(class AController* NewController);
	void OnPossess();
	void UnPossess();
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void SetActivated();
	void ReceiveBeginPlay();
	void OnVRPossess(bool bPossess);
	void ToggleScreen(bool IsHidden);
	void ExecuteUbergraph_BP_Computer(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, class UUI_Desktop_C* CallFunc_Create_ReturnValue, class UUI_SignIn_C* CallFunc_Create_ReturnValue_1, class AController* K2Node_Event_NewController, const struct FKey& K2Node_InputActionEvent_Key_2, float K2Node_InputAxisKeyEvent_AxisValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bPossess, const struct FKey& K2Node_InputActionEvent_Key_1, bool K2Node_CustomEvent_IsHidden, class UUI_Desktop_C* CallFunc_Create_ReturnValue_2, const struct FKey& Temp_struct_Variable_1, bool CallFunc_ReleaseKey_ReturnValue, bool CallFunc_PressKey_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUserWidget* CallFunc_GetWidget_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_InputKeyEvent_Key, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_4);
};

}


