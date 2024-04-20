#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x4E4 - 0x4B8)
// BlueprintGeneratedClass Howler_BP.Howler_BP_C
class AHowler_BP_C : public ACharacter
{
public:
	uint8                                        Pad_1FC9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ShouldMove;                                        // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABPCharacter_Demo_C*                   Target;                                            // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSpeedLevel;                                 // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTeleport;                                       // 0x4DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinutesElapsed;                                    // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHowler_BP_C* GetDefaultObj();

	void UpdateSpeed(int32 Temp_int_Variable, float CallFunc_SetNewSpeed_NewSpeed, float CallFunc_SetNewSpeed_NewSpeed_1, float CallFunc_SetNewSpeed_NewSpeed_2, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetNewSpeed(int32 Count, float* NewSpeed, bool K2Node_SwitchInteger_CmpSuccess);
	void CalcLookAtRotation(class AActor* MyActor, class AActor* Target);
	void SetShouldMove(class ABPCharacter_Demo_C* CallFunc_GetActorOfClass_ReturnValue);
	void OnFail_EF39D1F748D7143EACEEED91701EE4FB(enum class EPathFollowingResult MovementResult);
	void OnSuccess_EF39D1F748D7143EACEEED91701EE4FB(enum class EPathFollowingResult MovementResult);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PlayRunAnim();
	void ExecuteUbergraph_Howler_BP(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class ABPCharacter_Demo_C* CallFunc_GetActorOfClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


