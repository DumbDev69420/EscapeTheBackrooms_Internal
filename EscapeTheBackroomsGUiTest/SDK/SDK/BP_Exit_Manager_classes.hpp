#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x234 - 0x220)
// BlueprintGeneratedClass BP_Exit_Manager.BP_Exit_Manager_C
class ABP_Exit_Manager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Players;                                           // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Exit_Manager_C* GetDefaultObj();

	void AddPlayer();
	void StartChecking();
	void CheckPlayers();
	void ExecuteUbergraph_BP_Exit_Manager(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AMP_GameMode_C* K2Node_DynamicCast_AsMP_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


