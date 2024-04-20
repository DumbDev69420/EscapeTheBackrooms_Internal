#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x340 - 0x328)
// BlueprintGeneratedClass AIC_Animation.AIC_Animation_C
class AAIC_Animation_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  Target;                                            // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_Animation_C* GetDefaultObj();

	void BndEvt__PartyGoer_BP_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void ExecuteUbergraph_AIC_Animation(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess);
};

}


