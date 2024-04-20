#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x310 - 0x290)
// BlueprintGeneratedClass MP_GameState.MP_GameState_C
class AMP_GameState_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABPCharacter_Demo_C*>           PlayersAlive;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class FString, struct FS_HubLevels>     LevelsUnlocked;                                    // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                MatchID;                                           // 0x300(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMP_GameState_C* GetDefaultObj();

	void GenerateUUID(const class FString& EncryptedName, const TArray<class FString>& CharacterSet, TArray<class FString>& K2Node_MakeArray_Array, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Generate_Encrypted_Name(class FText Level, class FString* Name, const class FString& EncryptedName, const TArray<class FString>& CharacterSet, int32 Temp_int_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ReceiveBeginPlay();
	void SetMEGUnlocked();
	void ExecuteUbergraph_MP_GameState(int32 EntryPoint, TArray<struct FS_LevelStats>& CallFunc_GetCompletedLevels_LevelsCompleted, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FS_LevelStats>& K2Node_MakeArray_Array, const struct FS_LevelStats& CallFunc_Array_Get_Item_1, const struct FS_HubLevels& K2Node_MakeStruct_S_HubLevels, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FS_HubLevels& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}


