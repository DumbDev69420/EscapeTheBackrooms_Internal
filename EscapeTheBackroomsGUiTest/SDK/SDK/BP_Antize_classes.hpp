#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_Antize.BP_Antize_C
class UBP_Antize_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_Antize_C* GetDefaultObj();

	void Save_Slot(class UBP_MySaveGame_C* SaveGame, class UObject* __WorldContext, bool* Success, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Load_Saves(class UObject* __WorldContext, class UBP_MySaveGame_C** SaveGame, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_MySaveGame_C* CallFunc_Create_New_Save_File_SaveGame, class UBP_MySaveGame_C* K2Node_DynamicCast_AsBP_My_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void Finished_Level_Lobby_Hard(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Finished_Level_Lobby_Normal(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CreateNewLobbySave(class UObject* __WorldContext, class UBP_LobbySaveGame_C** SaveGame, const class FString& Local_SaveName, class UBP_LobbySaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void GetLobbySaveGame(class UObject* __WorldContext, class UBP_LobbySaveGame_C** SaveGame, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_LobbySaveGame_C* CallFunc_CreateNewLobbySave_SaveGame, class UBP_LobbySaveGame_C* K2Node_DynamicCast_AsBP_Lobby_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void Finished_Level_Lobby_Easy(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Create_New_Save_File(class UObject* __WorldContext, class UBP_MySaveGame_C** SaveGame, const class FString& Local_SaveName, class UBP_MySaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void FinishedLevel(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_MySaveGame_C* CallFunc_Get_Save_Game_SaveGame, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Get_Save_Game(class UObject* __WorldContext, class UBP_MySaveGame_C** SaveGame, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_MySaveGame_C* CallFunc_Create_New_Save_File_SaveGame, class UBP_MySaveGame_C* K2Node_DynamicCast_AsBP_My_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void FinishedCutscene(class UObject* __WorldContext, class UBP_MySaveGame_C* CallFunc_Get_Save_Game_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue);
	void SaveGame(class UBP_MySaveGame_C* SaveGame, class UObject* __WorldContext, const class FString& Local_SaveName, bool CallFunc_SaveGameToSlot_ReturnValue);
	void ConvertStringToFloat(const class FString& In, class UObject* __WorldContext, float* Out, const class FString& CallFunc_Replace_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue);
	void FinishedEndScene(class UObject* __WorldContext, class UBP_MySaveGame_C* CallFunc_Get_Save_Game_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue);
};

}


