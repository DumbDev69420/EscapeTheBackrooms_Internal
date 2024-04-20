#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MP_PlayerController.MP_PlayerController_C
// (Actor, PlayerController)

class UClass* AMP_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MP_PlayerController_C");

	return Clss;
}


// MP_PlayerController_C MP_PlayerController.Default__MP_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMP_PlayerController_C* AMP_PlayerController_C::GetDefaultObj()
{
	static class AMP_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMP_PlayerController_C*>(AMP_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MP_PlayerController.MP_PlayerController_C.GetUsingPushToTalk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               UsingPushToTalk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AInteractablePawn*           K2Node_DynamicCast_AsInteractable_Pawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::GetUsingPushToTalk(bool* UsingPushToTalk, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AInteractablePawn* K2Node_DynamicCast_AsInteractable_Pawn, bool K2Node_DynamicCast_bSuccess, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "GetUsingPushToTalk");

	Params::AMP_PlayerController_C_GetUsingPushToTalk_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInteractable_Pawn = K2Node_DynamicCast_AsInteractable_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_1 = K2Node_DynamicCast_AsBPCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (UsingPushToTalk != nullptr)
		*UsingPushToTalk = Parms.UsingPushToTalk;

}


// Function MP_PlayerController.MP_PlayerController_C.GetUsingRadio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               UsingRadio                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::GetUsingRadio(bool* UsingRadio, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "GetUsingRadio");

	Params::AMP_PlayerController_C_GetUsingRadio_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (UsingRadio != nullptr)
		*UsingRadio = Parms.UsingRadio;

}


// Function MP_PlayerController.MP_PlayerController_C.GetCanTalk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanTalk                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Spectator_C*             K2Node_DynamicCast_AsBP_Spectator                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::GetCanTalk(bool* CanTalk, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Spectator_C* K2Node_DynamicCast_AsBP_Spectator, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "GetCanTalk");

	Params::AMP_PlayerController_C_GetCanTalk_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Spectator = K2Node_DynamicCast_AsBP_Spectator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CanTalk != nullptr)
		*CanTalk = Parms.CanTalk;

}


