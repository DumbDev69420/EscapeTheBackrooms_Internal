#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2B9 - 0x260)
// WidgetBlueprintGeneratedClass Lobby_Menu.Lobby_Menu_C
class ULobby_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULobby_MapSelection_C*                 Lobby_MapSelection;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_PlayerList_C*                   Lobby_PlayerList;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ReadyUpBtn;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_60;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ALobby_GS_C*                           LobbyGS;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyPS_C*                            LobbyPS;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobby_PlayerController_C*             LobbyPC;                                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStarting;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2417[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentSave;                                       // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class E_Difficulty                      CurrentDifficulty;                                 // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULobby_Menu_C* GetDefaultObj();

	void Init_ReadyUpButton(bool CallFunc_IsServer_ReturnValue);
	void Set_Ready_Up_Button(class FText Text, bool WarningState_, bool HideButton_, bool LockButton_, class UObject* Pressed_Image, class UObject* Hovered_Image, class UObject* Normal_Image, bool CallFunc_Not_PreBool_ReturnValue);
	void Client_Toggle_ReadyUp();
	void Server_Toggle_Launchevent(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void Init_Client_ReadUpBtn();
	void Init_Server_ReadyUpBtn();
	void Init_Casts(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess_2);
	void BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_0_OnSwitched_Save__DelegateSignature(const class FString& SaveName);
	void CanClose();
	void BndEvt__Lobby_Menu_ReadyUpBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_1_OnSwitched_Difficulty__DelegateSignature(enum class E_Difficulty Difficulty);
	void ExecuteUbergraph_Lobby_Menu(int32 EntryPoint, const struct FDateTime& CallFunc_Now_ReturnValue, int32 CallFunc_GetSystemTimeSeconds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const class FString& K2Node_ComponentBoundEvent_SaveName, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_CheckName_IsValid, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, enum class E_Difficulty K2Node_ComponentBoundEvent_Difficulty, enum class E_Difficulty CallFunc_Get_Difficulty_Difficulty, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Create_New_Slot_Success);
};

}


