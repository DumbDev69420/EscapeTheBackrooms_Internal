#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lobby_Menu.Lobby_Menu_C
// (None)

class UClass* ULobby_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_Menu_C");

	return Clss;
}


// Lobby_Menu_C Lobby_Menu.Default__Lobby_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobby_Menu_C* ULobby_Menu_C::GetDefaultObj()
{
	static class ULobby_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobby_Menu_C*>(ULobby_Menu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_Menu.Lobby_Menu_C.Init_ReadyUpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Menu_C::Init_ReadyUpButton(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Init_ReadyUpButton");

	Params::ULobby_Menu_C_Init_ReadyUpButton_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Menu.Lobby_Menu_C.Set Ready Up Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               WarningState_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideButton_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LockButton_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Pressed_Image                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     Hovered_Image                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     Normal_Image                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Menu_C::Set_Ready_Up_Button(class FText Text, bool WarningState_, bool HideButton_, bool LockButton_, class UObject* Pressed_Image, class UObject* Hovered_Image, class UObject* Normal_Image, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Set Ready Up Button");

	Params::ULobby_Menu_C_Set_Ready_Up_Button_Params Parms{};

	Parms.Text = Text;
	Parms.WarningState_ = WarningState_;
	Parms.HideButton_ = HideButton_;
	Parms.LockButton_ = LockButton_;
	Parms.Pressed_Image = Pressed_Image;
	Parms.Hovered_Image = Hovered_Image;
	Parms.Normal_Image = Normal_Image;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Menu.Lobby_Menu_C.Client_Toggle_ReadyUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_Menu_C::Client_Toggle_ReadyUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Client_Toggle_ReadyUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Menu.Lobby_Menu_C.Server_Toggle_Launchevent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Menu_C::Server_Toggle_Launchevent(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Server_Toggle_Launchevent");

	Params::ULobby_Menu_C_Server_Toggle_Launchevent_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Menu.Lobby_Menu_C.Init_Client_ReadUpBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_Menu_C::Init_Client_ReadUpBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Init_Client_ReadUpBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Menu.Lobby_Menu_C.Init_Server_ReadyUpBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_Menu_C::Init_Server_ReadyUpBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Init_Server_ReadyUpBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Menu.Lobby_Menu_C.Init_Casts
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

void ULobby_Menu_C::Init_Casts(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ALobbyPS_C* K2Node_DynamicCast_AsLobby_PS, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Init_Casts");

	Params::ULobby_Menu_C_Init_Casts_Params Parms{};

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


// Function Lobby_Menu.Lobby_Menu_C.BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_0_OnSwitched_Save__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULobby_Menu_C::BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_0_OnSwitched_Save__DelegateSignature(const class FString& SaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_0_OnSwitched_Save__DelegateSignature");

	Params::ULobby_Menu_C_BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_0_OnSwitched_Save__DelegateSignature_Params Parms{};

	Parms.SaveName = SaveName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Menu.Lobby_Menu_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_Menu_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Menu.Lobby_Menu_C.BndEvt__Lobby_Menu_ReadyUpBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULobby_Menu_C::BndEvt__Lobby_Menu_ReadyUpBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "BndEvt__Lobby_Menu_ReadyUpBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Menu.Lobby_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobby_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Menu.Lobby_Menu_C.BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_1_OnSwitched_Difficulty__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_Difficulty            Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobby_Menu_C::BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_1_OnSwitched_Difficulty__DelegateSignature(enum class E_Difficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_1_OnSwitched_Difficulty__DelegateSignature");

	Params::ULobby_Menu_C_BndEvt__Lobby_Menu_Lobby_MapSelection_K2Node_ComponentBoundEvent_1_OnSwitched_Difficulty__DelegateSignature_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Menu.Lobby_Menu_C.ExecuteUbergraph_Lobby_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSystemTimeSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SaveName                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckName_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Difficulty            K2Node_ComponentBoundEvent_Difficulty                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Difficulty            CallFunc_Get_Difficulty_Difficulty                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Create_New_Slot_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobby_Menu_C::ExecuteUbergraph_Lobby_Menu(int32 EntryPoint, const struct FDateTime& CallFunc_Now_ReturnValue, int32 CallFunc_GetSystemTimeSeconds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const class FString& K2Node_ComponentBoundEvent_SaveName, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_CheckName_IsValid, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, enum class E_Difficulty K2Node_ComponentBoundEvent_Difficulty, enum class E_Difficulty CallFunc_Get_Difficulty_Difficulty, bool CallFunc_BooleanAND_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Create_New_Slot_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Menu_C", "ExecuteUbergraph_Lobby_Menu");

	Params::ULobby_Menu_C_ExecuteUbergraph_Lobby_Menu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_GetSystemTimeSeconds_ReturnValue = CallFunc_GetSystemTimeSeconds_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_ComponentBoundEvent_SaveName = K2Node_ComponentBoundEvent_SaveName;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_CheckName_IsValid = CallFunc_CheckName_IsValid;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Difficulty = K2Node_ComponentBoundEvent_Difficulty;
	Parms.CallFunc_Get_Difficulty_Difficulty = CallFunc_Get_Difficulty_Difficulty;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_1 = K2Node_DynamicCast_AsBP_My_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Create_New_Slot_Success = CallFunc_Create_New_Slot_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


