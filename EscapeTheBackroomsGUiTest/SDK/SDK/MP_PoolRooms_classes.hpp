#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x374 - 0x368)
// BlueprintGeneratedClass MP_PoolRooms.MP_PoolRooms_C
class AMP_PoolRooms_C : public AMP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        CurrentSpawnIndex;                                 // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMP_PoolRooms_C* GetDefaultObj();

	class AActor* ChoosePlayerStart(class AController* Player, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class APlayerStart* CallFunc_Array_Get_Item);
	void ReceiveBeginPlay();
	void DarkRoomsSubtitle();
	void OnPlayerSpawn(class ABPCharacter_Demo_C* Player);
	void CheckWater();
	void CheckPlayer();
	void ExecuteUbergraph_MP_PoolRooms(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, bool CallFunc_IsStandalone_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_Event_Player, class UWater_Ripple_Component_C* CallFunc_AddComponentByClass_ReturnValue, class AFancyPlayerState* K2Node_DynamicCast_AsFancy_Player_State, bool K2Node_DynamicCast_bSuccess_1, TArray<class ABP_RefreshWaterBodies_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_FluidSim_01_C* CallFunc_GetActorOfClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABPCharacter_Demo_C* CallFunc_GetActorOfClass_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWater_Ripple_Component_C* CallFunc_GetComponentByClass_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetVisualEffectQuality_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsStandalone_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class ABP_RefreshWaterBodies_C* CallFunc_Array_Get_Item);
};

}


