#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8D (0x545 - 0x4B8)
// BlueprintGeneratedClass BP_Hound.BP_Hound_C
class ABP_Hound_C : public ACharacter
{
public:
	uint8                                        Pad_248D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       EyeSight;                                          // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      KillPlayer;                                        // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldMove;                                        // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanAttack;                                         // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTargetting;                                      // 0x4EA(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_248E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                RetreatActor;                                      // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyOnRetreat;                                  // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldRoam;                                        // 0x4F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_248F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RetreatTransform;                                  // 0x500(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBehaviorTree*                         BTAsset;                                           // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanChase;                                          // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2490[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SprintSpeed;                                       // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCheckDelete;                                 // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldRemoveInNormal;                              // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanStun;                                           // 0x542(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRetreating;                                      // 0x543(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanHowl;                                           // 0x544(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Hound_C* GetDefaultObj();

	void OnRep_CanHowl();
	void GetStunDuration(float* Delay, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void CanSeePlayer(class ABPCharacter_Demo_C* Target, bool* CanSee, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void LookAtTarget(class ABPCharacter_Demo_C* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void OnRep_IsTargetting(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_1, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1);
	void StopMovement();
	void LookAtEntity(class ABPCharacter_Demo_C* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void OnNotifyEnd_61765EC24FF4E248EA3B909C032488D4(class FName NotifyName);
	void OnNotifyBegin_61765EC24FF4E248EA3B909C032488D4(class FName NotifyName);
	void OnInterrupted_61765EC24FF4E248EA3B909C032488D4(class FName NotifyName);
	void OnBlendOut_61765EC24FF4E248EA3B909C032488D4(class FName NotifyName);
	void OnCompleted_61765EC24FF4E248EA3B909C032488D4(class FName NotifyName);
	void OnNotifyEnd_8DA5DC9D4777A3A447018893354E8C0B(class FName NotifyName);
	void OnNotifyBegin_8DA5DC9D4777A3A447018893354E8C0B(class FName NotifyName);
	void OnInterrupted_8DA5DC9D4777A3A447018893354E8C0B(class FName NotifyName);
	void OnBlendOut_8DA5DC9D4777A3A447018893354E8C0B(class FName NotifyName);
	void OnCompleted_8DA5DC9D4777A3A447018893354E8C0B(class FName NotifyName);
	void OnFail_D233563A4C47828202C239AEFB9124B7(enum class EPathFollowingResult MovementResult);
	void OnSuccess_D233563A4C47828202C239AEFB9124B7(enum class EPathFollowingResult MovementResult);
	void ReceiveBeginPlay();
	void StartSound();
	void StopSound();
	void AttackPlayer(class ABPCharacter_Demo_C* Player);
	void MC_KillSound();
	void Jumpscare(class ABPCharacter_Demo_C* Player);
	void PlayHowl();
	void PlayBlinded();
	void MC_KillAnimation(class ABPCharacter_Demo_C* Target);
	void Retreat();
	void ResetRetreat();
	void BlindHound();
	void ResetBlinded();
	void BndEvt__BP_Hound_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_Hound_KillPlayer_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void MC_Stop(float Delay);
	void ResetHowl();
	void ExecuteUbergraph_BP_Hound(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EPathFollowingResult Temp_byte_Variable, bool Temp_bool_Has_Been_Initd_Variable, class FName K2Node_CustomEvent_NotifyName_8, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIC_Hound_C* K2Node_DynamicCast_AsAIC_Hound, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaying_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player_1, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_9, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABPCharacter_Demo_C* K2Node_CustomEvent_Target, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_4, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanSeePlayer_CanSee, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanSeePlayer_CanSee_1, bool CallFunc_BooleanAND_ReturnValue_1, class FName Temp_name_Variable_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, float K2Node_CustomEvent_Delay, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class AAIC_Hound_C* K2Node_DynamicCast_AsAIC_Hound_1, bool K2Node_DynamicCast_bSuccess_3, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_GetStunDuration_Delay, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class AAIController* CallFunc_GetAIController_ReturnValue_2, class AAIC_Hound_C* K2Node_DynamicCast_AsAIC_Hound_2, bool K2Node_DynamicCast_bSuccess_7);
};

}


