#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x298 - 0x228)
// BlueprintGeneratedClass Old_Instance.Old_Instance_C
class UOld_Instance_C : public UAdvancedFriendsGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_LoadingScreen_C*                    W_LoadingScreenRef;                                // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LoadingMessage;                                    // 0x238(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LoadingMessageTip;                                 // 0x250(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AlreadyIntro_;                                     // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLoadingBeforeContinue;                         // 0x26C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMP_PlayerController_C*>        ToRespawn;                                         // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	enum class E_Difficulty                      Difficulty;                                        // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasKicked;                                         // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Code;                                              // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOld_Instance_C* GetDefaultObj();

	void ToggleVoiceIngame(bool IsActivated);
	void CheckCodeUnique(const struct FSessionsSearchSetting& Code);
	void GenerateCode(const TArray<class FString>& CharacterSet, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnFailure_A80D36E848E6AE6183E259BE7692C339();
	void OnSuccess_A80D36E848E6AE6183E259BE7692C339();
	void OnFailure_3D35B0DB407C07D551689385E984433B();
	void OnSuccess_3D35B0DB407C07D551689385E984433B();
	void OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D(TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D(TArray<struct FBlueprintSessionResult>& Results);
	void OnFailure_887915044268FE8E01B793860BA0535C(TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_887915044268FE8E01B793860BA0535C(TArray<struct FBlueprintSessionResult>& Results);
	void OnFailure_E86CBC904E3BC46F964D8587210AFCCB();
	void OnSuccess_E86CBC904E3BC46F964D8587210AFCCB();
	void OnFailure_B97CE1CD4661BC21FA87C5971EBFAE4B();
	void OnSuccess_B97CE1CD4661BC21FA87C5971EBFAE4B();
	void OnFailure_ED213154495FF5E71DED67A697B987EA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void OnSuccess_ED213154495FF5E71DED67A697B987EA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
	void CreateServer(class APlayerController* PlayerController, class UWidget* WidgetRef, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool IsPrivate, class FText ServerName);
	void JoinServerCode(const class FString& Code, class APlayerController* PlayerController, class UWidget* ParentRef);
	void ShowLoadingScreen(class APlayerController* PlayerController, class FText Message);
	void JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef, bool ShowLoadingScreen);
	void ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget);
	void Initialize_AudioSettings();
	void ReceiveInit();
	void OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin);
	void OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking);
	void UnlockAchievement(class FName AchievementName);
	void ExecuteUbergraph_Old_Instance(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_WrittenAchievementName_1, float K2Node_CustomEvent_WrittenProgress_1, int32 K2Node_CustomEvent_WrittenUserTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_WrittenAchievementName, float K2Node_CustomEvent_WrittenProgress, int32 K2Node_CustomEvent_WrittenUserTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, float Temp_float_Variable, class FName Temp_name_Variable, class APlayerController* K2Node_CustomEvent_PlayerController_4, class UWidget* K2Node_CustomEvent_WidgetRef, class UWidget* K2Node_CustomEvent_ParentRef_2, class FName K2Node_CustomEvent_LevelName, int32 K2Node_CustomEvent_MaxPlayer, bool K2Node_CustomEvent_IsPrivate, class FText K2Node_CustomEvent_ServerName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& K2Node_CustomEvent_Code, class APlayerController* K2Node_CustomEvent_PlayerController_3, class UWidget* K2Node_CustomEvent_ParentRef_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* K2Node_CustomEvent_PlayerController_2, class FText K2Node_CustomEvent_Message, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UWidget* K2Node_CustomEvent_ParentRef, bool K2Node_CustomEvent_ShowLoadingScreen, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* K2Node_CustomEvent_PlayerController, class UWidget* K2Node_CustomEvent_Widget, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_2, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_1, TArray<struct FSessionsSearchSetting>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_5, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_3, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array_1, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_2, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, TArray<struct FSessionsSearchSetting>& K2Node_MakeArray_Array_2, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue_8, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, const struct FBPUniqueNetId& K2Node_Event_PlayerId, bool K2Node_Event_bIsTalking, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_EqualEqual_UNetIDUnetID_ReturnValue, class FName K2Node_CustomEvent_AchievementName, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_10, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_11);
};

}


