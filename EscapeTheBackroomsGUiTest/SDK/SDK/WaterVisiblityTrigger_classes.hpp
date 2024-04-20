#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// BlueprintGeneratedClass WaterVisiblityTrigger.WaterVisiblityTrigger_C
class AWaterVisiblityTrigger_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AEight_FFT_H_Ocean_Sim_C*              Water;                                             // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Fish_Manager_C*                    FishManager;                                       // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWaterVisiblityTrigger_C* GetDefaultObj();

	void FishScare();
	void StopSinkingPlayers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void CheckAllPlayersUnderwater(class ABPCharacter_Demo_C* DivingPlayer, bool* Underwater, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_WaterVisiblityTrigger(int32 EntryPoint, class AActor* K2Node_Event_OtherActor);
};

}


