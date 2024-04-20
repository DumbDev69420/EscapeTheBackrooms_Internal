#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x3D4 - 0x368)
// BlueprintGeneratedClass MP_Level94.MP_Level94_C
class AMP_Level94_C : public AMP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsNight;                                           // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_215F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class ABPCharacter_Demo_C*>      PlayerMap;                                         // 0x378(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               RetreatLocation;                                   // 0x3C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMP_Level94_C* GetDefaultObj();

	void LoadCheckpoints(TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors_1, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors_2, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors_3, bool K2Node_SwitchInteger_CmpSuccess);
	class AActor* ChoosePlayerStart(class AController* Player, class APlayerStart* PlayerStart, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerStart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsStandalone_ReturnValue);
	void OnPlayerSpawn(class ABPCharacter_Demo_C* Player);
	void SpawnAnimations();
	void OnQueryFinish(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void RemoveAnimations();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MP_Level94(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABPCharacter_Demo_C* K2Node_Event_Player, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Animation_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Map_Remove_ReturnValue, TArray<class ABP_Animation_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Animation_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class ABP_Animation_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_Animation_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


