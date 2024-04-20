#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x38D - 0x338)
// BlueprintGeneratedClass MP_PS.MP_PS_C
class AMP_PS_C : public AFancyPlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Points;                                            // 0x348(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class ETeam                             Team;                                              // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_PlayerConnectionInfo               PlayerConnection;                                  // 0x350(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FS_UserProfile                        UserInfo;                                          // 0x358(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         HasFlashlight;                                     // 0x370(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Items_Rep;                                         // 0x378(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                        LastSave;                                          // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HeadsetType                     HeadsetType;                                       // 0x38C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMP_PS_C* GetDefaultObj();

	void LoadPlayer(const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, bool CallFunc_LoadPlayerData_DidFind, const struct FS_PlayerData& CallFunc_LoadPlayerData_Inventory, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SavePlayer(bool ForceSave, bool CallFunc_K2_IsTearingDown_isTearingDown, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FS_PlayerData& K2Node_MakeStruct_S_PlayerData, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String);
	void Load_Player_ConnectionInfo(bool Client_ReadyStatus, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo_1, bool CallFunc_IsServer_ReturnValue);
	void Load_Player_UserProfile(const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile_1, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_UserInfo();
	void OnRep_Player_UserProfile_OR();
	void OnRep_Player_ConnectionInfo_OR();
	void OnRep_PlayerConnection();
	void OnRep_Points();
	void OnRep_Kills();
	void SR_Update_Player_ConnectionInfo(const struct FS_PlayerConnectionInfo& Player_ConnectionInfo);
	void SR_Update_Player_UserProfile(const struct FS_UserProfile& Player_UserProfile);
	void ReceiveCopyProperties(class APlayerState* NewPlayerState);
	void SavePlayerStats();
	void LoadPlayerStats();
	void OnKillPlayer();
	void SetInventoryItem(int32 Index, class FName Name);
	void SaveInventory(TArray<class FName>& Inventory);
	void SRV_AddSanity(float Amount);
	void RefreshPlayer();
	void SRV_SetHeadsetType(enum class E_HeadsetType HeadsetType);
	void ExecuteUbergraph_MP_PS(int32 EntryPoint, enum class E_HeadsetType K2Node_CustomEvent_HeadsetType, class APlayerState* K2Node_Event_NewPlayerState, const struct FS_UserProfile& K2Node_CustomEvent_Player_UserProfile, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_Name, TArray<class FName>& K2Node_CustomEvent_Inventory, float K2Node_CustomEvent_Amount, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_FClamp_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, const struct FS_PlayerConnectionInfo& K2Node_CustomEvent_Player_ConnectionInfo, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


