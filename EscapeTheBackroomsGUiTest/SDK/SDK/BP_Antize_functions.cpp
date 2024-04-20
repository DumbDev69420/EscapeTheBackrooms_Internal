#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Antize.BP_Antize_C
// (None)

class UClass* UBP_Antize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Antize_C");

	return Clss;
}


// BP_Antize_C BP_Antize.Default__BP_Antize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Antize_C* UBP_Antize_C::GetDefaultObj()
{
	static class UBP_Antize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Antize_C*>(UBP_Antize_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Antize.BP_Antize_C.Save Slot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MySaveGame_C*            SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Save_Slot(class UBP_MySaveGame_C* SaveGame, class UObject* __WorldContext, bool* Success, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Save Slot");

	Params::UBP_Antize_C_Save_Slot_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Antize.BP_Antize_C.Load Saves
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            CallFunc_Create_New_Save_File_SaveGame                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            K2Node_DynamicCast_AsBP_My_Save_Game                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Load_Saves(class UObject* __WorldContext, class UBP_MySaveGame_C** SaveGame, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_MySaveGame_C* CallFunc_Create_New_Save_File_SaveGame, class UBP_MySaveGame_C* K2Node_DynamicCast_AsBP_My_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Load Saves");

	Params::UBP_Antize_C_Load_Saves_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_Create_New_Save_File_SaveGame = CallFunc_Create_New_Save_File_SaveGame;
	Parms.K2Node_DynamicCast_AsBP_My_Save_Game = K2Node_DynamicCast_AsBP_My_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_Antize.BP_Antize_C.Finished Level Lobby Hard
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         CallFunc_GetLobbySaveGame_SaveGame                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelStats               K2Node_MakeStruct_S_LevelStats                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Finished_Level_Lobby_Hard(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Finished Level Lobby Hard");

	Params::UBP_Antize_C_Finished_Level_Lobby_Hard_Params Parms{};

	Parms.LevelIndex = LevelIndex;
	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLobbySaveGame_SaveGame = CallFunc_GetLobbySaveGame_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_S_LevelStats = K2Node_MakeStruct_S_LevelStats;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Antize.BP_Antize_C.Finished Level Lobby Normal
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         CallFunc_GetLobbySaveGame_SaveGame                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelStats               K2Node_MakeStruct_S_LevelStats                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Finished_Level_Lobby_Normal(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Finished Level Lobby Normal");

	Params::UBP_Antize_C_Finished_Level_Lobby_Normal_Params Parms{};

	Parms.LevelIndex = LevelIndex;
	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLobbySaveGame_SaveGame = CallFunc_GetLobbySaveGame_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_S_LevelStats = K2Node_MakeStruct_S_LevelStats;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Antize.BP_Antize_C.CreateNewLobbySave
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SaveName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::CreateNewLobbySave(class UObject* __WorldContext, class UBP_LobbySaveGame_C** SaveGame, const class FString& Local_SaveName, class UBP_LobbySaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "CreateNewLobbySave");

	Params::UBP_Antize_C_CreateNewLobbySave_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_SaveName = Local_SaveName;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_Antize.BP_Antize_C.GetLobbySaveGame
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         CallFunc_CreateNewLobbySave_SaveGame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         K2Node_DynamicCast_AsBP_Lobby_Save_Game                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::GetLobbySaveGame(class UObject* __WorldContext, class UBP_LobbySaveGame_C** SaveGame, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_LobbySaveGame_C* CallFunc_CreateNewLobbySave_SaveGame, class UBP_LobbySaveGame_C* K2Node_DynamicCast_AsBP_Lobby_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "GetLobbySaveGame");

	Params::UBP_Antize_C_GetLobbySaveGame_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_CreateNewLobbySave_SaveGame = CallFunc_CreateNewLobbySave_SaveGame;
	Parms.K2Node_DynamicCast_AsBP_Lobby_Save_Game = K2Node_DynamicCast_AsBP_Lobby_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_Antize.BP_Antize_C.Finished Level Lobby Easy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LobbySaveGame_C*         CallFunc_GetLobbySaveGame_SaveGame                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelStats               K2Node_MakeStruct_S_LevelStats                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Finished_Level_Lobby_Easy(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Finished Level Lobby Easy");

	Params::UBP_Antize_C_Finished_Level_Lobby_Easy_Params Parms{};

	Parms.LevelIndex = LevelIndex;
	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLobbySaveGame_SaveGame = CallFunc_GetLobbySaveGame_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_S_LevelStats = K2Node_MakeStruct_S_LevelStats;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Antize.BP_Antize_C.Create New Save File
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SaveName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Create_New_Save_File(class UObject* __WorldContext, class UBP_MySaveGame_C** SaveGame, const class FString& Local_SaveName, class UBP_MySaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Create New Save File");

	Params::UBP_Antize_C_Create_New_Save_File_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_SaveName = Local_SaveName;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_Antize.BP_Antize_C.FinishedLevel
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            CallFunc_Get_Save_Game_SaveGame                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelStats               K2Node_MakeStruct_S_LevelStats                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::FinishedLevel(int32 LevelIndex, float Time, class UObject* __WorldContext, class UBP_MySaveGame_C* CallFunc_Get_Save_Game_SaveGame, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "FinishedLevel");

	Params::UBP_Antize_C_FinishedLevel_Params Parms{};

	Parms.LevelIndex = LevelIndex;
	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_Save_Game_SaveGame = CallFunc_Get_Save_Game_SaveGame;
	Parms.K2Node_MakeStruct_S_LevelStats = K2Node_MakeStruct_S_LevelStats;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Antize.BP_Antize_C.Get Save Game
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            CallFunc_Create_New_Save_File_SaveGame                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            K2Node_DynamicCast_AsBP_My_Save_Game                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::Get_Save_Game(class UObject* __WorldContext, class UBP_MySaveGame_C** SaveGame, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_MySaveGame_C* CallFunc_Create_New_Save_File_SaveGame, class UBP_MySaveGame_C* K2Node_DynamicCast_AsBP_My_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "Get Save Game");

	Params::UBP_Antize_C_Get_Save_Game_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_Create_New_Save_File_SaveGame = CallFunc_Create_New_Save_File_SaveGame;
	Parms.K2Node_DynamicCast_AsBP_My_Save_Game = K2Node_DynamicCast_AsBP_My_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_Antize.BP_Antize_C.FinishedCutscene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            CallFunc_Get_Save_Game_SaveGame                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::FinishedCutscene(class UObject* __WorldContext, class UBP_MySaveGame_C* CallFunc_Get_Save_Game_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "FinishedCutscene");

	Params::UBP_Antize_C_FinishedCutscene_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_Save_Game_SaveGame = CallFunc_Get_Save_Game_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Antize.BP_Antize_C.SaveGame
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MySaveGame_C*            SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SaveName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::SaveGame(class UBP_MySaveGame_C* SaveGame, class UObject* __WorldContext, const class FString& Local_SaveName, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "SaveGame");

	Params::UBP_Antize_C_SaveGame_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_SaveName = Local_SaveName;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Antize.BP_Antize_C.ConvertStringToFloat
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Antize_C::ConvertStringToFloat(const class FString& In, class UObject* __WorldContext, float* Out, const class FString& CallFunc_Replace_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "ConvertStringToFloat");

	Params::UBP_Antize_C_ConvertStringToFloat_Params Parms{};

	Parms.In = In;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BP_Antize.BP_Antize_C.FinishedEndScene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            CallFunc_Get_Save_Game_SaveGame                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Antize_C::FinishedEndScene(class UObject* __WorldContext, class UBP_MySaveGame_C* CallFunc_Get_Save_Game_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Antize_C", "FinishedEndScene");

	Params::UBP_Antize_C_FinishedEndScene_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_Save_Game_SaveGame = CallFunc_Get_Save_Game_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


