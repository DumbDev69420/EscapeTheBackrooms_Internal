#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x520 - 0x4B8)
// BlueprintGeneratedClass Bacteria_BP.Bacteria_BP_C
class ABacteria_BP_C : public ACharacter
{
public:
	uint8                                        Pad_2006[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      KillPlayer;                                        // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldMove;                                        // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2007[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentSpeedLevel;                                 // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTeleport;                                       // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2008[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinutesElapsed;                                    // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         Behavior_Tree;                                     // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanAttack;                                         // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldReset;                                       // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2009[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartingLocation;                                  // 0x4F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShakeTimer;                                        // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentSoundTime;                                  // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_200A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ShakeTimes;                                        // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABacteria_BP_C* GetDefaultObj();

	void CheckShakeTime(bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void ResetPosition(const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void StopMovement();
	void LookAtEntity(class ABPCharacter_Demo_C* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void GetClosestPlayer(class ABPCharacter_Demo_C** Closest, class ABPCharacter_Demo_C* ActorToReturn, float ClosestDistance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void UpdateTeleport();
	void UpdateSpeed(bool CallFunc_IsStandalone_ReturnValue, float CallFunc_SetNewSpeed_NewSpeed, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, class ABacteria_AIC_C* K2Node_DynamicCast_AsBacteria_AIC, bool K2Node_DynamicCast_bSuccess, class ABacteria_AIC_C* K2Node_DynamicCast_AsBacteria_AIC_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsStandalone_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_SetNewSpeed_NewSpeed_1, int32 Temp_int_Variable, float CallFunc_SetNewSpeed_NewSpeed_2, float CallFunc_SetNewSpeed_NewSpeed_3, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetNewSpeed(int32 Count, float* NewSpeed, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_GetNumPlayers_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class ABacteria_AIC_C* K2Node_DynamicCast_AsBacteria_AIC, bool K2Node_DynamicCast_bSuccess);
	void CalcLookAtRotation(class AActor* MyActor, class AActor* Target);
	void ReceiveBeginPlay();
	void StartSound();
	void StopSound();
	void FaceClosestPlayer();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void AttackPlayer(class ABPCharacter_Demo_C* Player);
	void MC_KillSound();
	void MC_KillAnimation();
	void SetupWorldShakes();
	void OnStateChanged(enum class EAudioComponentPlayState PlayState);
	void ExecuteUbergraph_Bacteria_BP(int32 EntryPoint, bool CallFunc_IsPlaying_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ABPCharacter_Demo_C* CallFunc_GetClosestPlayer_Closest, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* K2Node_Event_OtherActor_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_SetActorRotation_ReturnValue, class AActor* K2Node_Event_OtherActor, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class ABacteria_AIC_C* K2Node_DynamicCast_AsBacteria_AIC, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHE_LookAtLocationSeq& K2Node_MakeStruct_HE_LookAtLocationSeq, TArray<struct FHE_LookAtLocationSeq>& K2Node_MakeArray_Array, bool CallFunc_HasAuthority_ReturnValue_1, const struct FHE_LookAtLocation& K2Node_MakeStruct_HE_LookAtLocation, bool CallFunc_HasAuthority_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EAudioComponentPlayState K2Node_CustomEvent_PlayState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
};

}


