#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LobbyPS.LobbyPS_C
// (Actor)

class UClass* ALobbyPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyPS_C");

	return Clss;
}


// LobbyPS_C LobbyPS.Default__LobbyPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobbyPS_C* ALobbyPS_C::GetDefaultObj()
{
	static class ALobbyPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobbyPS_C*>(ALobbyPS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LobbyPS.LobbyPS_C.Load_Player_ConnectionInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Client_ReadyStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::Load_Player_ConnectionInfo(bool Client_ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "Load_Player_ConnectionInfo");

	Params::ALobbyPS_C_Load_Player_ConnectionInfo_Params Parms{};

	Parms.Client_ReadyStatus = Client_ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPS.LobbyPS_C.OnRep_Player_ConnectionInfo_OR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_GS_C*                 K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::OnRep_Player_ConnectionInfo_OR(bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "OnRep_Player_ConnectionInfo_OR");

	Params::ALobbyPS_C_OnRep_Player_ConnectionInfo_OR_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPS.LobbyPS_C.OnRep_Player_UserProfile_OR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_GS_C*                 K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::OnRep_Player_UserProfile_OR(bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "OnRep_Player_UserProfile_OR");

	Params::ALobbyPS_C_OnRep_Player_UserProfile_OR_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPS.LobbyPS_C.ToggleReadyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Get_ReadyStatus_ReadyStatus                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::ToggleReadyStatus(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Get_ReadyStatus_ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "ToggleReadyStatus");

	Params::ALobbyPS_C_ToggleReadyStatus_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller_1 = K2Node_DynamicCast_AsLobby_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_ReadyStatus_ReadyStatus = CallFunc_Get_ReadyStatus_ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPS.LobbyPS_C.Get_ReadyStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReadyStatus                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::Get_ReadyStatus(bool* ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "Get_ReadyStatus");

	Params::ALobbyPS_C_Get_ReadyStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReadyStatus != nullptr)
		*ReadyStatus = Parms.ReadyStatus;

}


// Function LobbyPS.LobbyPS_C.Set_ReadyStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALobbyPS_C::Set_ReadyStatus(bool ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "Set_ReadyStatus");

	Params::ALobbyPS_C_Set_ReadyStatus_Params Parms{};

	Parms.ReadyStatus = ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPS.LobbyPS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALobbyPS_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPS.LobbyPS_C.SR_Toggle_Ready_Status
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobbyPS_C::SR_Toggle_Ready_Status()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "SR_Toggle_Ready_Status");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPS.LobbyPS_C.OC_Init
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALobbyPS_C::OC_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "OC_Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPS.LobbyPS_C.ExecuteUbergraph_LobbyPS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyPS_C::ExecuteUbergraph_LobbyPS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPS_C", "ExecuteUbergraph_LobbyPS");

	Params::ALobbyPS_C_ExecuteUbergraph_LobbyPS_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


