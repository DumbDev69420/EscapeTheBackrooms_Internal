#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lobby_PlayerList_Item.Lobby_PlayerList_Item_C
// (None)

class UClass* ULobby_PlayerList_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_PlayerList_Item_C");

	return Clss;
}


// Lobby_PlayerList_Item_C Lobby_PlayerList_Item.Default__Lobby_PlayerList_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobby_PlayerList_Item_C* ULobby_PlayerList_Item_C::GetDefaultObj()
{
	static class ULobby_PlayerList_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobby_PlayerList_Item_C*>(ULobby_PlayerList_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Speaking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpeaking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_PlayerList_Item_C::Set_Speaking(bool IsSpeaking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Set_Speaking");

	Params::ULobby_PlayerList_Item_C_Set_Speaking_Params Parms{};

	Parms.IsSpeaking = IsSpeaking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.KickPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABase_GM_C*                  K2Node_DynamicCast_AsBase_GM                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_PlayerList_Item_C::KickPlayer(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABase_GM_C* K2Node_DynamicCast_AsBase_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "KickPlayer");

	Params::ULobby_PlayerList_Item_C_KickPlayer_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_GM = K2Node_DynamicCast_AsBase_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_PlayerList_Item_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Avatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_PlayerList_Item_C::Set_Avatar(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Set_Avatar");

	Params::ULobby_PlayerList_Item_C_Set_Avatar_Params Parms{};

	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Username
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ULobby_PlayerList_Item_C::Set_Username(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Set_Username");

	Params::ULobby_PlayerList_Item_C_Set_Username_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_KickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_PlayerList_Item_C::Set_KickButton(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Set_KickButton");

	Params::ULobby_PlayerList_Item_C_Set_KickButton_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_HostIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_PlayerList_Item_C::Set_HostIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Set_HostIndicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_ReadyStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void ULobby_PlayerList_Item_C::Set_ReadyStatus(class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Set_ReadyStatus");

	Params::ULobby_PlayerList_Item_C_Set_ReadyStatus_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_PlayerList_Item_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobby_PlayerList_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.BndEvt__WB_Lobby_PlayerList_Item_Kick_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobby_PlayerList_Item_C::BndEvt__WB_Lobby_PlayerList_Item_Kick_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "BndEvt__WB_Lobby_PlayerList_Item_Kick_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.ExecuteUbergraph_Lobby_PlayerList_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobby_PlayerList_Item_C::ExecuteUbergraph_Lobby_PlayerList_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_Item_C", "ExecuteUbergraph_Lobby_PlayerList_Item");

	Params::ULobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


