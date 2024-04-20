#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x161 (0x3A9 - 0x248)
// BlueprintGeneratedClass BP_MyGameInstance.BP_MyGameInstance_C
class UBP_MyGameInstance_C : public UFancyGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_LoadingScreen_C*                    W_LoadingScreenRef;                                // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LoadingMessage;                                    // 0x258(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LoadingMessageTip;                                 // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AlreadyIntro_;                                     // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLoadingBeforeContinue;                         // 0x28C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMP_PlayerController_C*>        ToRespawn;                                         // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	enum class E_Difficulty                      Difficulty;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasKicked;                                         // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Code;                                              // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                CurrentSlotName;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         FromHub;                                           // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsExit;                                            // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenSanityWarning;                              // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, enum class E_HeadsetType> HeadsetMap;                                        // 0x2D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ExtraData;                                         // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsLoading;                                         // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastXP;                                            // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_GameMode                        CurrentMode;                                       // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_225F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StartingLevel;                                     // 0x33C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DidCompleteMission;                                // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2260[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionStructure                     MissionCompleteData;                               // 0x348(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasSeenGlowstickHint;                              // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_MyGameInstance_C* GetDefaultObj();

	void CheckShouldDisplayEvent(class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ResetInput();
	void CheckCodeUnique(const struct FSessionsSearchSetting& Code);
	void GenerateCode(const TArray<class FString>& CharacterSet, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnFailure_B065C47F48B157C121B06CAFCED8C6AC();
	void OnSuccess_B065C47F48B157C121B06CAFCED8C6AC();
	void OnFailure_D7E8A28A46B4BD5B7318A6A66AFD14E2();
	void OnSuccess_D7E8A28A46B4BD5B7318A6A66AFD14E2();
	void OnFailure_3A8DCEEA406564302B3F52A5D035B982();
	void OnSuccess_3A8DCEEA406564302B3F52A5D035B982();
	void OnFailure_CAE6F30D4DC345FC9711EAB8167D6CDE();
	void OnSuccess_CAE6F30D4DC345FC9711EAB8167D6CDE();
	void OnFailure_F6A1C64C4BF407E4C67D4F8266759C0F(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnSuccess_F6A1C64C4BF407E4C67D4F8266759C0F(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnFailure_4A8E1BF4489B644EBB46CCB5CE87A8FB();
	void OnSuccess_4A8E1BF4489B644EBB46CCB5CE87A8FB();
	void OnFailure_CE0E125D465CF87986EDACB437749973();
	void OnSuccess_CE0E125D465CF87986EDACB437749973();
	void ShowLoadingScreen(class APlayerController* PlayerController, class FText Message);
	void CreateServer(class APlayerController* PlayerController, class UWidget* WidgetRef, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool IsPrivate, class FText ServerName);
	void JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef, bool ShowLoadingScreen);
	void Initialize_AudioSettings();
	void ReceiveInit();
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void UnlockAchievement(class FName AchievementName);
	void ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget);
	void OnSteamOverlayIsActive(bool IsOverlayActive);
	void ReceiveShutdown();
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void ExecuteUbergraph_BP_MyGameInstance(int32 EntryPoint, class FName K2Node_CustomEvent_WrittenAchievementName_1, float K2Node_CustomEvent_WrittenProgress_1, int32 K2Node_CustomEvent_WrittenUserTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_WrittenAchievementName, float K2Node_CustomEvent_WrittenProgress, int32 K2Node_CustomEvent_WrittenUserTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, float Temp_float_Variable, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_3, class FText K2Node_CustomEvent_Message, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_2, class UWidget* K2Node_CustomEvent_WidgetRef, class UWidget* K2Node_CustomEvent_ParentRef_1, class FName K2Node_CustomEvent_LevelName, int32 K2Node_CustomEvent_MaxPlayer, bool K2Node_CustomEvent_IsPrivate, class FText K2Node_CustomEvent_ServerName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UWidget* K2Node_CustomEvent_ParentRef, bool K2Node_CustomEvent_ShowLoadingScreen, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_2, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FBPUniqueNetId& K2Node_Event_PlayerId, bool K2Node_Event_bIsTalking, class FName K2Node_CustomEvent_AchievementName, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class APlayerController* K2Node_CustomEvent_PlayerController, class UWidget* K2Node_CustomEvent_Widget, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool K2Node_Event_isOverlayActive, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_InitializeCPPElements_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_K2_IsTearingDown_isTearingDown, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, bool CallFunc_IsValid_ReturnValue_8, TArray<class UW_MainMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_MainMenu_C* CallFunc_Array_Get_Item, TArray<struct FSessionPropertyKeyPair>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_9, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_3);
};

}


