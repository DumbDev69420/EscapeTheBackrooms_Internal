#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x35C - 0x328)
// BlueprintGeneratedClass AIC_Hound.AIC_Hound_C
class AAIC_Hound_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  CanSeeKey;                                         // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Target;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  IsRetreated;                                       // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  IsWarning;                                         // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayAmount;                                       // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_Hound_C* GetDefaultObj();

	void Setup_AI(class UBehaviorTree* BTAsset);
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void Retreat();
	void TriggerAggressive(class ABPCharacter_Demo_C* Target);
	void BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume);
	void WarnPlayer(class ABPCharacter_Demo_C* Target);
	void ResetAggressive();
	void ResetFlashlightCheck();
	void ExecuteUbergraph_AIC_Hound(int32 EntryPoint, class UBehaviorTree* K2Node_CustomEvent_BTAsset, class APawn* K2Node_ComponentBoundEvent_Pawn, bool CallFunc_RunBehaviorTree_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound, bool K2Node_DynamicCast_bSuccess_2, class ABPCharacter_Demo_C* K2Node_CustomEvent_Target_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_GetValueAsBool_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetValueAsBool_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Target, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_1, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_HasAuthority_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_3, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_4, bool K2Node_DynamicCast_bSuccess_7, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_5, bool K2Node_DynamicCast_bSuccess_8);
};

}


