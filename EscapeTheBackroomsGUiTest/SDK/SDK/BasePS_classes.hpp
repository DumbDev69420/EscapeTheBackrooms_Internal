#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x350 - 0x320)
// BlueprintGeneratedClass BasePS.BasePS_C
class ABasePS_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FS_PlayerConnectionInfo               PlayerConnection;                                  // 0x330(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FS_UserProfile                        UserInfo;                                          // 0x338(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABasePS_C* GetDefaultObj();

	void Load_Player_Headset(bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue);
	void OnRep_PlayerConnection();
	void OnRep_UserInfo();
	void OnRep_Player_UserProfile_OR();
	void OnRep_Player_ConnectionInfo_OR();
	void Load_Player_UserProfile(const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile_1);
	void Load_Player_ConnectionInfo(bool Client_ReadyStatus, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo_1, bool CallFunc_IsServer_ReturnValue);
	void SR_Update_Player_UserProfile(const struct FS_UserProfile& Player_UserProfile);
	void ReceiveBeginPlay();
	void OC_Init();
	void SR_Update_Player_ConnectionInfo(const struct FS_PlayerConnectionInfo& Player_ConnectionInfo);
	void SR_LoadHeadset(enum class E_HeadsetType HeadsetType, int32 PlayerId);
	void ExecuteUbergraph_BasePS(int32 EntryPoint, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FS_UserProfile& K2Node_CustomEvent_Player_UserProfile, const struct FS_PlayerConnectionInfo& K2Node_CustomEvent_Player_ConnectionInfo, enum class E_HeadsetType K2Node_CustomEvent_HeadsetType, int32 K2Node_CustomEvent_PlayerId, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
};

}


