#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass MP_Thallasophobia.MP_Thallasophobia_C
class AMP_Thallasophobia_C : public AMP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMP_Thallasophobia_C* GetDefaultObj();

	class AActor* ChoosePlayerStart(class AController* Player, class APlayerStart* PlayerStart, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_BooleanAND_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue);
	void LoadCheckpoints(TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors_1, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors_2, bool K2Node_SwitchInteger_CmpSuccess);
	void OnPlayerSpawn(class ABPCharacter_Demo_C* Player);
	void ExecuteUbergraph_MP_Thallasophobia(int32 EntryPoint, class ABPCharacter_Demo_C* K2Node_Event_Player, class UAC_Swimming_C* CallFunc_AddComponentByClass_ReturnValue);
};

}


