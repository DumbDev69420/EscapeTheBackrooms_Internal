#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x35C - 0x328)
// BlueprintGeneratedClass Bacteria_AIC.Bacteria_AIC_C
class ABacteria_AIC_C : public AAIController
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
	static class ABacteria_AIC_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Setup_AI(class UBehaviorTree* Behavior_Tree);
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void SetCanTeleport();
	void SetChase();
	void OnQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void ExecuteUbergraph_Bacteria_AIC(int32 EntryPoint, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RunBehaviorTree_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class ABacteria_BP_C* K2Node_DynamicCast_AsBacteria_BP, bool K2Node_DynamicCast_bSuccess_1, class UBehaviorTree* K2Node_CustomEvent_Behavior_Tree, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, class ABPCharacter_Demo_C* CallFunc_GetActorOfClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class ABacteria_BP_C* K2Node_DynamicCast_AsBacteria_BP_1, bool K2Node_DynamicCast_bSuccess_2, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


