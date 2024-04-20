#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x2EC - 0x290)
// BlueprintGeneratedClass Lobby_GS.Lobby_GS_C
class ALobby_GS_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  CurrentGameMode;                                   // 0x2A0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FS_ConnectedPlayer>            PlayersConnected;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	class FText                                  ServerName;                                        // 0x2C8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	bool                                         ReadyForLaunch_;                                   // 0x2E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Launching_;                                        // 0x2E1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1F0B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentLevel;                                      // 0x2E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALobby_GS_C* GetDefaultObj();

	void Update_Lobby_VoiceChat(bool CanTalk, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class APlayerState*>& CallFunc_GetPlayerStateArray_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void Update_Lobby_Launchevent(bool LaunchingGame_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Set_CurrentMap(const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Gamemode& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue);
	void OnRep_Current_GameMode(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Update_Lobby();
	void Reset_Player_ReadyStatus(bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess);
	void Update_Lobby_PlayerList(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Update_Host_ReadyUpButton(class FText Text, bool WarningState_, bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Update_Lobby_StatusIndicator(enum class ESlateVisibility CircularThrobber_Visibility, class FText LobbyStatus_Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void OnRep_ReadyForLaunch_();
	void OnRep_Launching_(bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess);
	void Check_EveryoneReady_(bool* CanStart, int32 NumReady, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FS_ConnectedPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_ServerName(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Update_ServerName(class FText SessionName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABasePS_C* K2Node_DynamicCast_AsBase_PS, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnRep_PlayersConnected(bool CallFunc_Check_EveryoneReady__CanStart, bool CallFunc_HasAuthority_ReturnValue);
	void Update_ConnectedPlayers_Array(const TArray<struct FS_ConnectedPlayer>& LocalPlayersConnected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABasePS_C* K2Node_DynamicCast_AsBase_PS, bool K2Node_DynamicCast_bSuccess, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo, const struct FS_ConnectedPlayer& K2Node_MakeStruct_S_ConnectedPlayer, int32 CallFunc_Array_Add_ReturnValue);
	void OnFailure_BAB015064C915C7C1CCCA3AAB0A02F3B();
	void OnSuccess_BAB015064C915C7C1CCCA3AAB0A02F3B();
	void UpdateCanJoin(bool CanJoin);
	void ExecuteUbergraph_Lobby_GS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_CanJoin, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, int32 CallFunc_GetSessionSettings_NumConnections_1, int32 CallFunc_GetSessionSettings_NumPrivateConnections_1, bool CallFunc_GetSessionSettings_bIsLAN_1, bool CallFunc_GetSessionSettings_bIsDedicated_1, bool CallFunc_GetSessionSettings_bAllowInvites_1, bool CallFunc_GetSessionSettings_bAllowJoinInProgress_1, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled_1, int32 CallFunc_GetSessionSettings_BuildUniqueID_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings_1, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, bool K2Node_SwitchEnum_CmpSuccess_1, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyBool_SearchResult, bool CallFunc_GetSessionPropertyBool_SettingValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


