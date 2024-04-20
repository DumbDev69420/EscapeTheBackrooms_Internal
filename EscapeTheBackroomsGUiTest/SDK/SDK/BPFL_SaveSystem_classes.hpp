#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_SaveSystem.BPFL_SaveSystem_C
class UBPFL_SaveSystem_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_SaveSystem_C* GetDefaultObj();

	void SetPoppedBalloon(const class FString& BalloonID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue);
	void SetWatchedElevatorVideo(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetEyeDisarmed(const class FString& EyeID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue);
	void SetDidResetPictures(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetPicturesTaken(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetFloorIndex(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetExitIndex(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetLevelDashCheckpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetUnlockedSnackrooms(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetDoorUnlocked(const class FString& DoorID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue);
	void SetFinishedElevator(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void FinishedValve(int32 LevelIndex, int32 ValveIndex, class UObject* __WorldContext, bool Temp_bool_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2);
	void ActivateControlPanel(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool K2Node_SwitchInteger_CmpSuccess);
	void SetPlacedAllTVs(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetUnlockedElevator(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void Set_Powered_All(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetKeyPlaced(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool Temp_bool_Variable);
	void SetPoolsActivated(int32 PoolsActivated, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveDroppedGlowstick(const struct FGuid& GlowstickID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Map_Remove_ReturnValue);
	void AddDroppedGlowstick(const struct FGuid& GlowstickID, const struct FS_Glowstick_Data& GlowstickData, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, const struct FS_Glowstick_Data& K2Node_MakeStruct_S_Glowstick_Data, const struct FS_Glowstick_Data& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FS_Glowstick_Data& K2Node_SetFieldsInStruct_StructOut);
	void SetTVsPlaced(TArray<struct FS_TV_Data>& TVsPlaced, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetHasZone4Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetHasZone3Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetHasZone2Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetHasZone1Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetCompletedBallonPuzzle(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetFoundCassette(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetMembriSpawned(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void GetCompletedLevels(class UObject* __WorldContext, TArray<struct FS_LevelStats>* LevelsCompleted, int32 CurrentLevels, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FS_LevelStats>& Temp_struct_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Set_Spawn_in_Elevator(bool ShouldSpawn, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetHasWatchedVideo(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetCaveCheckpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetReachedCheckpoint(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetVentBroken(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void UnlockedManillaRoom(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetFacelingSpawned(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetTurbinesActivated(int32 Activated, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetLevel10Checkpoint(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetMEGGateOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetActivatedMap(TArray<struct FS_UploadStatus>& Activated, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetDoorBroken(const class FString& DoorID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue);
	void SetLevel05Checkpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetUnlockedSafe(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void GetPlacedCans(class UObject* __WorldContext, int32* CansPlaced, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetLevel7Checkpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetMEGCardCollected(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void PlacedCan(class UObject* __WorldContext, int32 Temp_int_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetSeenFirstHound(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetDifficulty(enum class E_Difficulty Difficulty, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetUnlockedFun(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetBoilerCheckpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetCheckpointReached(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetTeethOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SaveLevelItems(class FName Level, class UObject* __WorldContext, const TArray<struct FS_DroppedItem>& Items, TArray<class ABP_DroppedItem_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_WorldCommon& K2Node_MakeStruct_S_WorldCommon, const struct FS_LevelStats& K2Node_SetFieldsInStruct_StructOut, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_DroppedItem_C* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FS_DroppedItem& K2Node_MakeStruct_S_DroppedItem, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void UnlockedHub(class FName Level, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Loop_Counter_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SetLevel94Checkpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetGaragePowerOn(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void LoadPlayerData(const class FString& UUID, class UObject* __WorldContext, bool* DidFind, struct FS_PlayerData* Inventory, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, const struct FS_PlayerData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SavePlayerData(const class FString& UUID, const struct FS_PlayerData& PlayerData, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetNotesPlaced(TMap<class FName, enum class E_Mailbox> Notes, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void FoundHotelKey(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetBoilerOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetHotelLobbyOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void FinishedLevel(class FName Level, float Speed, class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_LevelStats& CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SetPoweredAllGenerators(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetGeneratorUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetEastSubstationUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetWestSubstationUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetMEGSecurityUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetUnlockedBottom(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void FoundKey(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetHeavyDoorOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetMEGPowerOn(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetUnlockedMEG(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetOpenedVendingMachine(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void Create_New_Slot(const class FString& SlotName, const class FString& SaveType, class UObject* __WorldContext, bool* Success, class UBP_MySaveGame_C* CallFunc_Load_Saves_SaveGame, bool CallFunc_Save_Slot_Success, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class UBP_New_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Set_Collected_Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void Get_Difficulty(class UObject* __WorldContext, enum class E_Difficulty* Difficulty, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void SetCurrentLevel(class FName Level, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame);
	void ConvertStringToFloat(const class FString& In, class UObject* __WorldContext, float* Out, const class FString& CallFunc_Replace_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue);
	void SaveGame(class UBP_New_SaveGame_C* SaveGame, class UObject* __WorldContext, const class FString& Local_SaveName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Load_Game(class UObject* __WorldContext, class UBP_New_SaveGame_C** SaveGame, class UBP_New_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_New_SaveGame_C* K2Node_DynamicCast_AsBP_New_Save_Game, bool K2Node_DynamicCast_bSuccess_1);
	void Found_Ladder(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