// Function MP_PlayerController.MP_PlayerController_C.TogglePushToTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activated                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::TogglePushToTalk(bool Activated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "TogglePushToTalk");

	Params::AMP_PlayerController_C_TogglePushToTalk_Params Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.OpenVRSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVRCharacter_Demo_C*         K2Node_DynamicCast_AsVRCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVRCharacter_Demo_Client_C*  K2Node_DynamicCast_AsVRCharacter_Demo_Client                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::OpenVRSettings(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AVRCharacter_Demo_C* K2Node_DynamicCast_AsVRCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class AVRCharacter_Demo_Client_C* K2Node_DynamicCast_AsVRCharacter_Demo_Client, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OpenVRSettings");

	Params::AMP_PlayerController_C_OpenVRSettings_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsVRCharacter_Demo = K2Node_DynamicCast_AsVRCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVRCharacter_Demo_Client = K2Node_DynamicCast_AsVRCharacter_Demo_Client;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.InpActEvt_Talk_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::InpActEvt_Talk_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "InpActEvt_Talk_K2Node_InputActionEvent_5");

	Params::AMP_PlayerController_C_InpActEvt_Talk_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.InpActEvt_Talk_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::InpActEvt_Talk_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "InpActEvt_Talk_K2Node_InputActionEvent_4");

	Params::AMP_PlayerController_C_InpActEvt_Talk_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.InpActEvt_Settings_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::InpActEvt_Settings_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "InpActEvt_Settings_K2Node_InputActionEvent_3");

	Params::AMP_PlayerController_C_InpActEvt_Settings_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.OnFailure_C095D11342852DAE8D2D159151BDAA40
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OnFailure_C095D11342852DAE8D2D159151BDAA40()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OnFailure_C095D11342852DAE8D2D159151BDAA40");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.OnSuccess_C095D11342852DAE8D2D159151BDAA40
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OnSuccess_C095D11342852DAE8D2D159151BDAA40()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OnSuccess_C095D11342852DAE8D2D159151BDAA40");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::InpActEvt_Chat_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "InpActEvt_Chat_K2Node_InputActionEvent_2");

	Params::AMP_PlayerController_C_InpActEvt_Chat_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.OnFailure_BF5727364B76E93ECB1A5EB5C2750E7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OnFailure_BF5727364B76E93ECB1A5EB5C2750E7E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OnFailure_BF5727364B76E93ECB1A5EB5C2750E7E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.OnSuccess_BF5727364B76E93ECB1A5EB5C2750E7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OnSuccess_BF5727364B76E93ECB1A5EB5C2750E7E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OnSuccess_BF5727364B76E93ECB1A5EB5C2750E7E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.InpActEvt_PlayerList_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::InpActEvt_PlayerList_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "InpActEvt_PlayerList_K2Node_InputActionEvent_1");

	Params::AMP_PlayerController_C_InpActEvt_PlayerList_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.InpActEvt_PlayerList_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::InpActEvt_PlayerList_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "InpActEvt_PlayerList_K2Node_InputActionEvent_0");

	Params::AMP_PlayerController_C_InpActEvt_PlayerList_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.PlayNoiseAtLocation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::PlayNoiseAtLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "PlayNoiseAtLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.OC_SetupVoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OC_SetupVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OC_SetupVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<uint8>                      VoiceData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              MicLevel                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PlayerController_C::BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature(TArray<uint8>& VoiceData, float MicLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature");

	Params::AMP_PlayerController_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature_Params Parms{};

	Parms.VoiceData = VoiceData;
	Parms.MicLevel = MicLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.SRV_SendVoiceData
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                      CompressedVoiceData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bUseRadio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUnderwater                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::SRV_SendVoiceData(TArray<uint8>& CompressedVoiceData, bool bUseRadio, bool IsUnderwater)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "SRV_SendVoiceData");

	Params::AMP_PlayerController_C_SRV_SendVoiceData_Params Parms{};

	Parms.CompressedVoiceData = CompressedVoiceData;
	Parms.bUseRadio = bUseRadio;
	Parms.IsUnderwater = IsUnderwater;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.Client_RecieveVoiceData
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      Voice                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bUseRadio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUnderwater                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::Client_RecieveVoiceData(class ABPCharacter_Demo_C* Player, TArray<uint8>& Voice, bool bUseRadio, bool IsUnderwater)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "Client_RecieveVoiceData");

	Params::AMP_PlayerController_C_Client_RecieveVoiceData_Params Parms{};

	Parms.Player = Player;
	Parms.Voice = Voice;
	Parms.bUseRadio = bUseRadio;
	Parms.IsUnderwater = IsUnderwater;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.DeleteVoice
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::DeleteVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "DeleteVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.UpdatePushToTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::UpdatePushToTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "UpdatePushToTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.StartSpectating
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::StartSpectating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "StartSpectating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.OC_SetSpectating
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Spectating                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AMP_PlayerController_C::OC_SetSpectating(const class FString& Spectating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OC_SetSpectating");

	Params::AMP_PlayerController_C_OC_SetSpectating_Params Parms{};

	Parms.Spectating = Spectating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.OC_RemoveKillScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OC_RemoveKillScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OC_RemoveKillScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ToggleScoreboard
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::ToggleScoreboard(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ToggleScoreboard");

	Params::AMP_PlayerController_C_ToggleScoreboard_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.UpdateScoreboard
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::UpdateScoreboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "UpdateScoreboard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ShowLoadingScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::ShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ShowLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.HE_Subtitle
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHE_SubtitleSeq             Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::HE_Subtitle(const struct FHE_SubtitleSeq& Subtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "HE_Subtitle");

	Params::AMP_PlayerController_C_HE_Subtitle_Params Parms{};

	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.SetSpawnRotation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMP_PlayerController_C::SetSpawnRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "SetSpawnRotation");

	Params::AMP_PlayerController_C_SetSpawnRotation_Params Parms{};

	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.OC_KickedFromLobby
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OC_KickedFromLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OC_KickedFromLobby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ScoreboardDelay
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::ScoreboardDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ScoreboardDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMP_PlayerController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ReceiveEndPlay");

	Params::AMP_PlayerController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.ShowCameraFade
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::ShowCameraFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ShowCameraFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ShowEndCutscene
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::ShowEndCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ShowEndCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.ValveHint
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::ValveHint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ValveHint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.OnPlayerTravel
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::OnPlayerTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OnPlayerTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.VR_Subtitle
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHE_SubtitleSeq             Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMP_PlayerController_C::VR_Subtitle(const struct FHE_SubtitleSeq& Subtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "VR_Subtitle");

	Params::AMP_PlayerController_C_VR_Subtitle_Params Parms{};

	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.CaveHint
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMP_PlayerController_C::CaveHint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "CaveHint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MP_PlayerController.MP_PlayerController_C.OC_CompleteMission
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStructure           Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AMP_PlayerController_C::OC_CompleteMission(const struct FMissionStructure& Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "OC_CompleteMission");

	Params::AMP_PlayerController_C_OC_CompleteMission_Params Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MP_PlayerController.MP_PlayerController_C.ExecuteUbergraph_MP_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// TArray<uint8>                      K2Node_ComponentBoundEvent_VoiceData                             (ConstParm, ReferenceParm)
// float                              K2Node_ComponentBoundEvent_MicLevel                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      K2Node_CustomEvent_CompressedVoiceData                           (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bUseRadio_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsUnderwater_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      K2Node_CustomEvent_Voice                                         (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bUseRadio                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsUnderwater                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsTearingDown_isTearingDown                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanTalk_CanTalk                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InitVoice_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUsingRadio_UsingRadio                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUsingRadio_UsingRadio_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUsingPushToTalk_UsingPushToTalk                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUsingPushToTalk_UsingPushToTalk_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APlayerState*>        CallFunc_GetPlayerStateArray_ReturnValue                         (ReferenceParm)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMP_PlayerController_C*      K2Node_DynamicCast_AsMP_Player_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitleWB_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AInteractablePawn*           K2Node_DynamicCast_AsInteractable_Pawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Spectating                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMP_GameState_C*             K2Node_DynamicCast_AsMP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Spectator_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UGameEnd_UI_2_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UGameEnd_UI_2_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UGameEnd_UI_2_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_Pressed                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameEnd_UI_2_C*             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        CallFunc_GetPlayerStateArray_ReturnValue_1                       (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// class UPlayerStats_UI_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHE_SubtitleSeq             K2Node_CustomEvent_Subtitle_1                                    (HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// class AMP_GameState_C*             K2Node_DynamicCast_AsMP_Game_State_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_LoadingScreen_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTearingDown_isTearingDown_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHE_Subtitle                K2Node_MakeStruct_HE_Subtitle                                    (HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHE_Subtitle>        K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FHE_SubtitleSeq             K2Node_MakeStruct_HE_SubtitleSeq                                 (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class AMP_PlayerController_C*      K2Node_DynamicCast_AsMP_Player_Controller_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AInteractablePawn*           K2Node_DynamicCast_AsInteractable_Pawn_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMP_PlayerController_C*      K2Node_DynamicCast_AsMP_Player_Controller_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHE_SubtitleSeq             K2Node_CustomEvent_Subtitle                                      (HasGetValueTypeHash)
// struct FHE_Subtitle                CallFunc_Array_Get_Item_6                                        (HasGetValueTypeHash)
// struct FHE_Subtitle                CallFunc_Array_Get_Item_7                                        (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVRCharacter_Demo_C*         K2Node_DynamicCast_AsVRCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_SettingsPanel_Theme2_C*  CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpectator_UI_C*             CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameEnd_UI_C*               CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class USubtitleWB_C*               CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class UWidgetComponent*            CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHE_Subtitle                K2Node_MakeStruct_HE_Subtitle_1                                  (HasGetValueTypeHash)
// TArray<struct FHE_Subtitle>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHE_SubtitleSeq             K2Node_MakeStruct_HE_SubtitleSeq_1                               (HasGetValueTypeHash)
// class AMP_PlayerController_C*      K2Node_DynamicCast_AsMP_Player_Controller_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVRCharacter_Demo_C*         K2Node_DynamicCast_AsVRCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_VOIPInGame_C*             CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetComponent*            CallFunc_AddComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USubtitleWB_C*               CallFunc_Create_ReturnValue_8                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FMissionStructure           K2Node_CustomEvent_Mission                                       (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScoreboard_UI_C*            CallFunc_Create_ReturnValue_9                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)

void AMP_PlayerController_C::ExecuteUbergraph_MP_PlayerController(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_5, TArray<uint8>& K2Node_ComponentBoundEvent_VoiceData, float K2Node_ComponentBoundEvent_MicLevel, TArray<uint8>& K2Node_CustomEvent_CompressedVoiceData, bool K2Node_CustomEvent_bUseRadio_1, bool K2Node_CustomEvent_IsUnderwater_1, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, TArray<uint8>& K2Node_CustomEvent_Voice, bool K2Node_CustomEvent_bUseRadio, bool K2Node_CustomEvent_IsUnderwater, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsTearingDown_isTearingDown, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetCanTalk_CanTalk, bool CallFunc_InitVoice_ReturnValue, bool CallFunc_GetUsingRadio_UsingRadio, bool CallFunc_GetUsingRadio_UsingRadio_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetUsingPushToTalk_UsingPushToTalk, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_GetUsingPushToTalk_UsingPushToTalk_1, TArray<class APlayerState*>& CallFunc_GetPlayerStateArray_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class USubtitleWB_C* CallFunc_Create_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class AInteractablePawn* K2Node_DynamicCast_AsInteractable_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_3, const class FString& K2Node_CustomEvent_Spectating, bool CallFunc_IsInViewport_ReturnValue, bool Temp_bool_IsClosed_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess_4, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_5, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Spectator_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class UGameEnd_UI_2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UGameEnd_UI_2_C* CallFunc_Array_Get_Item_2, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_3, TArray<class UGameEnd_UI_2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, bool K2Node_CustomEvent_Pressed, class UGameEnd_UI_2_C* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_4, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, TArray<class APlayerState*>& CallFunc_GetPlayerStateArray_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, class UPlayerStats_UI_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FHE_SubtitleSeq& K2Node_CustomEvent_Subtitle_1, const struct FRotator& K2Node_CustomEvent_Rotation, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, const struct FKey& K2Node_InputActionEvent_Key_2, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State_1, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsStandalone_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_7, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsStandalone_ReturnValue_1, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_K2_IsTearingDown_isTearingDown_1, bool CallFunc_Not_PreBool_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, const struct FHE_Subtitle& K2Node_MakeStruct_HE_Subtitle, class APlayerState* CallFunc_Array_Get_Item_5, TArray<struct FHE_Subtitle>& K2Node_MakeArray_Array, const struct FHE_SubtitleSeq& K2Node_MakeStruct_HE_SubtitleSeq, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue_1, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_8, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, class AInteractablePawn* K2Node_DynamicCast_AsInteractable_Pawn_1, bool K2Node_DynamicCast_bSuccess_9, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_2, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_Array_Contains_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_11, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_3, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FHE_SubtitleSeq& K2Node_CustomEvent_Subtitle, const struct FHE_Subtitle& CallFunc_Array_Get_Item_6, const struct FHE_Subtitle& CallFunc_Array_Get_Item_7, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AVRCharacter_Demo_C* K2Node_DynamicCast_AsVRCharacter_Demo, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_IsValid_ReturnValue_10, class UWB_SettingsPanel_Theme2_C* CallFunc_Create_ReturnValue_3, class USpectator_UI_C* CallFunc_Create_ReturnValue_4, class UGameEnd_UI_C* CallFunc_Create_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USubtitleWB_C* CallFunc_Create_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class UWidgetComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, const struct FHE_Subtitle& K2Node_MakeStruct_HE_Subtitle_1, TArray<struct FHE_Subtitle>& K2Node_MakeArray_Array_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FHE_SubtitleSeq& K2Node_MakeStruct_HE_SubtitleSeq_1, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_14, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class AVRCharacter_Demo_C* K2Node_DynamicCast_AsVRCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_15, class UW_VOIPInGame_C* CallFunc_Create_ReturnValue_7, class UWidgetComponent* CallFunc_AddComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, class USubtitleWB_C* CallFunc_Create_ReturnValue_8, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FMissionStructure& K2Node_CustomEvent_Mission, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UScoreboard_UI_C* CallFunc_Create_ReturnValue_9, bool CallFunc_IsStandalone_ReturnValue_2, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MP_PlayerController_C", "ExecuteUbergraph_MP_PlayerController");

	Params::AMP_PlayerController_C_ExecuteUbergraph_MP_PlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_ComponentBoundEvent_VoiceData = K2Node_ComponentBoundEvent_VoiceData;
	Parms.K2Node_ComponentBoundEvent_MicLevel = K2Node_ComponentBoundEvent_MicLevel;
	Parms.K2Node_CustomEvent_CompressedVoiceData = K2Node_CustomEvent_CompressedVoiceData;
	Parms.K2Node_CustomEvent_bUseRadio_1 = K2Node_CustomEvent_bUseRadio_1;
	Parms.K2Node_CustomEvent_IsUnderwater_1 = K2Node_CustomEvent_IsUnderwater_1;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_Voice = K2Node_CustomEvent_Voice;
	Parms.K2Node_CustomEvent_bUseRadio = K2Node_CustomEvent_bUseRadio;
	Parms.K2Node_CustomEvent_IsUnderwater = K2Node_CustomEvent_IsUnderwater;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_IsTearingDown_isTearingDown = CallFunc_K2_IsTearingDown_isTearingDown;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCanTalk_CanTalk = CallFunc_GetCanTalk_CanTalk;
	Parms.CallFunc_InitVoice_ReturnValue = CallFunc_InitVoice_ReturnValue;
	Parms.CallFunc_GetUsingRadio_UsingRadio = CallFunc_GetUsingRadio_UsingRadio;
	Parms.CallFunc_GetUsingRadio_UsingRadio_1 = CallFunc_GetUsingRadio_UsingRadio_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUsingPushToTalk_UsingPushToTalk = CallFunc_GetUsingPushToTalk_UsingPushToTalk;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetUsingPushToTalk_UsingPushToTalk_1 = CallFunc_GetUsingPushToTalk_UsingPushToTalk_1;
	Parms.CallFunc_GetPlayerStateArray_ReturnValue = CallFunc_GetPlayerStateArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsMP_Player_Controller = K2Node_DynamicCast_AsMP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInteractable_Pawn = K2Node_DynamicCast_AsInteractable_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_1 = K2Node_DynamicCast_AsBPCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_Spectating = K2Node_CustomEvent_Spectating;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsMP_Game_State = K2Node_DynamicCast_AsMP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.K2Node_CustomEvent_Pressed = K2Node_CustomEvent_Pressed;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.CallFunc_GetPlayerStateArray_ReturnValue_1 = CallFunc_GetPlayerStateArray_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_Subtitle_1 = K2Node_CustomEvent_Subtitle_1;
	Parms.K2Node_CustomEvent_Rotation = K2Node_CustomEvent_Rotation;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue_3 = CallFunc_GetGameState_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_DynamicCast_AsMP_Game_State_1 = K2Node_DynamicCast_AsMP_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_1 = K2Node_DynamicCast_AsBP_My_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_DestroySession_ReturnValue_1 = CallFunc_DestroySession_ReturnValue_1;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_IsTearingDown_isTearingDown_1 = CallFunc_K2_IsTearingDown_isTearingDown_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_MakeStruct_HE_Subtitle = K2Node_MakeStruct_HE_Subtitle;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_HE_SubtitleSeq = K2Node_MakeStruct_HE_SubtitleSeq;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetPlayerName_ReturnValue_1 = CallFunc_GetPlayerName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMP_Player_Controller_1 = K2Node_DynamicCast_AsMP_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsInteractable_Pawn_1 = K2Node_DynamicCast_AsInteractable_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_2 = K2Node_DynamicCast_AsBPCharacter_Demo_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMP_Player_Controller_2 = K2Node_DynamicCast_AsMP_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_3 = K2Node_DynamicCast_AsBPCharacter_Demo_3;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1 = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.K2Node_CustomEvent_Subtitle = K2Node_CustomEvent_Subtitle;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_DynamicCast_AsVRCharacter_Demo = K2Node_DynamicCast_AsVRCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_MakeStruct_HE_Subtitle_1 = K2Node_MakeStruct_HE_Subtitle_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_MakeStruct_HE_SubtitleSeq_1 = K2Node_MakeStruct_HE_SubtitleSeq_1;
	Parms.K2Node_DynamicCast_AsMP_Player_Controller_3 = K2Node_DynamicCast_AsMP_Player_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsVRCharacter_Demo_1 = K2Node_DynamicCast_AsVRCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.CallFunc_AddComponentByClass_ReturnValue_1 = CallFunc_AddComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_Create_ReturnValue_8 = CallFunc_Create_ReturnValue_8;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_CustomEvent_Mission = K2Node_CustomEvent_Mission;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_2 = K2Node_DynamicCast_AsBP_My_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_9 = CallFunc_Create_ReturnValue_9;
	Parms.CallFunc_IsStandalone_ReturnValue_2 = CallFunc_IsStandalone_ReturnValue_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


