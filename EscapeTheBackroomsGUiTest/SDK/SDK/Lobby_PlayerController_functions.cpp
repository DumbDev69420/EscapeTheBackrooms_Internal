#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lobby_PlayerController.Lobby_PlayerController_C
// (Actor, PlayerController)

class UClass* ALobby_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_PlayerController_C");

	return Clss;
}


// Lobby_PlayerController_C Lobby_PlayerController.Default__Lobby_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobby_PlayerController_C* ALobby_PlayerController_C::GetDefaultObj()
{
	static class ALobby_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobby_PlayerController_C*>(ALobby_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OnRep_CanTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::OnRep_CanTalk(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OnRep_CanTalk");

	Params::ALobby_PlayerController_C_OnRep_CanTalk_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_PlayerSpeaking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpeaking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBPUniqueNetId              UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      PlayerName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSteamPersonaName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestSteamFriendInfo_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULobby_PlayerList_Item_C*    K2Node_DynamicCast_AsLobby_Player_List_Item                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ALobby_PlayerController_C::Update_PlayerSpeaking(bool IsSpeaking, const struct FBPUniqueNetId& UniqueId, const class FString& PlayerName, const class FString& CallFunc_GetSteamPersonaName_ReturnValue, bool CallFunc_RequestSteamFriendInfo_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ULobby_PlayerList_Item_C* K2Node_DynamicCast_AsLobby_Player_List_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_PlayerSpeaking");

	Params::ALobby_PlayerController_C_Update_PlayerSpeaking_Params Parms{};

	Parms.IsSpeaking = IsSpeaking;
	Parms.UniqueId = UniqueId;
	Parms.PlayerName = PlayerName;
	Parms.CallFunc_GetSteamPersonaName_ReturnValue = CallFunc_GetSteamPersonaName_ReturnValue;
	Parms.CallFunc_RequestSteamFriendInfo_ReturnValue = CallFunc_RequestSteamFriendInfo_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_List_Item = K2Node_DynamicCast_AsLobby_Player_List_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.CreateLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LoadingScreen_FeedbackText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  LoadingScreen_Image                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_LoadingScreen_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::CreateLoadingScreen(class FText LoadingScreen_FeedbackText, class UTexture2D* LoadingScreen_Image, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "CreateLoadingScreen");

	Params::ALobby_PlayerController_C_CreateLoadingScreen_Params Parms{};

	Parms.LoadingScreen_FeedbackText = LoadingScreen_FeedbackText;
	Parms.LoadingScreen_Image = LoadingScreen_Image;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Create_MapTravel_LoadingScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FS_Gamemode                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void ALobby_PlayerController_C::Create_MapTravel_LoadingScreen(class FName Map, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FS_Gamemode& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Create_MapTravel_LoadingScreen");

	Params::ALobby_PlayerController_C_Create_MapTravel_LoadingScreen_Params Parms{};

	Parms.Map = Map;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_GameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Update_GameMode(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_GameMode");

	Params::ALobby_PlayerController_C_Update_GameMode_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Save_ReadyUpButton_State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReadyUpButton_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Warning_State_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hide_Button_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               JustLock_                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Save_ReadyUpButton_State(class FText ReadyUpButton_Text, bool Warning_State_, bool Hide_Button_, bool JustLock_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Save_ReadyUpButton_State");

	Params::ALobby_PlayerController_C_Save_ReadyUpButton_State_Params Parms{};

	Parms.ReadyUpButton_Text = ReadyUpButton_Text;
	Parms.Warning_State_ = Warning_State_;
	Parms.Hide_Button_ = Hide_Button_;
	Parms.JustLock_ = JustLock_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Create_WB_Lobby_HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULobby_HUD_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToPlayerScreen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Create_WB_Lobby_HUD(bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class ULobby_HUD_C* CallFunc_Create_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Create_WB_Lobby_HUD");

	Params::ALobby_PlayerController_C_Create_WB_Lobby_HUD_Params Parms{};

	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddToPlayerScreen_ReturnValue = CallFunc_AddToPlayerScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Get_Player_Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::Get_Player_Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Get_Player_Name");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Get_Chat_Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::Get_Chat_Component()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Get_Chat_Component");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_WB_LobbyMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::Update_WB_LobbyMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_WB_LobbyMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_LobbyStatusIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CircularThrobberVisibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LobbyStatusText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Update_LobbyStatusIndicator(enum class ESlateVisibility CircularThrobberVisibility, class FText LobbyStatusText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_LobbyStatusIndicator");

	Params::ALobby_PlayerController_C_Update_LobbyStatusIndicator_Params Parms{};

	Parms.CircularThrobberVisibility = CircularThrobberVisibility;
	Parms.LobbyStatusText = LobbyStatusText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_Launchevent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Update_Launchevent(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_Launchevent");

	Params::ALobby_PlayerController_C_Update_Launchevent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_ReadyUpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Update_ReadyUpButton(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_ReadyUpButton");

	Params::ALobby_PlayerController_C_Update_ReadyUpButton_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.Update_LobbyPlayerList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_LobbyActor_C*            K2Node_DynamicCast_AsBP_Lobby_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULobby_Menu_C*               K2Node_DynamicCast_AsLobby_Menu                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::Update_LobbyPlayerList(bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, class ABP_LobbyActor_C* K2Node_DynamicCast_AsBP_Lobby_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class ULobby_Menu_C* K2Node_DynamicCast_AsLobby_Menu, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "Update_LobbyPlayerList");

	Params::ALobby_PlayerController_C_Update_LobbyPlayerList_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Lobby_Actor = K2Node_DynamicCast_AsBP_Lobby_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Menu = K2Node_DynamicCast_AsLobby_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.InpActEvt_Settings_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ALobby_PlayerController_C::InpActEvt_Settings_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "InpActEvt_Settings_K2Node_InputActionEvent_3");

	Params::ALobby_PlayerController_C_InpActEvt_Settings_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OnFailure_866615BE41AC454694EE4F9532779BF7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::OnFailure_866615BE41AC454694EE4F9532779BF7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OnFailure_866615BE41AC454694EE4F9532779BF7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OnSuccess_866615BE41AC454694EE4F9532779BF7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::OnSuccess_866615BE41AC454694EE4F9532779BF7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OnSuccess_866615BE41AC454694EE4F9532779BF7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OnFailure_6E7D169843C1BE4CDA92E896C8C1B365
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::OnFailure_6E7D169843C1BE4CDA92E896C8C1B365()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OnFailure_6E7D169843C1BE4CDA92E896C8C1B365");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OnSuccess_6E7D169843C1BE4CDA92E896C8C1B365
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::OnSuccess_6E7D169843C1BE4CDA92E896C8C1B365()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OnSuccess_6E7D169843C1BE4CDA92E896C8C1B365");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ALobby_PlayerController_C::InpActEvt_Chat_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "InpActEvt_Chat_K2Node_InputActionEvent_2");

	Params::ALobby_PlayerController_C_InpActEvt_Chat_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.InpActEvt_Talk_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ALobby_PlayerController_C::InpActEvt_Talk_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "InpActEvt_Talk_K2Node_InputActionEvent_1");

	Params::ALobby_PlayerController_C_InpActEvt_Talk_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.InpActEvt_Talk_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ALobby_PlayerController_C::InpActEvt_Talk_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "InpActEvt_Talk_K2Node_InputActionEvent_0");

	Params::ALobby_PlayerController_C_InpActEvt_Talk_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.MC_LoadingScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::MC_LoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "MC_LoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_Update_LobbyStatusIndicator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CircularThrobber_Visibility                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LobbyStatus_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobby_PlayerController_C::OC_Update_LobbyStatusIndicator(enum class ESlateVisibility CircularThrobber_Visibility, class FText LobbyStatus_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_Update_LobbyStatusIndicator");

	Params::ALobby_PlayerController_C_OC_Update_LobbyStatusIndicator_Params Parms{};

	Parms.CircularThrobber_Visibility = CircularThrobber_Visibility;
	Parms.LobbyStatus_Text = LobbyStatus_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_Update_ReadyUpButton
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               WarningState_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideButton_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::OC_Update_ReadyUpButton(class FText Text, bool WarningState_, bool HideButton_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_Update_ReadyUpButton");

	Params::ALobby_PlayerController_C_OC_Update_ReadyUpButton_Params Parms{};

	Parms.Text = Text;
	Parms.WarningState_ = WarningState_;
	Parms.HideButton_ = HideButton_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_Launchevent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLaunchingGame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobby_PlayerController_C::OC_Launchevent(bool IsLaunchingGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_Launchevent");

	Params::ALobby_PlayerController_C_OC_Launchevent_Params Parms{};

	Parms.IsLaunchingGame = IsLaunchingGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_Update_ServerName
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobby_PlayerController_C::OC_Update_ServerName(class FText ServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_Update_ServerName");

	Params::ALobby_PlayerController_C_OC_Update_ServerName_Params Parms{};

	Parms.ServerName = ServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_Update_ConnectedPlayersList
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ConnectedPlayer>  ConnectedPlayers                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ALobby_PlayerController_C::OC_Update_ConnectedPlayersList(TArray<struct FS_ConnectedPlayer>& ConnectedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_Update_ConnectedPlayersList");

	Params::ALobby_PlayerController_C_OC_Update_ConnectedPlayersList_Params Parms{};

	Parms.ConnectedPlayers = ConnectedPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobby_PlayerController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "ReceiveEndPlay");

	Params::ALobby_PlayerController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_KickedFromLobby
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::OC_KickedFromLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_KickedFromLobby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.OC_Create_MapTravel_Loadingscreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobby_PlayerController_C::OC_Create_MapTravel_Loadingscreen(class FName Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "OC_Create_MapTravel_Loadingscreen");

	Params::ALobby_PlayerController_C_OC_Create_MapTravel_Loadingscreen_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.StartVoice
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobby_PlayerController_C::StartVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "StartVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerController.Lobby_PlayerController_C.ExecuteUbergraph_Lobby_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_LoadingScreen_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// class UW_VOIPHUD_C*                CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_CustomEvent_CircularThrobber_Visibility                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_LobbyStatus_Text                              (None)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// bool                               K2Node_CustomEvent_WarningState_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HideButton_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsLaunchingGame                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_ServerName                                    (None)
// TArray<struct FS_ConnectedPlayer>  K2Node_CustomEvent_ConnectedPlayers                              (ConstParm, ReferenceParm, ContainsInstancedReference)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Map                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_LobbyActor_C*            CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_SettingsPanel_Theme2_C*  CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULobby_Menu_C*               CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)

void ALobby_PlayerController_C::ExecuteUbergraph_Lobby_PlayerController(int32 EntryPoint, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, class UW_VOIPHUD_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_CustomEvent_CircularThrobber_Visibility, class FText K2Node_CustomEvent_LobbyStatus_Text, class FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_WarningState_, bool K2Node_CustomEvent_HideButton_, bool K2Node_CustomEvent_IsLaunchingGame, class FText K2Node_CustomEvent_ServerName, TArray<struct FS_ConnectedPlayer>& K2Node_CustomEvent_ConnectedPlayers, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocalPlayerController_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, class FName K2Node_CustomEvent_Map, bool CallFunc_IsValid_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_LobbyActor_C* CallFunc_GetActorOfClass_ReturnValue, class ACameraActor* CallFunc_GetActorOfClass_ReturnValue_1, class UWB_SettingsPanel_Theme2_C* CallFunc_Create_ReturnValue_2, class ULobby_Menu_C* CallFunc_Create_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FKey& K2Node_InputActionEvent_Key_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerController_C", "ExecuteUbergraph_Lobby_PlayerController");

	Params::ALobby_PlayerController_C_ExecuteUbergraph_Lobby_PlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_CircularThrobber_Visibility = K2Node_CustomEvent_CircularThrobber_Visibility;
	Parms.K2Node_CustomEvent_LobbyStatus_Text = K2Node_CustomEvent_LobbyStatus_Text;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_WarningState_ = K2Node_CustomEvent_WarningState_;
	Parms.K2Node_CustomEvent_HideButton_ = K2Node_CustomEvent_HideButton_;
	Parms.K2Node_CustomEvent_IsLaunchingGame = K2Node_CustomEvent_IsLaunchingGame;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.K2Node_CustomEvent_ConnectedPlayers = K2Node_CustomEvent_ConnectedPlayers;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue_1 = CallFunc_DestroySession_ReturnValue_1;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_1 = K2Node_DynamicCast_AsBP_My_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


