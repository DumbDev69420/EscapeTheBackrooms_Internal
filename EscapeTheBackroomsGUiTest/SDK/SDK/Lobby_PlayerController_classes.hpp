#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x601 - 0x578)
// BlueprintGeneratedClass Lobby_PlayerController.Lobby_PlayerController_C
class ALobby_PlayerController_C : public ABP_BasePlayerController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChatComponent_C*                      ChatComponent;                                     // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULobby_HUD_C*                          LobbyHUD_Ref;                                      // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobby_Menu_C*                         LobbyMenu_Ref;                                     // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SettingsPanel_Theme2_C*            SettingsUI_Ref;                                    // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ConnectedPlayer>            ConnectedPlayers;                                  // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsLaunchingGame;                                   // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentGameMode;                                   // 0x5B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReadyUpButton_Text;                                // 0x5C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Warning_State_;                                    // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Hide_Button_;                                      // 0x5D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReadyUpButton_Initialized_;                        // 0x5DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LockButton_;                                       // 0x5DB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ServerName;                                        // 0x5E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_VOIPHUD_C*                          VOIP_HUD_Ref;                                      // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTalk;                                           // 0x600(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ALobby_PlayerController_C* GetDefaultObj();

	void OnRep_CanTalk(bool CallFunc_Not_PreBool_ReturnValue);
	void Update_PlayerSpeaking(bool IsSpeaking, const struct FBPUniqueNetId& UniqueId, const class FString& PlayerName, const class FString& CallFunc_GetSteamPersonaName_ReturnValue, bool CallFunc_RequestSteamFriendInfo_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ULobby_PlayerList_Item_C* K2Node_DynamicCast_AsLobby_Player_List_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void CreateLoadingScreen(class FText LoadingScreen_FeedbackText, class UTexture2D* LoadingScreen_Image, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue);
	void Create_MapTravel_LoadingScreen(class FName Map, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FS_Gamemode& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void Update_GameMode(bool CallFunc_IsValid_ReturnValue);
	void Save_ReadyUpButton_State(class FText ReadyUpButton_Text, bool Warning_State_, bool Hide_Button_, bool JustLock_);
	void Create_WB_Lobby_HUD(bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class ULobby_HUD_C* CallFunc_Create_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue);
	void Get_Player_Name();
	void Get_Chat_Component();
	void Update_WB_LobbyMenu();
	void Update_LobbyStatusIndicator(enum class ESlateVisibility CircularThrobberVisibility, class FText LobbyStatusText, bool CallFunc_IsValid_ReturnValue);
	void Update_Launchevent(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Update_ReadyUpButton(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Update_LobbyPlayerList(bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, class ABP_LobbyActor_C* K2Node_DynamicCast_AsBP_Lobby_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class ULobby_Menu_C* K2Node_DynamicCast_AsLobby_Menu, bool K2Node_DynamicCast_bSuccess_1);
	void InpActEvt_Settings_K2Node_InputActionEvent_3(const struct FKey& Key);
	void OnFailure_866615BE41AC454694EE4F9532779BF7();
	void OnSuccess_866615BE41AC454694EE4F9532779BF7();
	void OnFailure_6E7D169843C1BE4CDA92E896C8C1B365();
	void OnSuccess_6E7D169843C1BE4CDA92E896C8C1B365();
	void InpActEvt_Chat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Talk_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Talk_K2Node_InputActionEvent_0(const struct FKey& Key);
	void MC_LoadingScreen();
	void OC_Update_LobbyStatusIndicator(enum class ESlateVisibility CircularThrobber_Visibility, class FText LobbyStatus_Text);
	void OC_Update_ReadyUpButton(class FText Text, bool WarningState_, bool HideButton_);
	void OC_Launchevent(bool IsLaunchingGame);
	void OC_Update_ServerName(class FText ServerName);
	void OC_Update_ConnectedPlayersList(TArray<struct FS_ConnectedPlayer>& ConnectedPlayers);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void OC_KickedFromLobby();
	void OC_Create_MapTravel_Loadingscreen(class FName Map);
	void StartVoice();
	void ExecuteUbergraph_Lobby_PlayerController(int32 EntryPoint, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, class UW_VOIPHUD_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_CustomEvent_CircularThrobber_Visibility, class FText K2Node_CustomEvent_LobbyStatus_Text, class FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_WarningState_, bool K2Node_CustomEvent_HideButton_, bool K2Node_CustomEvent_IsLaunchingGame, class FText K2Node_CustomEvent_ServerName, TArray<struct FS_ConnectedPlayer>& K2Node_CustomEvent_ConnectedPlayers, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocalPlayerController_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, class FName K2Node_CustomEvent_Map, bool CallFunc_IsValid_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_LobbyActor_C* CallFunc_GetActorOfClass_ReturnValue, class ACameraActor* CallFunc_GetActorOfClass_ReturnValue_1, class UWB_SettingsPanel_Theme2_C* CallFunc_Create_ReturnValue_2, class ULobby_Menu_C* CallFunc_Create_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FKey& K2Node_InputActionEvent_Key_3);
};

}


