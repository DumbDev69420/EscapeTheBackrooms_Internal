#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lobby_HUD.Lobby_HUD_C
// (None)

class UClass* ULobby_HUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_HUD_C");

	return Clss;
}


// Lobby_HUD_C Lobby_HUD.Default__Lobby_HUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobby_HUD_C* ULobby_HUD_C::GetDefaultObj()
{
	static class ULobby_HUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobby_HUD_C*>(ULobby_HUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_HUD.Lobby_HUD_C.HideMicIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId                              (None)
// bool                               CallFunc_EqualEqual_UNetIDUnetID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_VOIPIndicator_C*          K2Node_DynamicCast_AsW_VOIPIndicator                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_HUD_C::HideMicIcon(const struct FBPUniqueNetId& UniqueId, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, bool CallFunc_EqualEqual_UNetIDUnetID_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UW_VOIPIndicator_C* K2Node_DynamicCast_AsW_VOIPIndicator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "HideMicIcon");

	Params::ULobby_HUD_C_HideMicIcon_Params Parms{};

	Parms.UniqueId = UniqueId;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId = CallFunc_GetUniqueNetID_UniqueNetId;
	Parms.CallFunc_EqualEqual_UNetIDUnetID_ReturnValue = CallFunc_EqualEqual_UNetIDUnetID_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_VOIPIndicator = K2Node_DynamicCast_AsW_VOIPIndicator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1 = CallFunc_EqualEqual_UNetIDUnetID_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.ShowMicIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_VOIPIndicator_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId                              (None)
// bool                               CallFunc_EqualEqual_UNetIDUnetID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_HUD_C::ShowMicIcon(const struct FBPUniqueNetId& UniqueId, class UW_VOIPIndicator_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, bool CallFunc_EqualEqual_UNetIDUnetID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "ShowMicIcon");

	Params::ULobby_HUD_C_ShowMicIcon_Params Parms{};

	Parms.UniqueId = UniqueId;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId = CallFunc_GetUniqueNetID_UniqueNetId;
	Parms.CallFunc_EqualEqual_UNetIDUnetID_ReturnValue = CallFunc_EqualEqual_UNetIDUnetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.SetServerCode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ServerCode                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ULobby_HUD_C::SetServerCode(class FString& ServerCode, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "SetServerCode");

	Params::ULobby_HUD_C_SetServerCode_Params Parms{};

	Parms.ServerCode = ServerCode;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.Init_Casts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALobbyPS_C*                  K2Node_DynamicCast_AsLobby_PS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_GS_C*                 K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_HUD_C::Init_Casts(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Init_Casts");

	Params::ULobby_HUD_C_Init_Casts_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLobby_PS = K2Node_DynamicCast_AsLobby_PS;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_HUD_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.Init_LobbyStatus_Indicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_HUD_C::Init_LobbyStatus_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Init_LobbyStatus_Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.SetServerName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ServerName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ULobby_HUD_C::SetServerName(class FString& ServerName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "SetServerName");

	Params::ULobby_HUD_C_SetServerName_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.Update_LobbyStatus_Indicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CircularThrobber_Visibility                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LobbyStatus_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ULobby_HUD_C::Update_LobbyStatus_Indicator(enum class ESlateVisibility CircularThrobber_Visibility, class FText LobbyStatus_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Update_LobbyStatus_Indicator");

	Params::ULobby_HUD_C_Update_LobbyStatus_Indicator_Params Parms{};

	Parms.CircularThrobber_Visibility = CircularThrobber_Visibility;
	Parms.LobbyStatus_Text = LobbyStatus_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_HUD_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobby_HUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.Toggle_Launchevent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LaunchingGame_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_HUD_C::Toggle_Launchevent(bool LaunchingGame_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Toggle_Launchevent");

	Params::ULobby_HUD_C_Toggle_Launchevent_Params Parms{};

	Parms.LaunchingGame_ = LaunchingGame_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_HUD.Lobby_HUD_C.Countdown_Launchevent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_HUD_C::Countdown_Launchevent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "Countdown_Launchevent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.BndEvt__Lobby_HUD_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobby_HUD_C::BndEvt__Lobby_HUD_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "BndEvt__Lobby_HUD_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.BndEvt__Lobby_HUD_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobby_HUD_C::BndEvt__Lobby_HUD_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "BndEvt__Lobby_HUD_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_HUD.Lobby_HUD_C.ExecuteUbergraph_Lobby_HUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_LaunchingGame_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_GM_C*                 K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EBlueprintResultSwitch  CallFunc_ShowInviteUI_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_HUD_C::ExecuteUbergraph_Lobby_HUD(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_CustomEvent_LaunchingGame_, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobby_GM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class EBlueprintResultSwitch CallFunc_ShowInviteUI_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_HUD_C", "ExecuteUbergraph_Lobby_HUD");

	Params::ULobby_HUD_C_ExecuteUbergraph_Lobby_HUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_LaunchingGame_ = K2Node_CustomEvent_LaunchingGame_;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ShowInviteUI_Result = CallFunc_ShowInviteUI_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


