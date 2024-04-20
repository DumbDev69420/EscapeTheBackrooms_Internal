#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x5B8 - 0x4B8)
// BlueprintGeneratedClass BP_Moth.BP_Moth_C
class ABP_Moth_C : public ACharacter
{
public:
	uint8                                        Pad_211C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio1;                                            // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                AttachedPlayer;                                    // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       EyeSight;                                          // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      KillPlayer;                                        // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ToggleState_Alpha_B3C7BB3D404C6E94D9311B9279D18EDC; // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ToggleState__Direction_B3C7BB3D404C6E94D9311B9279D18EDC; // 0x504(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_211D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ToggleState;                                       // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldMove;                                        // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanAttack;                                         // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StartIdle;                                         // 0x512(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_211E[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            IdleTransform;                                     // 0x520(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsIdle;                                            // 0x550(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_211F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartTransform;                                    // 0x560(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABPCharacter_Demo_C*                   Attached;                                          // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HiveLocation;                                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCarrying;                                        // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldTrigger;                                     // 0x5A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CarryingController;                                // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LargerRadius;                                      // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChaseSpeed;                                        // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Moth_C* GetDefaultObj();

	void OnRep_IsIdle();
	void CanSeePlayer(class ABPCharacter_Demo_C* Target, bool* CanSee, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void LookAtTarget(class ABPCharacter_Demo_C* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void StopMovement();
	void LookAtEntity(class ABPCharacter_Demo_C* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void ToggleState__FinishedFunc();
	void ToggleState__UpdateFunc();
	void OnFail_01FE13E14A76136BD0F89EBBB3E97A95(enum class EPathFollowingResult MovementResult);
	void OnSuccess_01FE13E14A76136BD0F89EBBB3E97A95(enum class EPathFollowingResult MovementResult);
	void OnFail_80D0F13747A7105F75433DB2011DDF34(enum class EPathFollowingResult MovementResult);
	void OnSuccess_80D0F13747A7105F75433DB2011DDF34(enum class EPathFollowingResult MovementResult);
	void OnNotifyEnd_826A0D8B4B2AF71A79AA649436631992(class FName NotifyName);
	void OnNotifyBegin_826A0D8B4B2AF71A79AA649436631992(class FName NotifyName);
	void OnInterrupted_826A0D8B4B2AF71A79AA649436631992(class FName NotifyName);
	void OnBlendOut_826A0D8B4B2AF71A79AA649436631992(class FName NotifyName);
	void OnCompleted_826A0D8B4B2AF71A79AA649436631992(class FName NotifyName);
	void ReceiveBeginPlay();
	void StartSound();
	void StopSound();
	void AttackPlayer(class ABPCharacter_Demo_C* Player);
	void MC_KillSound();
	void MC_AttackAnimation();
	void Retreat();
	void ResetRetreat();
	void BndEvt__BP_Hound_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ToggleIdle(bool IsIdle);
	void BringToHive();
	void ResetBringToHive();
	void DropPlayer(bool ShouldAttack);
	void StartCarry();
	void StopCarry();
	void ResetAttack();
	void MC_WarnPlayer();
	void WarnPlayer();
	void ExecuteUbergraph_BP_Moth(int32 EntryPoint, enum class EPathFollowingResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIC_Moth_C* K2Node_DynamicCast_AsAIC_Moth, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaying_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, bool Temp_bool_IsClosed_Variable_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AAIC_Moth_C* K2Node_DynamicCast_AsAIC_Moth_1, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_CanSeePlayer_CanSee, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool K2Node_CustomEvent_IsIdle, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FHE_LookAtLocationSeq& K2Node_MakeStruct_HE_LookAtLocationSeq, TArray<struct FHE_LookAtLocationSeq>& K2Node_MakeArray_Array, const struct FHE_LookAtLocation& K2Node_MakeStruct_HE_LookAtLocation, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, bool K2Node_CustomEvent_ShouldAttack, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, enum class EPathFollowingResult Temp_byte_Variable_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8);
};

}


