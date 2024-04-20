#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x359 - 0x350)
// BlueprintGeneratedClass LobbyPS.LobbyPS_C
class ALobbyPS_C : public ABasePS_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CanHostForceLaunchGame_;                           // 0x358(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ALobbyPS_C* GetDefaultObj();

	void Load_Player_ConnectionInfo(bool Client_ReadyStatus);
	void OnRep_Player_ConnectionInfo_OR(bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess);
	void OnRep_Player_UserProfile_OR(bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess);
	void ToggleReadyStatus(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Get_ReadyStatus_ReadyStatus);
	void Get_ReadyStatus(bool* ReadyStatus);
	void Set_ReadyStatus(bool ReadyStatus);
	void ReceiveBeginPlay();
	void SR_Toggle_Ready_Status();
	void OC_Init();
	void ExecuteUbergraph_LobbyPS(int32 EntryPoint);
};

}


