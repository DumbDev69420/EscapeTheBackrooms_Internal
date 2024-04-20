#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Base_GM.Base_GM_C
// (Actor)

class UClass* ABase_GM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Base_GM_C");

	return Clss;
}


// Base_GM_C Base_GM.Default__Base_GM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABase_GM_C* ABase_GM_C::GetDefaultObj()
{
	static class ABase_GM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABase_GM_C*>(ABase_GM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Base_GM.Base_GM_C.KickPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_KickPlayer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABase_GM_C::KickPlayer(int32 PlayerId, class ALobby_PlayerController_C* CallFunc_Array_Get_Item, bool CallFunc_KickPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "KickPlayer");

	Params::ABase_GM_C_KickPlayer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_KickPlayer_ReturnValue = CallFunc_KickPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.Handle_PlayerDisconnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABase_GM_C::Handle_PlayerDisconnection(class UObject* Player, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "Handle_PlayerDisconnection");

	Params::ABase_GM_C_Handle_PlayerDisconnection_Params Parms{};

	Parms.Player = Player;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.Handle_PlayerConnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_GM_C::Handle_PlayerConnection(class APlayerController* NewPlayer, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "Handle_PlayerConnection");

	Params::ABase_GM_C_Handle_PlayerConnection_Params Parms{};

	Parms.NewPlayer = NewPlayer;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.ServerTravel_ToGameplayMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABase_GM_C::ServerTravel_ToGameplayMap(class FName Map, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "ServerTravel_ToGameplayMap");

	Params::ABase_GM_C_ServerTravel_ToGameplayMap_Params Parms{};

	Parms.Map = Map;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_GM_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "K2_PostLogin");

	Params::ABase_GM_C_K2_PostLogin_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.K2_OnSwapPlayerControllers
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*           OldPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           NewPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_GM_C::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "K2_OnSwapPlayerControllers");

	Params::ABase_GM_C_K2_OnSwapPlayerControllers_Params Parms{};

	Parms.OldPC = OldPC;
	Parms.NewPC = NewPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_GM_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "K2_OnLogout");

	Params::ABase_GM_C_K2_OnLogout_Params Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_GM.Base_GM_C.ExecuteUbergraph_Base_GM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_ExitingController                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPlayer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_OldPC                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPC                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_GM_C::ExecuteUbergraph_Base_GM(int32 EntryPoint, class AController* K2Node_Event_ExitingController, class APlayerController* K2Node_Event_NewPlayer, class APlayerController* K2Node_Event_OldPC, class APlayerController* K2Node_Event_NewPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_GM_C", "ExecuteUbergraph_Base_GM");

	Params::ABase_GM_C_ExecuteUbergraph_Base_GM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ExitingController = K2Node_Event_ExitingController;
	Parms.K2Node_Event_NewPlayer = K2Node_Event_NewPlayer;
	Parms.K2Node_Event_OldPC = K2Node_Event_OldPC;
	Parms.K2Node_Event_NewPC = K2Node_Event_NewPC;

	UObject::ProcessEvent(Func, &Parms);

}

}


