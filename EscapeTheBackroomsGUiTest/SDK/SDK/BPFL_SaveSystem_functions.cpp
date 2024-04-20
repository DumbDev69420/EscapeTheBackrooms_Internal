#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_SaveSystem.BPFL_SaveSystem_C
// (None)

class UClass* UBPFL_SaveSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_SaveSystem_C");

	return Clss;
}


// BPFL_SaveSystem_C BPFL_SaveSystem.Default__BPFL_SaveSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_SaveSystem_C* UBPFL_SaveSystem_C::GetDefaultObj()
{
	static class UBPFL_SaveSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_SaveSystem_C*>(UBPFL_SaveSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetPoppedBalloon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      BalloonID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetPoppedBalloon(const class FString& BalloonID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetPoppedBalloon");

	Params::UBPFL_SaveSystem_C_SetPoppedBalloon_Params Parms{};

	Parms.BalloonID = BalloonID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetWatchedElevatorVideo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetWatchedElevatorVideo(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetWatchedElevatorVideo");

	Params::UBPFL_SaveSystem_C_SetWatchedElevatorVideo_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetEyeDisarmed
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EyeID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetEyeDisarmed(const class FString& EyeID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetEyeDisarmed");

	Params::UBPFL_SaveSystem_C_SetEyeDisarmed_Params Parms{};

	Parms.EyeID = EyeID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetDidResetPictures
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetDidResetPictures(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetDidResetPictures");

	Params::UBPFL_SaveSystem_C_SetDidResetPictures_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetPicturesTaken
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetPicturesTaken(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetPicturesTaken");

	Params::UBPFL_SaveSystem_C_SetPicturesTaken_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetFloorIndex
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetFloorIndex(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetFloorIndex");

	Params::UBPFL_SaveSystem_C_SetFloorIndex_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetExitIndex
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetExitIndex(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetExitIndex");

	Params::UBPFL_SaveSystem_C_SetExitIndex_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetLevelDashCheckpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetLevelDashCheckpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetLevelDashCheckpoint");

	Params::UBPFL_SaveSystem_C_SetLevelDashCheckpoint_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetUnlockedSnackrooms
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetUnlockedSnackrooms(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetUnlockedSnackrooms");

	Params::UBPFL_SaveSystem_C_SetUnlockedSnackrooms_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetDoorUnlocked
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DoorID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetDoorUnlocked(const class FString& DoorID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetDoorUnlocked");

	Params::UBPFL_SaveSystem_C_SetDoorUnlocked_Params Parms{};

	Parms.DoorID = DoorID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetFinishedElevator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetFinishedElevator(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetFinishedElevator");

	Params::UBPFL_SaveSystem_C_SetFinishedElevator_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.FinishedValve
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValveIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::FinishedValve(int32 LevelIndex, int32 ValveIndex, class UObject* __WorldContext, bool Temp_bool_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "FinishedValve");

	Params::UBPFL_SaveSystem_C_FinishedValve_Params Parms{};

	Parms.LevelIndex = LevelIndex;
	Parms.ValveIndex = ValveIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.ActivateControlPanel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::ActivateControlPanel(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "ActivateControlPanel");

	Params::UBPFL_SaveSystem_C_ActivateControlPanel_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetPlacedAllTVs
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetPlacedAllTVs(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetPlacedAllTVs");

	Params::UBPFL_SaveSystem_C_SetPlacedAllTVs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetUnlockedElevator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetUnlockedElevator(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetUnlockedElevator");

	Params::UBPFL_SaveSystem_C_SetUnlockedElevator_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Set Powered All
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::Set_Powered_All(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Set Powered All");

	Params::UBPFL_SaveSystem_C_Set_Powered_All_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetKeyPlaced
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetKeyPlaced(int32 Index, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool Temp_bool_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetKeyPlaced");

	Params::UBPFL_SaveSystem_C_SetKeyPlaced_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetPoolsActivated
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PoolsActivated                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetPoolsActivated(int32 PoolsActivated, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetPoolsActivated");

	Params::UBPFL_SaveSystem_C_SetPoolsActivated_Params Parms{};

	Parms.PoolsActivated = PoolsActivated;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.RemoveDroppedGlowstick
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       GlowstickID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::RemoveDroppedGlowstick(const struct FGuid& GlowstickID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "RemoveDroppedGlowstick");

	Params::UBPFL_SaveSystem_C_RemoveDroppedGlowstick_Params Parms{};

	Parms.GlowstickID = GlowstickID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.AddDroppedGlowstick
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       GlowstickID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Glowstick_Data           GlowstickData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Glowstick_Data           K2Node_MakeStruct_S_Glowstick_Data                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Glowstick_Data           CallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Glowstick_Data           K2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::AddDroppedGlowstick(const struct FGuid& GlowstickID, const struct FS_Glowstick_Data& GlowstickData, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, const struct FS_Glowstick_Data& K2Node_MakeStruct_S_Glowstick_Data, const struct FS_Glowstick_Data& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FS_Glowstick_Data& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "AddDroppedGlowstick");

	Params::UBPFL_SaveSystem_C_AddDroppedGlowstick_Params Parms{};

	Parms.GlowstickID = GlowstickID;
	Parms.GlowstickData = GlowstickData;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.K2Node_MakeStruct_S_Glowstick_Data = K2Node_MakeStruct_S_Glowstick_Data;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetTVsPlaced
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_TV_Data>          TVsPlaced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetTVsPlaced(TArray<struct FS_TV_Data>& TVsPlaced, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetTVsPlaced");

	Params::UBPFL_SaveSystem_C_SetTVsPlaced_Params Parms{};

	Parms.TVsPlaced = TVsPlaced;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHasZone4Key
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHasZone4Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHasZone4Key");

	Params::UBPFL_SaveSystem_C_SetHasZone4Key_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHasZone3Key
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHasZone3Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHasZone3Key");

	Params::UBPFL_SaveSystem_C_SetHasZone3Key_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHasZone2Key
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHasZone2Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHasZone2Key");

	Params::UBPFL_SaveSystem_C_SetHasZone2Key_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHasZone1Key
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHasZone1Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHasZone1Key");

	Params::UBPFL_SaveSystem_C_SetHasZone1Key_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetCompletedBallonPuzzle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetCompletedBallonPuzzle(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetCompletedBallonPuzzle");

	Params::UBPFL_SaveSystem_C_SetCompletedBallonPuzzle_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetFoundCassette
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetFoundCassette(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetFoundCassette");

	Params::UBPFL_SaveSystem_C_SetFoundCassette_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetMembriSpawned
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetMembriSpawned(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetMembriSpawned");

	Params::UBPFL_SaveSystem_C_SetMembriSpawned_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.GetCompletedLevels
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_LevelStats>       LevelsCompleted                                                  (Parm, OutParm, ContainsInstancedReference)
// int32                              CurrentLevels                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_LevelStats>       Temp_struct_Variable                                             (ReferenceParm, ContainsInstancedReference)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::GetCompletedLevels(class UObject* __WorldContext, TArray<struct FS_LevelStats>* LevelsCompleted, int32 CurrentLevels, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FS_LevelStats>& Temp_struct_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "GetCompletedLevels");

	Params::UBPFL_SaveSystem_C_GetCompletedLevels_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CurrentLevels = CurrentLevels;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelsCompleted != nullptr)
		*LevelsCompleted = std::move(Parms.LevelsCompleted);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Set Spawn in Elevator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSpawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::Set_Spawn_in_Elevator(bool ShouldSpawn, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Set Spawn in Elevator");

	Params::UBPFL_SaveSystem_C_Set_Spawn_in_Elevator_Params Parms{};

	Parms.ShouldSpawn = ShouldSpawn;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHasWatchedVideo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHasWatchedVideo(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHasWatchedVideo");

	Params::UBPFL_SaveSystem_C_SetHasWatchedVideo_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetCaveCheckpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetCaveCheckpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetCaveCheckpoint");

	Params::UBPFL_SaveSystem_C_SetCaveCheckpoint_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetReachedCheckpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetReachedCheckpoint(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetReachedCheckpoint");

	Params::UBPFL_SaveSystem_C_SetReachedCheckpoint_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetVentBroken
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetVentBroken(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetVentBroken");

	Params::UBPFL_SaveSystem_C_SetVentBroken_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.UnlockedManillaRoom
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::UnlockedManillaRoom(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "UnlockedManillaRoom");

	Params::UBPFL_SaveSystem_C_UnlockedManillaRoom_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetFacelingSpawned
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetFacelingSpawned(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetFacelingSpawned");

	Params::UBPFL_SaveSystem_C_SetFacelingSpawned_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetTurbinesActivated
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Activated                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetTurbinesActivated(int32 Activated, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetTurbinesActivated");

	Params::UBPFL_SaveSystem_C_SetTurbinesActivated_Params Parms{};

	Parms.Activated = Activated;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetLevel10Checkpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetLevel10Checkpoint(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetLevel10Checkpoint");

	Params::UBPFL_SaveSystem_C_SetLevel10Checkpoint_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetMEGGateOpened
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetMEGGateOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetMEGGateOpened");

	Params::UBPFL_SaveSystem_C_SetMEGGateOpened_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetActivatedMap
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_UploadStatus>     Activated                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetActivatedMap(TArray<struct FS_UploadStatus>& Activated, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetActivatedMap");

	Params::UBPFL_SaveSystem_C_SetActivatedMap_Params Parms{};

	Parms.Activated = Activated;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetDoorBroken
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DoorID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetDoorBroken(const class FString& DoorID, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetDoorBroken");

	Params::UBPFL_SaveSystem_C_SetDoorBroken_Params Parms{};

	Parms.DoorID = DoorID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetLevel05Checkpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetLevel05Checkpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetLevel05Checkpoint");

	Params::UBPFL_SaveSystem_C_SetLevel05Checkpoint_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetUnlockedSafe
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetUnlockedSafe(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetUnlockedSafe");

	Params::UBPFL_SaveSystem_C_SetUnlockedSafe_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.GetPlacedCans
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CansPlaced                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::GetPlacedCans(class UObject* __WorldContext, int32* CansPlaced, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "GetPlacedCans");

	Params::UBPFL_SaveSystem_C_GetPlacedCans_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

	if (CansPlaced != nullptr)
		*CansPlaced = Parms.CansPlaced;

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetLevel7Checkpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetLevel7Checkpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetLevel7Checkpoint");

	Params::UBPFL_SaveSystem_C_SetLevel7Checkpoint_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetMEGCardCollected
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetMEGCardCollected(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetMEGCardCollected");

	Params::UBPFL_SaveSystem_C_SetMEGCardCollected_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.PlacedCan
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::PlacedCan(class UObject* __WorldContext, int32 Temp_int_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "PlacedCan");

	Params::UBPFL_SaveSystem_C_PlacedCan_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetSeenFirstHound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetSeenFirstHound(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetSeenFirstHound");

	Params::UBPFL_SaveSystem_C_SetSeenFirstHound_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetDifficulty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Difficulty            Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetDifficulty(enum class E_Difficulty Difficulty, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetDifficulty");

	Params::UBPFL_SaveSystem_C_SetDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetUnlockedFun
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetUnlockedFun(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetUnlockedFun");

	Params::UBPFL_SaveSystem_C_SetUnlockedFun_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetBoilerCheckpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetBoilerCheckpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetBoilerCheckpoint");

	Params::UBPFL_SaveSystem_C_SetBoilerCheckpoint_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetCheckpointReached
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetCheckpointReached(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetCheckpointReached");

	Params::UBPFL_SaveSystem_C_SetCheckpointReached_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetTeethOpened
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetTeethOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetTeethOpened");

	Params::UBPFL_SaveSystem_C_SetTeethOpened_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SaveLevelItems
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_DroppedItem>      Items                                                            (Edit, BlueprintVisible)
// TArray<class ABP_DroppedItem_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WorldCommon              K2Node_MakeStruct_S_WorldCommon                                  (HasGetValueTypeHash)
// struct FS_LevelStats               K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DroppedItem_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DroppedItem              K2Node_MakeStruct_S_DroppedItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SaveLevelItems(class FName Level, class UObject* __WorldContext, const TArray<struct FS_DroppedItem>& Items, TArray<class ABP_DroppedItem_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_WorldCommon& K2Node_MakeStruct_S_WorldCommon, const struct FS_LevelStats& K2Node_SetFieldsInStruct_StructOut, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_DroppedItem_C* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FS_DroppedItem& K2Node_MakeStruct_S_DroppedItem, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SaveLevelItems");

	Params::UBPFL_SaveSystem_C_SaveLevelItems_Params Parms{};

	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;
	Parms.Items = Items;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_S_WorldCommon = K2Node_MakeStruct_S_WorldCommon;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_DroppedItem = K2Node_MakeStruct_S_DroppedItem;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.UnlockedHub
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelStats               K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::UnlockedHub(class FName Level, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Loop_Counter_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, const struct FS_LevelStats& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "UnlockedHub");

	Params::UBPFL_SaveSystem_C_UnlockedHub_Params Parms{};

	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetLevel94Checkpoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SetLevel94Checkpoint(int32 Progress, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetLevel94Checkpoint");

	Params::UBPFL_SaveSystem_C_SetLevel94Checkpoint_Params Parms{};

	Parms.Progress = Progress;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetGaragePowerOn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetGaragePowerOn(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetGaragePowerOn");

	Params::UBPFL_SaveSystem_C_SetGaragePowerOn_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.LoadPlayerData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      UUID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DidFind                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PlayerData               Inventory                                                        (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerData               CallFunc_Map_Find_Value                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::LoadPlayerData(const class FString& UUID, class UObject* __WorldContext, bool* DidFind, struct FS_PlayerData* Inventory, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, const struct FS_PlayerData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "LoadPlayerData");

	Params::UBPFL_SaveSystem_C_LoadPlayerData_Params Parms{};

	Parms.UUID = UUID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DidFind != nullptr)
		*DidFind = Parms.DidFind;

	if (Inventory != nullptr)
		*Inventory = std::move(Parms.Inventory);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SavePlayerData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      UUID                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_PlayerData               PlayerData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SavePlayerData(const class FString& UUID, const struct FS_PlayerData& PlayerData, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SavePlayerData");

	Params::UBPFL_SaveSystem_C_SavePlayerData_Params Parms{};

	Parms.UUID = UUID;
	Parms.PlayerData = PlayerData;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetNotesPlaced
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, enum class E_Mailbox>Notes                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetNotesPlaced(TMap<class FName, enum class E_Mailbox> Notes, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetNotesPlaced");

	Params::UBPFL_SaveSystem_C_SetNotesPlaced_Params Parms{};

	Parms.Notes = Notes;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.FoundHotelKey
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::FoundHotelKey(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "FoundHotelKey");

	Params::UBPFL_SaveSystem_C_FoundHotelKey_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetBoilerOpened
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetBoilerOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetBoilerOpened");

	Params::UBPFL_SaveSystem_C_SetBoilerOpened_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHotelLobbyOpened
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHotelLobbyOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHotelLobbyOpened");

	Params::UBPFL_SaveSystem_C_SetHotelLobbyOpened_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.FinishedLevel
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelStats               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelStats               CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LevelStats               K2Node_MakeStruct_S_LevelStats                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::FinishedLevel(class FName Level, float Speed, class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_LevelStats& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_LevelStats& CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FS_LevelStats& K2Node_MakeStruct_S_LevelStats, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "FinishedLevel");

	Params::UBPFL_SaveSystem_C_FinishedLevel_Params Parms{};

	Parms.Level = Level;
	Parms.Speed = Speed;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_S_LevelStats = K2Node_MakeStruct_S_LevelStats;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetPoweredAllGenerators
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetPoweredAllGenerators(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetPoweredAllGenerators");

	Params::UBPFL_SaveSystem_C_SetPoweredAllGenerators_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetGeneratorUnlocked
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetGeneratorUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetGeneratorUnlocked");

	Params::UBPFL_SaveSystem_C_SetGeneratorUnlocked_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetEastSubstationUnlocked
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetEastSubstationUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetEastSubstationUnlocked");

	Params::UBPFL_SaveSystem_C_SetEastSubstationUnlocked_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetWestSubstationUnlocked
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetWestSubstationUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetWestSubstationUnlocked");

	Params::UBPFL_SaveSystem_C_SetWestSubstationUnlocked_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetMEGSecurityUnlocked
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetMEGSecurityUnlocked(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetMEGSecurityUnlocked");

	Params::UBPFL_SaveSystem_C_SetMEGSecurityUnlocked_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetUnlockedBottom
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetUnlockedBottom(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetUnlockedBottom");

	Params::UBPFL_SaveSystem_C_SetUnlockedBottom_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.FoundKey
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::FoundKey(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "FoundKey");

	Params::UBPFL_SaveSystem_C_FoundKey_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetHeavyDoorOpened
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetHeavyDoorOpened(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetHeavyDoorOpened");

	Params::UBPFL_SaveSystem_C_SetHeavyDoorOpened_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetMEGPowerOn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetMEGPowerOn(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetMEGPowerOn");

	Params::UBPFL_SaveSystem_C_SetMEGPowerOn_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetUnlockedMEG
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetUnlockedMEG(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetUnlockedMEG");

	Params::UBPFL_SaveSystem_C_SetUnlockedMEG_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetOpenedVendingMachine
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetOpenedVendingMachine(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetOpenedVendingMachine");

	Params::UBPFL_SaveSystem_C_SetOpenedVendingMachine_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Create New Slot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SaveType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_MySaveGame_C*            CallFunc_Load_Saves_SaveGame                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Save_Slot_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::Create_New_Slot(const class FString& SlotName, const class FString& SaveType, class UObject* __WorldContext, bool* Success, class UBP_MySaveGame_C* CallFunc_Load_Saves_SaveGame, bool CallFunc_Save_Slot_Success, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class UBP_New_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Create New Slot");

	Params::UBPFL_SaveSystem_C_Create_New_Slot_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.SaveType = SaveType;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Saves_SaveGame = CallFunc_Load_Saves_SaveGame;
	Parms.CallFunc_Save_Slot_Success = CallFunc_Save_Slot_Success;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Set Collected Key
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::Set_Collected_Key(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Set Collected Key");

	Params::UBPFL_SaveSystem_C_Set_Collected_Key_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Get Difficulty
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Difficulty            Difficulty                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::Get_Difficulty(class UObject* __WorldContext, enum class E_Difficulty* Difficulty, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Get Difficulty");

	Params::UBPFL_SaveSystem_C_Get_Difficulty_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

	if (Difficulty != nullptr)
		*Difficulty = Parms.Difficulty;

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SetCurrentLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::SetCurrentLevel(class FName Level, class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SetCurrentLevel");

	Params::UBPFL_SaveSystem_C_SetCurrentLevel_Params Parms{};

	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.ConvertStringToFloat
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::ConvertStringToFloat(const class FString& In, class UObject* __WorldContext, float* Out, const class FString& CallFunc_Replace_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "ConvertStringToFloat");

	Params::UBPFL_SaveSystem_C_ConvertStringToFloat_Params Parms{};

	Parms.In = In;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.SaveGame
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_New_SaveGame_C*          SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SaveName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::SaveGame(class UBP_New_SaveGame_C* SaveGame, class UObject* __WorldContext, const class FString& Local_SaveName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "SaveGame");

	Params::UBPFL_SaveSystem_C_SaveGame_Params Parms{};

	Parms.SaveGame = SaveGame;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_SaveName = Local_SaveName;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Load Game
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          K2Node_DynamicCast_AsBP_New_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_SaveSystem_C::Load_Game(class UObject* __WorldContext, class UBP_New_SaveGame_C** SaveGame, class UBP_New_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_New_SaveGame_C* K2Node_DynamicCast_AsBP_New_Save_Game, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Load Game");

	Params::UBPFL_SaveSystem_C_Load_Game_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_New_Save_Game = K2Node_DynamicCast_AsBP_New_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BPFL_SaveSystem.BPFL_SaveSystem_C.Found Ladder
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_SaveSystem_C::Found_Ladder(class UObject* __WorldContext, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_SaveSystem_C", "Found Ladder");

	Params::UBPFL_SaveSystem_C_Found_Ladder_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


