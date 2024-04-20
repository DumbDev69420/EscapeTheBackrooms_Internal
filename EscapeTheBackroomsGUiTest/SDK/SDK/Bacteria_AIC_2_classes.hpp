#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x35D - 0x328)
// BlueprintGeneratedClass Bacteria_AIC_2.Bacteria_AIC_2_C
class ABacteria_AIC_2_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                         BTAsset;                                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CanSeeKey;                                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Target;                                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ShouldTeleport;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayAmount;                                       // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NeedsToSetupPatrol;                                // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABacteria_AIC_2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void SetCanTeleport();
	void ExecuteUbergraph_Bacteria_AIC_2(int32 EntryPoint, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABacteria_Roaming_BP_C* K2Node_DynamicCast_AsBacteria_Roaming_BP, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABacteria_Roaming_BP_C* K2Node_DynamicCast_AsBacteria_Roaming_BP_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1);
};

}


