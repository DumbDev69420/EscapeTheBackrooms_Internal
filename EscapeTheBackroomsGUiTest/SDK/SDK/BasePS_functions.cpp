#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasePS.BasePS_C
// (Actor)

class UClass* ABasePS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePS_C");

	return Clss;
}


// BasePS_C BasePS.Default__BasePS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasePS_C* ABasePS_C::GetDefaultObj()
{
	static class ABasePS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasePS_C*>(ABasePS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasePS.BasePS_C.Load_Player_Headset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasePS_C::Load_Player_Headset(bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "Load_Player_Headset");

	Params::ABasePS_C_Load_Player_Headset_Params Parms{};

	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePS.BasePS_C.OnRep_PlayerConnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePS_C::OnRep_PlayerConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "OnRep_PlayerConnection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePS.BasePS_C.OnRep_UserInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePS_C::OnRep_UserInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "OnRep_UserInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePS.BasePS_C.OnRep_Player_UserProfile_OR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePS_C::OnRep_Player_UserProfile_OR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "OnRep_Player_UserProfile_OR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePS.BasePS_C.OnRep_Player_ConnectionInfo_OR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePS_C::OnRep_Player_ConnectionInfo_OR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "OnRep_Player_ConnectionInfo_OR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePS.BasePS_C.Load_Player_UserProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FS_UserProfile              K2Node_MakeStruct_S_UserProfile                                  (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatar_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatar_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_UserProfile              K2Node_MakeStruct_S_UserProfile_1                                (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABasePS_C::Load_Player_UserProfile(const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "Load_Player_UserProfile");

	Params::ABasePS_C_Load_Player_UserProfile_Params Parms{};

	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_MakeStruct_S_UserProfile = K2Node_MakeStruct_S_UserProfile;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_GetSteamFriendAvatar_Result = CallFunc_GetSteamFriendAvatar_Result;
	Parms.CallFunc_GetSteamFriendAvatar_ReturnValue = CallFunc_GetSteamFriendAvatar_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_S_UserProfile_1 = K2Node_MakeStruct_S_UserProfile_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePS.BasePS_C.Load_Player_ConnectionInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Client_ReadyStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PlayerConnectionInfo     K2Node_MakeStruct_S_PlayerConnectionInfo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerConnectionInfo     K2Node_MakeStruct_S_PlayerConnectionInfo_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasePS_C::Load_Player_ConnectionInfo(bool Client_ReadyStatus, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "Load_Player_ConnectionInfo");

	Params::ABasePS_C_Load_Player_ConnectionInfo_Params Parms{};

	Parms.Client_ReadyStatus = Client_ReadyStatus;
	Parms.K2Node_MakeStruct_S_PlayerConnectionInfo = K2Node_MakeStruct_S_PlayerConnectionInfo;
	Parms.K2Node_MakeStruct_S_PlayerConnectionInfo_1 = K2Node_MakeStruct_S_PlayerConnectionInfo_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePS.BasePS_C.SR_Update_Player_UserProfile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UserProfile              Player_UserProfile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABasePS_C::SR_Update_Player_UserProfile(const struct FS_UserProfile& Player_UserProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "SR_Update_Player_UserProfile");

	Params::ABasePS_C_SR_Update_Player_UserProfile_Params Parms{};

	Parms.Player_UserProfile = Player_UserProfile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePS.BasePS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABasePS_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePS.BasePS_C.OC_Init
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePS_C::OC_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "OC_Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePS.BasePS_C.SR_Update_Player_ConnectionInfo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PlayerConnectionInfo     Player_ConnectionInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePS_C::SR_Update_Player_ConnectionInfo(const struct FS_PlayerConnectionInfo& Player_ConnectionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "SR_Update_Player_ConnectionInfo");

	Params::ABasePS_C_SR_Update_Player_ConnectionInfo_Params Parms{};

	Parms.Player_ConnectionInfo = Player_ConnectionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePS.BasePS_C.SR_LoadHeadset
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_HeadsetType           HeadsetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePS_C::SR_LoadHeadset(enum class E_HeadsetType HeadsetType, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "SR_LoadHeadset");

	Params::ABasePS_C_SR_LoadHeadset_Params Parms{};

	Parms.HeadsetType = HeadsetType;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePS.BasePS_C.ExecuteUbergraph_BasePS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FS_UserProfile              K2Node_CustomEvent_Player_UserProfile                            (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_PlayerConnectionInfo     K2Node_CustomEvent_Player_ConnectionInfo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HeadsetType           K2Node_CustomEvent_HeadsetType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void ABasePS_C::ExecuteUbergraph_BasePS(int32 EntryPoint, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FS_UserProfile& K2Node_CustomEvent_Player_UserProfile, const struct FS_PlayerConnectionInfo& K2Node_CustomEvent_Player_ConnectionInfo, enum class E_HeadsetType K2Node_CustomEvent_HeadsetType, int32 K2Node_CustomEvent_PlayerId, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePS_C", "ExecuteUbergraph_BasePS");

	Params::ABasePS_C_ExecuteUbergraph_BasePS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_Player_UserProfile = K2Node_CustomEvent_Player_UserProfile;
	Parms.K2Node_CustomEvent_Player_ConnectionInfo = K2Node_CustomEvent_Player_ConnectionInfo;
	Parms.K2Node_CustomEvent_HeadsetType = K2Node_CustomEvent_HeadsetType;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


