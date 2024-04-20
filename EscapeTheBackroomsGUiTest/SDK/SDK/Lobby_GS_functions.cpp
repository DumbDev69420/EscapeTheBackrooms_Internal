#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lobby_GS.Lobby_GS_C
// (Actor)

class UClass* ALobby_GS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_GS_C");

	return Clss;
}


// Lobby_GS_C Lobby_GS.Default__Lobby_GS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobby_GS_C* ALobby_GS_C::GetDefaultObj()
{
	static class ALobby_GS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobby_GS_C*>(ALobby_GS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_GS.Lobby_GS_C.Update_Lobby_VoiceChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanTalk                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        CallFunc_GetPlayerStateArray_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Update_Lobby_VoiceChat(bool CanTalk, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class APlayerState*>& CallFunc_GetPlayerStateArray_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_Lobby_VoiceChat");

	Params::ALobby_GS_C_Update_Lobby_VoiceChat_Params Parms{};

	Parms.CanTalk = CanTalk;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerStateArray_ReturnValue = CallFunc_GetPlayerStateArray_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_Lobby_Launchevent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LaunchingGame_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Update_Lobby_Launchevent(bool LaunchingGame_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_Lobby_Launchevent");

	Params::ALobby_GS_C_Update_Lobby_Launchevent_Params Parms{};

	Parms.LaunchingGame_ = LaunchingGame_;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Set_CurrentMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Gamemode                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void ALobby_GS_C::Set_CurrentMap(const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Gamemode& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Set_CurrentMap");

	Params::ALobby_GS_C_Set_CurrentMap_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.OnRep_Current_GameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::OnRep_Current_GameMode(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnRep_Current_GameMode");

	Params::ALobby_GS_C_OnRep_Current_GameMode_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_Lobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_GS_C::Update_Lobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_Lobby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_GS.Lobby_GS_C.Reset_Player_ReadyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyPS_C*                  K2Node_DynamicCast_AsLobby_PS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Reset_Player_ReadyStatus(bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Reset_Player_ReadyStatus");

	Params::ALobby_GS_C_Reset_Player_ReadyStatus_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_PS = K2Node_DynamicCast_AsLobby_PS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_Lobby_PlayerList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Update_Lobby_PlayerList(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_Lobby_PlayerList");

	Params::ALobby_GS_C_Update_Lobby_PlayerList_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_Host_ReadyUpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               WarningState_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Update_Host_ReadyUpButton(class FText Text, bool WarningState_, bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_Host_ReadyUpButton");

	Params::ALobby_GS_C_Update_Host_ReadyUpButton_Params Parms{};

	Parms.Text = Text;
	Parms.WarningState_ = WarningState_;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_Lobby_StatusIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CircularThrobber_Visibility                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LobbyStatus_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Update_Lobby_StatusIndicator(enum class ESlateVisibility CircularThrobber_Visibility, class FText LobbyStatus_Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_Lobby_StatusIndicator");

	Params::ALobby_GS_C_Update_Lobby_StatusIndicator_Params Parms{};

	Parms.CircularThrobber_Visibility = CircularThrobber_Visibility;
	Parms.LobbyStatus_Text = LobbyStatus_Text;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.OnRep_ReadyForLaunch?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_GS_C::OnRep_ReadyForLaunch_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnRep_ReadyForLaunch?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_GS.Lobby_GS_C.OnRep_Launching?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyPS_C*                  K2Node_DynamicCast_AsLobby_PS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::OnRep_Launching_(bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnRep_Launching?");

	Params::ALobby_GS_C_OnRep_Launching__Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_PS = K2Node_DynamicCast_AsLobby_PS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Check_EveryoneReady?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanStart                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumReady                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConnectedPlayer          CallFunc_Array_Get_Item                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::Check_EveryoneReady_(bool* CanStart, int32 NumReady, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FS_ConnectedPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Check_EveryoneReady?");

	Params::ALobby_GS_C_Check_EveryoneReady__Params Parms{};

	Parms.NumReady = NumReady;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanStart != nullptr)
		*CanStart = Parms.CanStart;

}


// Function Lobby_GS.Lobby_GS_C.OnRep_ServerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::OnRep_ServerName(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnRep_ServerName");

	Params::ALobby_GS_C_OnRep_ServerName_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_ServerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SessionName                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABasePS_C*                   K2Node_DynamicCast_AsBase_PS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ALobby_GS_C::Update_ServerName(class FText SessionName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABasePS_C* K2Node_DynamicCast_AsBase_PS, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_ServerName");

	Params::ALobby_GS_C_Update_ServerName_Params Parms{};

	Parms.SessionName = SessionName;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_PS = K2Node_DynamicCast_AsBase_PS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.OnRep_PlayersConnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Check_EveryoneReady__CanStart                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::OnRep_PlayersConnected(bool CallFunc_Check_EveryoneReady__CanStart, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnRep_PlayersConnected");

	Params::ALobby_GS_C_OnRep_PlayersConnected_Params Parms{};

	Parms.CallFunc_Check_EveryoneReady__CanStart = CallFunc_Check_EveryoneReady__CanStart;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.Update_ConnectedPlayers_Array
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ConnectedPlayer>  LocalPlayersConnected                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABasePS_C*                   K2Node_DynamicCast_AsBase_PS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PlayerConnectionInfo     K2Node_MakeStruct_S_PlayerConnectionInfo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConnectedPlayer          K2Node_MakeStruct_S_ConnectedPlayer                              (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobby_GS_C::Update_ConnectedPlayers_Array(const TArray<struct FS_ConnectedPlayer>& LocalPlayersConnected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABasePS_C* K2Node_DynamicCast_AsBase_PS, bool K2Node_DynamicCast_bSuccess, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo, const struct FS_ConnectedPlayer& K2Node_MakeStruct_S_ConnectedPlayer, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "Update_ConnectedPlayers_Array");

	Params::ALobby_GS_C_Update_ConnectedPlayers_Array_Params Parms{};

	Parms.LocalPlayersConnected = LocalPlayersConnected;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_PS = K2Node_DynamicCast_AsBase_PS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_S_PlayerConnectionInfo = K2Node_MakeStruct_S_PlayerConnectionInfo;
	Parms.K2Node_MakeStruct_S_ConnectedPlayer = K2Node_MakeStruct_S_ConnectedPlayer;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.OnFailure_BAB015064C915C7C1CCCA3AAB0A02F3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_GS_C::OnFailure_BAB015064C915C7C1CCCA3AAB0A02F3B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnFailure_BAB015064C915C7C1CCCA3AAB0A02F3B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_GS.Lobby_GS_C.OnSuccess_BAB015064C915C7C1CCCA3AAB0A02F3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_GS_C::OnSuccess_BAB015064C915C7C1CCCA3AAB0A02F3B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "OnSuccess_BAB015064C915C7C1CCCA3AAB0A02F3B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_GS.Lobby_GS_C.UpdateCanJoin
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanJoin                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::UpdateCanJoin(bool CanJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "UpdateCanJoin");

	Params::ALobby_GS_C_UpdateCanJoin_Params Parms{};

	Parms.CanJoin = CanJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_GS.Lobby_GS_C.ExecuteUbergraph_Lobby_GS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_CanJoin                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_NumConnections                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings                        (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue              (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_GetSessionSettings_NumConnections_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings_1                      (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray          (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpdateSessionCallbackProxyAdvanced*CallFunc_UpdateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyBool_SearchResult                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionPropertyBool_SettingValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_GS_C::ExecuteUbergraph_Lobby_GS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_CanJoin, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, int32 CallFunc_GetSessionSettings_NumConnections_1, int32 CallFunc_GetSessionSettings_NumPrivateConnections_1, bool CallFunc_GetSessionSettings_bIsLAN_1, bool CallFunc_GetSessionSettings_bIsDedicated_1, bool CallFunc_GetSessionSettings_bAllowInvites_1, bool CallFunc_GetSessionSettings_bAllowJoinInProgress_1, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled_1, int32 CallFunc_GetSessionSettings_BuildUniqueID_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings_1, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, bool K2Node_SwitchEnum_CmpSuccess_1, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyBool_SearchResult, bool CallFunc_GetSessionPropertyBool_SettingValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_GS_C", "ExecuteUbergraph_Lobby_GS");

	Params::ALobby_GS_C_ExecuteUbergraph_Lobby_GS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_CanJoin = K2Node_CustomEvent_CanJoin;
	Parms.CallFunc_GetSessionSettings_NumConnections = CallFunc_GetSessionSettings_NumConnections;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections = CallFunc_GetSessionSettings_NumPrivateConnections;
	Parms.CallFunc_GetSessionSettings_bIsLAN = CallFunc_GetSessionSettings_bIsLAN;
	Parms.CallFunc_GetSessionSettings_bIsDedicated = CallFunc_GetSessionSettings_bIsDedicated;
	Parms.CallFunc_GetSessionSettings_bAllowInvites = CallFunc_GetSessionSettings_bAllowInvites;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress = CallFunc_GetSessionSettings_bAllowJoinInProgress;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled = CallFunc_GetSessionSettings_bIsAnticheatEnabled;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID = CallFunc_GetSessionSettings_BuildUniqueID;
	Parms.CallFunc_GetSessionSettings_ExtraSettings = CallFunc_GetSessionSettings_ExtraSettings;
	Parms.CallFunc_GetSessionSettings_Result = CallFunc_GetSessionSettings_Result;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSessionSettings_NumConnections_1 = CallFunc_GetSessionSettings_NumConnections_1;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections_1 = CallFunc_GetSessionSettings_NumPrivateConnections_1;
	Parms.CallFunc_GetSessionSettings_bIsLAN_1 = CallFunc_GetSessionSettings_bIsLAN_1;
	Parms.CallFunc_GetSessionSettings_bIsDedicated_1 = CallFunc_GetSessionSettings_bIsDedicated_1;
	Parms.CallFunc_GetSessionSettings_bAllowInvites_1 = CallFunc_GetSessionSettings_bAllowInvites_1;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress_1 = CallFunc_GetSessionSettings_bAllowJoinInProgress_1;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled_1 = CallFunc_GetSessionSettings_bIsAnticheatEnabled_1;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID_1 = CallFunc_GetSessionSettings_BuildUniqueID_1;
	Parms.CallFunc_GetSessionSettings_ExtraSettings_1 = CallFunc_GetSessionSettings_ExtraSettings_1;
	Parms.CallFunc_GetSessionSettings_Result_1 = CallFunc_GetSessionSettings_Result_1;
	Parms.CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray = CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_UpdateSession_ReturnValue = CallFunc_UpdateSession_ReturnValue;
	Parms.CallFunc_GetSessionPropertyBool_SearchResult = CallFunc_GetSessionPropertyBool_SearchResult;
	Parms.CallFunc_GetSessionPropertyBool_SettingValue = CallFunc_GetSessionPropertyBool_SettingValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


