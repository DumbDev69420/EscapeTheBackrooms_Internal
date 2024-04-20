#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x130 - 0xB0)
// BlueprintGeneratedClass Water_Ripple_Component.Water_Ripple_Component_C
class UWater_Ripple_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFluidForceDynamic                    FluidForceDynamic_Settings;                        // 0xB8(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_FluidSim_01_C*                     Sim;                                               // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWater_Ripple_Component_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Cast();
	void ExecuteUbergraph_Water_Ripple_Component(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_FluidSim_01_C* CallFunc_GetActorOfClass_ReturnValue);
};

}


