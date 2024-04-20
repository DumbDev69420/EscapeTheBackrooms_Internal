#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x331 - 0x328)
// BlueprintGeneratedClass Lobby_GM.Lobby_GM_C
class ALobby_GM_C : public ABase_GM_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CanHostForceLaunchGame_;                           // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ALobby_GM_C* GetDefaultObj();

	void Create_MapTravel_loadingScreens(class FName* Current_Map, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, class ALobby_PlayerController_C* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ALobby_PlayerController_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnLogout(class AController* ExitingController);
	void ServerTravel();
	void ExecuteUbergraph_Lobby_GM(int32 EntryPoint, class APlayerController* K2Node_Event_NewPlayer, class AController* K2Node_Event_ExitingController, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Create_MapTravel_loadingScreens_Current_Map, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess_1);
};

}


