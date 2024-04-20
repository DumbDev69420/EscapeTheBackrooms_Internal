#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x35C - 0x328)
// BlueprintGeneratedClass AIC_Roaming_Smiler.AIC_Roaming_Smiler_C
class AAIC_Roaming_Smiler_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         BTAsset;                                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CanSeeKey;                                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Target;                                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ShouldTeleport;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayAmount;                                       // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_Roaming_Smiler_C* GetDefaultObj();

	void Setup_AI(class UBehaviorTree* Behavior_Tree);
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void BndEvt__AIC_SkinStealer_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume);
	void OnSeePlayer(class ABPCharacter_Demo_C* Player);
	void OnStopSeePlayer();
	void StartChase(class ABPCharacter_Demo_C* Character);
	void ExecuteUbergraph_AIC_Roaming_Smiler(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Roaming_Smiler_C* K2Node_DynamicCast_AsBP_Roaming_Smiler, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class UBehaviorTree* K2Node_CustomEvent_Behavior_Tree, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1);
};

}


