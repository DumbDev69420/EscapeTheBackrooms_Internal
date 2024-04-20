#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCA (0x17A - 0xB0)
// BlueprintGeneratedClass AC_Swimming.AC_Swimming_C
class UAC_Swimming_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABPCharacter_Demo_C*                   Character_Reference;                               // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           Movement_component_reference;                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Character_Mesh_Reference;                          // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Overlapping_Physics_Volume;                     // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_in_Water;                                       // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Underwater;                                     // 0xD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2137[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Breathing_Point_Reference;                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_not_Drowned;                                    // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2138[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystemComponent*>      Spawned_ambient_underwater_particles;              // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Is_Diving;                                         // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2139[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              From_Rot;                                          // 0xFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              To_Rot;                                            // 0x108(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Current_Control_Rot;                               // 0x114(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_sprinting_in_water;                             // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Is_In_Water_Event;                                 // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Is_Underwater_Event;                               // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        WaterHeight;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_213B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Underwater_C*                      Underwater;                                        // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Lights;                                            // 0x158(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsSwimmingUp;                                      // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasDivingHelmet;                                   // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWaterMeshActor*                       Water;                                             // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanDrown;                                          // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSwimmingDown;                                    // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAC_Swimming_C* GetDefaultObj();

	void SwimDownMovementLogic(const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void GetSwimSprintSpeed(float* Speed, float CallFunc_SelectFloat_ReturnValue);
	void GetSwimSpeed(float* Speed, float CallFunc_SelectFloat_ReturnValue);
	void SwimUpMovementLogic(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void CustomDiveMovementLogic(float ScaleValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue);
	void DiveMovementLogic(float ScaleValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue);
	void SetSmoothCharacterRotationOnStrafeMovement(bool Temp_bool_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsSwimming_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
	void Spawn_swimming_ambient_particle();
	void Destroy_underwater_ambient_particle();
	void Pause_underwater_ambient_particle();
	void Unpause_underwater_ambient_particle();
	void ReplicateRotationToServer(const struct FRotator& DesiredRotation);
	void Start_underwater_ambient_particle_timer();
	void On_Begin_Play_Logic_Minus_Swimming();
	void On_Tick_logic_Minus_Swimming();
	void Event_switch_diving_mode();
	void Event_Sprint_swim();
	void Event_normal_swim();
	void Set_normal_swim_speed_on_server();
	void Set_normal_swim_speed_on_client();
	void Set_Sprint_speed_on_server();
	void Set_Sprint_speed_on_client();
	void EventIsInWater(bool IsInWater);
	void EventIsUnderwater(bool IsUnderwater);
	void Spawn_sound(class USoundBase* Sound);
	void OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void MC_Surface();
	void MC_Swim();
	void ToggleUnderwater();
	void ToggleSurface();
	void ExecuteUbergraph_AC_Swimming(int32 EntryPoint, const struct FRotator& K2Node_CustomEvent_DesiredRotation, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool K2Node_CustomEvent_IsInWater, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool K2Node_CustomEvent_IsUnderwater, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, class AEight_FFT_H_Ocean_Sim_C* CallFunc_GetActorOfClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_Underwater_C* CallFunc_GetActorOfClass_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class USoundBase* K2Node_CustomEvent_Sound, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, uint8 K2Node_CustomEvent_PrevCustomMode, uint8 K2Node_CustomEvent_NewCustomMode, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float K2Node_Event_DeltaSeconds, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_Underwater_C* CallFunc_GetActorOfClass_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UParticleSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, float CallFunc_GetSwimSpeed_Speed, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_GetSwimSprintSpeed_Speed, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1);
	void Is_Underwater_Event__DelegateSignature(bool Is_Underwater);
	void Is_In_Water_Event__DelegateSignature(bool Is_in_Water);
};

}


