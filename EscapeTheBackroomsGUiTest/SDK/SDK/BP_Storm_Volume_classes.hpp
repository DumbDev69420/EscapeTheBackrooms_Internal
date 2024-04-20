#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x248 - 0x228)
// BlueprintGeneratedClass BP_Storm_Volume.BP_Storm_Volume_C
class ABP_Storm_Volume_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Ocean_Manager_C*                   OceanManager;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Lighthouse_C*                      Lighthouse;                                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Storm_Volume_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void StartRising();
	void StopRising();
	void ResetRising();
	void ResetStop();
	void ExecuteUbergraph_BP_Storm_Volume(int32 EntryPoint, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, class ABP_RowBoat_C* K2Node_DynamicCast_AsBP_Row_Boat, bool K2Node_DynamicCast_bSuccess, class ABP_RowBoat_C* K2Node_DynamicCast_AsBP_Row_Boat_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_2, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
};

}


