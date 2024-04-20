#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x390 - 0x220)
// BlueprintGeneratedClass BP_Cage.BP_Cage_C
class ABP_Cage_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene1;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                       Cable;                                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FishCage_SM_SharkCage_001;                         // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SharkCage;                                         // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Timeline_3_Color_21BECDBF4D49920B51B67EBF19DE40F9; // 0x268(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_Density_21BECDBF4D49920B51B67EBF19DE40F9; // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_Distance_21BECDBF4D49920B51B67EBF19DE40F9; // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_21BECDBF4D49920B51B67EBF19DE40F9; // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2379[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_NewTrack_0_2038750D41E557B554200BBF45C4A1AA; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_2038750D41E557B554200BBF45C4A1AA; // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Alpha_754001BB4F692E55D6B76DAF620CB6A6; // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_754001BB4F692E55D6B76DAF620CB6A6; // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_C70165374BB854183638FC9206D31B3F; // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_C70165374BB854183638FC9206D31B3F; // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClosed;                                          // 0x2C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_237D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            StartingTransform;                                 // 0x2D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            SequenceTransform;                                 // 0x300(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            EndingTransform;                                   // 0x330(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLowering;                                        // 0x360(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_237E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APhysicsVolume*>                Volumes;                                           // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UNiagaraComponent*                     Particles;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AAmbientSound*>                 Ambiences;                                         // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class ABP_Cage_C* GetDefaultObj();

	void OnRep_IsLowering(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void CheckCanClose(bool CallFunc_CanLower_CanLower);
	void CanLower(bool* CanLower, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnRep_IsClosed();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__UnloadPier__EventFunc();
	void Timeline_0__IsUnderwater__EventFunc();
	void Timeline_0__FadeWaterAndLoad__EventFunc();
	void Timeline_0__NewTrack_2__EventFunc();
	void Timeline_0__NewTrack_1__EventFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void LowerCage();
	void BndEvt__BP_Elevator_Hotel_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void MC_Shake();
	void MC_Ring();
	void MC_ElevatorDoors();
	void CloseDoors();
	void OpenDoors();
	void Reset();
	void StartClosing();
	void ReceiveBeginPlay();
	void MC_Fall();
	void MC_Impact();
	void MC_SetWaterVolume();
	void MC_EnableWater();
	void FadeWater();
	void MC_UnderwaterAmbience();
	void ExecuteUbergraph_BP_Cage(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CanLower_CanLower, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State_2, bool K2Node_DynamicCast_bSuccess_3, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item_1, class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State_3, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State_4, bool K2Node_DynamicCast_bSuccess_5, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_3, bool Temp_bool_IsClosed_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_6, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_2, bool K2Node_DynamicCast_bSuccess_7, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_3, bool K2Node_DynamicCast_bSuccess_8, class APhysicsVolume* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_3, class APhysicsVolume* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AMP_GameMode_C* K2Node_DynamicCast_AsMP_Game_Mode, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsServer_ReturnValue, class ABP_Underwater_C* CallFunc_GetActorOfClass_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class AAmbientSound* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_6, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_4, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsServer_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2);
};

}


