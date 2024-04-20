#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP_PS.MP_PS_C
// (Actor)

class UClass* AMP_PS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP_PS_C");

	return Clss;
}


// MP_PS_C MP_PS.Default__MP_PS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMP_PS_C* AMP_PS_C::GetDefaultObj()
{
	static class AMP_PS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMP_PS_C*>(AMP_PS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MP_PS.MP_PS_C.LoadPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPlayerData_DidFind                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PlayerData               CallFunc_LoadPlayerData_Inventory                                (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PS_C::LoadPlayer(const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, bool CallFunc_LoadPlayerData_DidFind, const struct FS_PlayerData& CallFunc_LoadPlayerData_Inventory, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "LoadPlayer");

	Params::AMP_PS_C_LoadPlayer_Params Parms{};

	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_LoadPlayerData_DidFind = CallFunc_LoadPlayerData_DidFind;
	Parms.CallFunc_LoadPlayerData_Inventory = CallFunc_LoadPlayerData_Inventory;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.SavePlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceSave                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTearingDown_isTearingDown                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerData               K2Node_MakeStruct_S_PlayerData                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)

void AMP_PS_C::SavePlayer(bool ForceSave, bool CallFunc_K2_IsTearingDown_isTearingDown, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FS_PlayerData& K2Node_MakeStruct_S_PlayerData, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SavePlayer");

	Params::AMP_PS_C_SavePlayer_Params Parms{};

	Parms.ForceSave = ForceSave;
	Parms.CallFunc_K2_IsTearingDown_isTearingDown = CallFunc_K2_IsTearingDown_isTearingDown;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_S_PlayerData = K2Node_MakeStruct_S_PlayerData;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.Load_Player_ConnectionInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Client_ReadyStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PlayerConnectionInfo     K2Node_MakeStruct_S_PlayerConnectionInfo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerConnectionInfo     K2Node_MakeStruct_S_PlayerConnectionInfo_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PS_C::Load_Player_ConnectionInfo(bool Client_ReadyStatus, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo, const struct FS_PlayerConnectionInfo& K2Node_MakeStruct_S_PlayerConnectionInfo_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "Load_Player_ConnectionInfo");

	Params::AMP_PS_C_Load_Player_ConnectionInfo_Params Parms{};

	Parms.Client_ReadyStatus = Client_ReadyStatus;
	Parms.K2Node_MakeStruct_S_PlayerConnectionInfo = K2Node_MakeStruct_S_PlayerConnectionInfo;
	Parms.K2Node_MakeStruct_S_PlayerConnectionInfo_1 = K2Node_MakeStruct_S_PlayerConnectionInfo_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.Load_Player_UserProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// struct FS_UserProfile              K2Node_MakeStruct_S_UserProfile                                  (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatar_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatar_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UserProfile              K2Node_MakeStruct_S_UserProfile_1                                (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PS_C::Load_Player_UserProfile(const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, const struct FS_UserProfile& K2Node_MakeStruct_S_UserProfile_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "Load_Player_UserProfile");

	Params::AMP_PS_C_Load_Player_UserProfile_Params Parms{};

	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.K2Node_MakeStruct_S_UserProfile = K2Node_MakeStruct_S_UserProfile;
	Parms.CallFunc_GetSteamFriendAvatar_Result = CallFunc_GetSteamFriendAvatar_Result;
	Parms.CallFunc_GetSteamFriendAvatar_ReturnValue = CallFunc_GetSteamFriendAvatar_ReturnValue;
	Parms.K2Node_MakeStruct_S_UserProfile_1 = K2Node_MakeStruct_S_UserProfile_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.OnRep_UserInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnRep_UserInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnRep_UserInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.OnRep_Player_UserProfile_OR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnRep_Player_UserProfile_OR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnRep_Player_UserProfile_OR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.OnRep_Player_ConnectionInfo_OR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnRep_Player_ConnectionInfo_OR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnRep_Player_ConnectionInfo_OR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.OnRep_PlayerConnection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnRep_PlayerConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnRep_PlayerConnection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.OnRep_Points
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnRep_Points()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnRep_Points");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.OnRep_Kills
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnRep_Kills()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnRep_Kills");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.SR_Update_Player_ConnectionInfo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_PlayerConnectionInfo     Player_ConnectionInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PS_C::SR_Update_Player_ConnectionInfo(const struct FS_PlayerConnectionInfo& Player_ConnectionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SR_Update_Player_ConnectionInfo");

	Params::AMP_PS_C_SR_Update_Player_ConnectionInfo_Params Parms{};

	Parms.Player_ConnectionInfo = Player_ConnectionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.SR_Update_Player_UserProfile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UserProfile              Player_UserProfile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)

void AMP_PS_C::SR_Update_Player_UserProfile(const struct FS_UserProfile& Player_UserProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SR_Update_Player_UserProfile");

	Params::AMP_PS_C_SR_Update_Player_UserProfile_Params Parms{};

	Parms.Player_UserProfile = Player_UserProfile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.ReceiveCopyProperties
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerState*                NewPlayerState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PS_C::ReceiveCopyProperties(class APlayerState* NewPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "ReceiveCopyProperties");

	Params::AMP_PS_C_ReceiveCopyProperties_Params Parms{};

	Parms.NewPlayerState = NewPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.SavePlayerStats
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::SavePlayerStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SavePlayerStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.LoadPlayerStats
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::LoadPlayerStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "LoadPlayerStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.OnKillPlayer
// (Event, Public, BlueprintEvent)
// Parameters:

void AMP_PS_C::OnKillPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "OnKillPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.SetInventoryItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PS_C::SetInventoryItem(int32 Index, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SetInventoryItem");

	Params::AMP_PS_C_SetInventoryItem_Params Parms{};

	Parms.Index = Index;
	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.SaveInventory
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Inventory                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMP_PS_C::SaveInventory(TArray<class FName>& Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SaveInventory");

	Params::AMP_PS_C_SaveInventory_Params Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.SRV_AddSanity
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PS_C::SRV_AddSanity(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SRV_AddSanity");

	Params::AMP_PS_C_SRV_AddSanity_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.RefreshPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PS_C::RefreshPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "RefreshPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PS.MP_PS_C.SRV_SetHeadsetType
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_HeadsetType           HeadsetType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PS_C::SRV_SetHeadsetType(enum class E_HeadsetType HeadsetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "SRV_SetHeadsetType");

	Params::AMP_PS_C_SRV_SetHeadsetType_Params Parms{};

	Parms.HeadsetType = HeadsetType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PS.MP_PS_C.ExecuteUbergraph_MP_PS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HeadsetType           K2Node_CustomEvent_HeadsetType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_Event_NewPlayerState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UserProfile              K2Node_CustomEvent_Player_UserProfile                            (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Name                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Inventory                                     (ConstParm, ReferenceParm)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_PlayerConnectionInfo     K2Node_CustomEvent_Player_ConnectionInfo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PS_C::ExecuteUbergraph_MP_PS(int32 EntryPoint, enum class E_HeadsetType K2Node_CustomEvent_HeadsetType, class APlayerState* K2Node_Event_NewPlayerState, const struct FS_UserProfile& K2Node_CustomEvent_Player_UserProfile, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_Name, TArray<class FName>& K2Node_CustomEvent_Inventory, float K2Node_CustomEvent_Amount, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_FClamp_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, const struct FS_PlayerConnectionInfo& K2Node_CustomEvent_Player_ConnectionInfo, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PS_C", "ExecuteUbergraph_MP_PS");

	Params::AMP_PS_C_ExecuteUbergraph_MP_PS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HeadsetType = K2Node_CustomEvent_HeadsetType;
	Parms.K2Node_Event_NewPlayerState = K2Node_Event_NewPlayerState;
	Parms.K2Node_CustomEvent_Player_UserProfile = K2Node_CustomEvent_Player_UserProfile;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Player_ConnectionInfo = K2Node_CustomEvent_Player_ConnectionInfo;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_1 = K2Node_DynamicCast_AsBPCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


