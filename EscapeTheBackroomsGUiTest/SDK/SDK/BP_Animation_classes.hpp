#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x4E9 - 0x4B8)
// BlueprintGeneratedClass BP_Animation.BP_Animation_C
class ABP_Animation_C : public ACharacter
{
public:
	uint8                                        Pad_78D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     KillPlayer;                                        // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldMove;                                        // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_78E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABPCharacter_Demo_C*                   Target;                                            // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         CanAttack;                                         // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Animation_C* GetDefaultObj();

	void LookAtEntity(class ABPCharacter_Demo_C* Target, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void StopMovement();
	void OnMoveFinished_7E70DA774128EF044FF5A1902873E256(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_7E70DA774128EF044FF5A1902873E256();
	void OnMoveFinished_FA9FB91748D8CD6E57E2CFB9369E87DF(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_FA9FB91748D8CD6E57E2CFB9369E87DF();
	void StartChasing();
	void AttackPlayer(class ABPCharacter_Demo_C* Player);
	void MC_KillSound(class ABPCharacter_Demo_C* Character);
	void ReceiveBeginPlay();
	void OnQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void Jumpscare(class ABPCharacter_Demo_C* Player);
	void BndEvt__BP_Animation_KillPlayer_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Retreat(const struct FVector& Location);
	void MC_KillAnimation(class ABPCharacter_Demo_C* Player);
	void MC_ChangeEyeColor();
	void MC_StartSound();
	void MC_StopSound();
	void StopSound();
	void ExecuteUbergraph_BP_Animation(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_Result_1, class AAIController* K2Node_CustomEvent_AIController_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Character, const struct FHE_LookAtLocationSeq& K2Node_MakeStruct_HE_LookAtLocationSeq, bool CallFunc_IsLocallyControlled_ReturnValue, TArray<struct FHE_LookAtLocationSeq>& K2Node_MakeArray_Array, const struct FHE_LookAtLocation& K2Node_MakeStruct_HE_LookAtLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector& K2Node_CustomEvent_Location, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AAIController* CallFunc_GetAIController_ReturnValue_1, class ABPCharacter_Demo_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAITask_MoveTo* CallFunc_AIMoveTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, bool CallFunc_IsLocallyControlled_ReturnValue_1, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, bool CallFunc_IsValid_ReturnValue_3, class ABPCharacter_Demo_C* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABPCharacter_Demo_C* CallFunc_Array_Random_OutItem_2, int32 CallFunc_Array_Random_OutIndex_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAITask_MoveTo* CallFunc_AIMoveTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
};

}


