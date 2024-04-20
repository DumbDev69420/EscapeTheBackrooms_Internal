#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x364 - 0x328)
// BlueprintGeneratedClass AIC_Moth.AIC_Moth_C
class AAIC_Moth_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         BTAsset;                                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CanSeeKey;                                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Target;                                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  IsRetreated;                                       // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  IsWarning;                                         // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayAmount;                                       // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_Moth_C* GetDefaultObj();

	void Setup_AI();
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void Retreat();
	void TriggerAggressive(class ABPCharacter_Demo_C* Target);
	void BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume);
	void ResetAggressive();
	void OnSensedPlayer(class ABPCharacter_Demo_C* Player);
	void ResetSensing();
	void ExecuteUbergraph_AIC_Moth(int32 EntryPoint, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Moth_C* K2Node_DynamicCast_AsBP_Moth, bool K2Node_DynamicCast_bSuccess_1, class ABPCharacter_Demo_C* K2Node_CustomEvent_Target, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_RunBehaviorTree_ReturnValue, class ABP_Moth_C* K2Node_DynamicCast_AsBP_Moth_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_Moth_C* K2Node_DynamicCast_AsBP_Moth_2, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, bool CallFunc_IsValid_ReturnValue_1);
};

}


