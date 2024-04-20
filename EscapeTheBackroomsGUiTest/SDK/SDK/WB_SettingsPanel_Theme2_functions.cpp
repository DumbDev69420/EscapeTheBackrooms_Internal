#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C
// (None)

class UClass* UWB_SettingsPanel_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_SettingsPanel_Theme2_C");

	return Clss;
}


// WB_SettingsPanel_Theme2_C WB_SettingsPanel_Theme2.Default__WB_SettingsPanel_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_SettingsPanel_Theme2_C* UWB_SettingsPanel_Theme2_C::GetDefaultObj()
{
	static class UWB_SettingsPanel_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_SettingsPanel_Theme2_C*>(UWB_SettingsPanel_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_ShowEventContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_ShowEventContent(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_ShowEventContent");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_ShowEventContent_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_CameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_CameraShake(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_CameraShake");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_CameraShake_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_Gamma
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Gamma                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MotionBlur_                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_Gamma(float Gamma, class FString* MotionBlur_, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_Gamma");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_Gamma_Params Parms{};

	Parms.Gamma = Gamma;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MotionBlur_ != nullptr)
		*MotionBlur_ = std::move(Parms.MotionBlur_);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_ShowGore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_ShowGore(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_ShowGore");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_ShowGore_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.LoadAudioCaptureDevice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::LoadAudioCaptureDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "LoadAudioCaptureDevice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.ChangeAudioCaptureDevice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewDevice                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bSave                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::ChangeAudioCaptureDevice(const class FString& NewDevice, bool bSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "ChangeAudioCaptureDevice");

	Params::UWB_SettingsPanel_Theme2_C_ChangeAudioCaptureDevice_Params Parms{};

	Parms.NewDevice = NewDevice;
	Parms.bSave = bSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_SmoothRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_SmoothRotation(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_SmoothRotation");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_SmoothRotation_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_PushToTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_PushToTalk(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_PushToTalk");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_PushToTalk_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UWB_SettingsPanel_Theme2_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "OnKeyDown");

	Params::UWB_SettingsPanel_Theme2_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.SetBooleanOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_OptionSwitcher_Theme2_C* Dropdown                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::SetBooleanOption(bool IsEnabled, class UWB_OptionSwitcher_Theme2_C* Dropdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "SetBooleanOption");

	Params::UWB_SettingsPanel_Theme2_C_SetBooleanOption_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.Dropdown = Dropdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_InvertMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_InvertMouse(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_InvertMouse");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_InvertMouse_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_ShowBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_ShowBody(const class FString& Option, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_ShowBody");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_ShowBody_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_VHSEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Command                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_VHSEffect(const class FString& Option, class FString* Command, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_VHSEffect");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_VHSEffect_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Command != nullptr)
		*Command = std::move(Parms.Command);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.CheckWaterSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMP_PoolRooms_C*             K2Node_DynamicCast_AsMP_Pool_Rooms                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::CheckWaterSettings(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class AMP_PoolRooms_C* K2Node_DynamicCast_AsMP_Pool_Rooms, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "CheckWaterSettings");

	Params::UWB_SettingsPanel_Theme2_C_CheckWaterSettings_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.K2Node_DynamicCast_AsMP_Pool_Rooms = K2Node_DynamicCast_AsMP_Pool_Rooms;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_MotionBlur
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MotionBlur_                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_MotionBlur(const class FString& Option, class UGameUserSettings** GameUserSettings, class FString* MotionBlur_, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_MotionBlur");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_MotionBlur_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (MotionBlur_ != nullptr)
		*MotionBlur_ = std::move(Parms.MotionBlur_);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MenuActor_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Hide(class ABP_MenuActor_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Hide");

	Params::UWB_SettingsPanel_Theme2_C_Hide_Params Parms{};

	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Save_ControlsSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SG_GameSettings_C*       SaveGameObject                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       CallFunc_LoadSettings_SaveGame                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Save_ControlsSettings(class UBP_SG_GameSettings_C* SaveGameObject, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, float CallFunc_FClamp_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Save_ControlsSettings");

	Params::UWB_SettingsPanel_Theme2_C_Save_ControlsSettings_Params Parms{};

	Parms.SaveGameObject = SaveGameObject;
	Parms.CallFunc_LoadSettings_SaveGame = CallFunc_LoadSettings_SaveGame;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Save_AudioSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AudioSettings            S_GameSettings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       SaveGameObject                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       CallFunc_LoadSettings_SaveGame                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Save_AudioSettings(const struct FS_AudioSettings& S_GameSettings, class UBP_SG_GameSettings_C* SaveGameObject, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Save_AudioSettings");

	Params::UWB_SettingsPanel_Theme2_C_Save_AudioSettings_Params Parms{};

	Parms.S_GameSettings = S_GameSettings;
	Parms.SaveGameObject = SaveGameObject;
	Parms.CallFunc_LoadSettings_SaveGame = CallFunc_LoadSettings_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_AudioQuality
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_AudioQuality(const class FString& Option, class UGameUserSettings** GameUserSettings, int32* Quality, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_AudioQuality");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_AudioQuality_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_HDR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Get_HDR(class UGameUserSettings* GameUserSettings, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_HDR");

	Params::UWB_SettingsPanel_Theme2_C_Get_HDR_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_DynamicResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDynamicResolutionEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Get_DynamicResolution(class UGameUserSettings* GameUserSettings, bool CallFunc_IsDynamicResolutionEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_DynamicResolution");

	Params::UWB_SettingsPanel_Theme2_C_Get_DynamicResolution_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_IsDynamicResolutionEnabled_ReturnValue = CallFunc_IsDynamicResolutionEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Shading_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadingQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_Shading_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetShadingQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_Shading_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_Shading_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetShadingQuality_ReturnValue = CallFunc_GetShadingQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Foliage_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_Foliage_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetFoliageQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_Foliage_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_Foliage_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_PostProcessing_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_PostProcessing_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetPostProcessingQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_PostProcessing_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_PostProcessing_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_VisualEffects_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_VisualEffects_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetVisualEffectQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_VisualEffects_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_VisualEffects_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Texture_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_Texture_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetTextureQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_Texture_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_Texture_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_AntiAliasing_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_AntiAliasing_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_AntiAliasing_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_AntiAliasing_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Shadow_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_Shadow_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetShadowQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_Shadow_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_Shadow_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_ViewDistance_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_ViewDistance_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetViewDistanceQuality_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_ViewDistance_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_ViewDistance_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_OverallScalability_Quality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Interpret_QualityINT_Quality                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Get_OverallScalability_Quality(class UGameUserSettings* GameUserSettings, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, const class FString& CallFunc_Interpret_QualityINT_Quality, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_OverallScalability_Quality");

	Params::UWB_SettingsPanel_Theme2_C_Get_OverallScalability_Quality_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_Interpret_QualityINT_Quality = CallFunc_Interpret_QualityINT_Quality;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Adjust_AllQualityLevels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Adjust_AllQualityLevels(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Adjust_AllQualityLevels");

	Params::UWB_SettingsPanel_Theme2_C_Adjust_AllQualityLevels_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_VSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Get_VSync(class UGameUserSettings* GameUserSettings, bool CallFunc_IsVSyncEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_VSync");

	Params::UWB_SettingsPanel_Theme2_C_Get_VSync_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_FrameRateLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Get_FrameRateLimit(class UGameUserSettings* GameUserSettings, float CallFunc_GetFrameRateLimit_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_FrameRateLimit");

	Params::UWB_SettingsPanel_Theme2_C_Get_FrameRateLimit_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Resolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Get_Resolution(class UGameUserSettings* GameUserSettings, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_Resolution");

	Params::UWB_SettingsPanel_Theme2_C_Get_Resolution_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_WindowMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Get_WindowMode(class UGameUserSettings* GameUserSettings, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Get_WindowMode");

	Params::UWB_SettingsPanel_Theme2_C_Get_WindowMode_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_HDR
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HDR_                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_HDR(const class FString& Option, class UGameUserSettings** GameUserSettings, bool* HDR_, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_HDR");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_HDR_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (HDR_ != nullptr)
		*HDR_ = Parms.HDR_;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_DynamicResolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DynamicResolution_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_DynamicResolution(const class FString& Option, class UGameUserSettings** GameUserSettings, bool* DynamicResolution_, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_DynamicResolution");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_DynamicResolution_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (DynamicResolution_ != nullptr)
		*DynamicResolution_ = Parms.DynamicResolution_;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_FrameRateLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FrameRateLimit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_FrameRateLimit(const class FString& Option, class UGameUserSettings** GameUserSettings, float* FrameRateLimit, bool CallFunc_EqualEqual_StriStri_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_FrameRateLimit");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_FrameRateLimit_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (FrameRateLimit != nullptr)
		*FrameRateLimit = Parms.FrameRateLimit;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_VSync
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               VSync_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_VSync(const class FString& Option, class UGameUserSettings** GameUserSettings, bool* VSync_, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_VSync");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_VSync_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (VSync_ != nullptr)
		*VSync_ = Parms.VSync_;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_Resolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   Resolution                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_Resolution(const class FString& Option, class UGameUserSettings** GameUserSettings, struct FIntPoint* Resolution, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_Resolution");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_Resolution_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (Resolution != nullptr)
		*Resolution = std::move(Parms.Resolution);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_WindowMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             WindowMode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_WindowMode(const class FString& Option, class UGameUserSettings** GameUserSettings, enum class EWindowMode* WindowMode, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_WindowMode");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_WindowMode_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (WindowMode != nullptr)
		*WindowMode = Parms.WindowMode;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_GraphicQuality
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           GameUserSettings                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Interpret_GraphicQuality(const class FString& Option, class UGameUserSettings** GameUserSettings, int32* Quality, bool K2Node_SwitchString_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "interpret_GraphicQuality");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_GraphicQuality_Params Parms{};

	Parms.Option = Option;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameUserSettings != nullptr)
		*GameUserSettings = Parms.GameUserSettings;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Interpret_QualityINT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Quality                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::Interpret_QualityINT(int32 Selection, class FString* Quality, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Interpret_QualityINT");

	Params::UWB_SettingsPanel_Theme2_C_Interpret_QualityINT_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Quality != nullptr)
		*Quality = std::move(Parms.Quality);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Retrieve_VideoSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           GameUserSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Retrieve_VideoSettings(class UGameUserSettings* GameUserSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Retrieve_VideoSettings");

	Params::UWB_SettingsPanel_Theme2_C_Retrieve_VideoSettings_Params Parms{};

	Parms.GameUserSettings = GameUserSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Retrieve_AudioSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_MotionBlur_GameUserSettings                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_MotionBlur_MotionBlur_                        (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_MotionBlur_GameUserSettings_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_MotionBlur_MotionBlur__1                      (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_MotionBlur_GameUserSettings_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_MotionBlur_MotionBlur__2                      (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_MotionBlur_GameUserSettings_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_MotionBlur_MotionBlur__3                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       K2Node_DynamicCast_AsBP_SG_Game_Settings                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_interpret_Gamma_MotionBlur_                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Retrieve_AudioSettings(float CallFunc_Conv_IntToFloat_ReturnValue, class UGameUserSettings* CallFunc_interpret_MotionBlur_GameUserSettings, const class FString& CallFunc_interpret_MotionBlur_MotionBlur_, class UGameUserSettings* CallFunc_interpret_MotionBlur_GameUserSettings_1, const class FString& CallFunc_interpret_MotionBlur_MotionBlur__1, class UGameUserSettings* CallFunc_interpret_MotionBlur_GameUserSettings_2, const class FString& CallFunc_interpret_MotionBlur_MotionBlur__2, class UGameUserSettings* CallFunc_interpret_MotionBlur_GameUserSettings_3, const class FString& CallFunc_interpret_MotionBlur_MotionBlur__3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_SG_GameSettings_C* K2Node_DynamicCast_AsBP_SG_Game_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_interpret_Gamma_MotionBlur_, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Retrieve_AudioSettings");

	Params::UWB_SettingsPanel_Theme2_C_Retrieve_AudioSettings_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_interpret_MotionBlur_GameUserSettings = CallFunc_interpret_MotionBlur_GameUserSettings;
	Parms.CallFunc_interpret_MotionBlur_MotionBlur_ = CallFunc_interpret_MotionBlur_MotionBlur_;
	Parms.CallFunc_interpret_MotionBlur_GameUserSettings_1 = CallFunc_interpret_MotionBlur_GameUserSettings_1;
	Parms.CallFunc_interpret_MotionBlur_MotionBlur__1 = CallFunc_interpret_MotionBlur_MotionBlur__1;
	Parms.CallFunc_interpret_MotionBlur_GameUserSettings_2 = CallFunc_interpret_MotionBlur_GameUserSettings_2;
	Parms.CallFunc_interpret_MotionBlur_MotionBlur__2 = CallFunc_interpret_MotionBlur_MotionBlur__2;
	Parms.CallFunc_interpret_MotionBlur_GameUserSettings_3 = CallFunc_interpret_MotionBlur_GameUserSettings_3;
	Parms.CallFunc_interpret_MotionBlur_MotionBlur__3 = CallFunc_interpret_MotionBlur_MotionBlur__3;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SG_Game_Settings = K2Node_DynamicCast_AsBP_SG_Game_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_interpret_Gamma_MotionBlur_ = CallFunc_interpret_Gamma_MotionBlur_;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Retrieve_AllSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Retrieve_AllSettings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Retrieve_AllSettings");

	Params::UWB_SettingsPanel_Theme2_C_Retrieve_AllSettings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Reset_AudioSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AudioSettings            K2Node_MakeStruct_S_AudioSettings                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::Reset_AudioSettings(const struct FS_AudioSettings& K2Node_MakeStruct_S_AudioSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Reset_AudioSettings");

	Params::UWB_SettingsPanel_Theme2_C_Reset_AudioSettings_Params Parms{};

	Parms.K2Node_MakeStruct_S_AudioSettings = K2Node_MakeStruct_S_AudioSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Switch_ActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_4                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_5                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_6                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_7                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_8                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_9                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_10                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_11                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_12                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_13                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_14                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_3                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_15                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_4                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_5                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_6                                  (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_7                                  (None)

void UWB_SettingsPanel_Theme2_C::Switch_ActiveTab(int32 ActiveIndex, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_6, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_7, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_8, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_9, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_10, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_11, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_12, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_13, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_14, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_15, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_4, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_5, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_6, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Switch_ActiveTab");

	Params::UWB_SettingsPanel_Theme2_C_Switch_ActiveTab_Params Parms{};

	Parms.ActiveIndex = ActiveIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_SlateBrush_4 = K2Node_MakeStruct_SlateBrush_4;
	Parms.K2Node_MakeStruct_SlateBrush_5 = K2Node_MakeStruct_SlateBrush_5;
	Parms.K2Node_MakeStruct_SlateBrush_6 = K2Node_MakeStruct_SlateBrush_6;
	Parms.K2Node_MakeStruct_SlateBrush_7 = K2Node_MakeStruct_SlateBrush_7;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_MakeStruct_SlateBrush_8 = K2Node_MakeStruct_SlateBrush_8;
	Parms.K2Node_MakeStruct_SlateBrush_9 = K2Node_MakeStruct_SlateBrush_9;
	Parms.K2Node_MakeStruct_SlateBrush_10 = K2Node_MakeStruct_SlateBrush_10;
	Parms.K2Node_MakeStruct_SlateBrush_11 = K2Node_MakeStruct_SlateBrush_11;
	Parms.K2Node_MakeStruct_ButtonStyle_1 = K2Node_MakeStruct_ButtonStyle_1;
	Parms.K2Node_MakeStruct_ButtonStyle_2 = K2Node_MakeStruct_ButtonStyle_2;
	Parms.K2Node_MakeStruct_SlateBrush_12 = K2Node_MakeStruct_SlateBrush_12;
	Parms.K2Node_MakeStruct_SlateBrush_13 = K2Node_MakeStruct_SlateBrush_13;
	Parms.K2Node_MakeStruct_SlateBrush_14 = K2Node_MakeStruct_SlateBrush_14;
	Parms.K2Node_MakeStruct_ButtonStyle_3 = K2Node_MakeStruct_ButtonStyle_3;
	Parms.K2Node_MakeStruct_SlateBrush_15 = K2Node_MakeStruct_SlateBrush_15;
	Parms.K2Node_MakeStruct_ButtonStyle_4 = K2Node_MakeStruct_ButtonStyle_4;
	Parms.K2Node_MakeStruct_ButtonStyle_5 = K2Node_MakeStruct_ButtonStyle_5;
	Parms.K2Node_MakeStruct_ButtonStyle_6 = K2Node_MakeStruct_ButtonStyle_6;
	Parms.K2Node_MakeStruct_ButtonStyle_7 = K2Node_MakeStruct_ButtonStyle_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.OnFailure_3AAA995949DCDD9ECCBD9CAA05373280
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::OnFailure_3AAA995949DCDD9ECCBD9CAA05373280()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "OnFailure_3AAA995949DCDD9ECCBD9CAA05373280");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.OnSuccess_3AAA995949DCDD9ECCBD9CAA05373280
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::OnSuccess_3AAA995949DCDD9ECCBD9CAA05373280()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "OnSuccess_3AAA995949DCDD9ECCBD9CAA05373280");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.OnFailure_C5C9DFA74A41B0457D99708BAAF06389
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::OnFailure_C5C9DFA74A41B0457D99708BAAF06389()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "OnFailure_C5C9DFA74A41B0457D99708BAAF06389");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.OnSuccess_C5C9DFA74A41B0457D99708BAAF06389
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::OnSuccess_C5C9DFA74A41B0457D99708BAAF06389()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "OnSuccess_C5C9DFA74A41B0457D99708BAAF06389");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "ApplySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_Quality_K2Node_ComponentBoundEvent_13_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Dropdown_Quality_K2Node_ComponentBoundEvent_13_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Dropdown_Quality_K2Node_ComponentBoundEvent_13_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_Quality_K2Node_ComponentBoundEvent_13_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_WindowMode_K2Node_ComponentBoundEvent_14_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Dropdown_WindowMode_K2Node_ComponentBoundEvent_14_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Dropdown_WindowMode_K2Node_ComponentBoundEvent_14_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_WindowMode_K2Node_ComponentBoundEvent_14_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_Resolution_K2Node_ComponentBoundEvent_15_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Dropdown_Resolution_K2Node_ComponentBoundEvent_15_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Dropdown_Resolution_K2Node_ComponentBoundEvent_15_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_Resolution_K2Node_ComponentBoundEvent_15_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_OverallQuality_K2Node_ComponentBoundEvent_17_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_OverallQuality_K2Node_ComponentBoundEvent_17_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_OverallQuality_K2Node_ComponentBoundEvent_17_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_OverallQuality_K2Node_ComponentBoundEvent_17_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ViewDistance_K2Node_ComponentBoundEvent_18_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ViewDistance_K2Node_ComponentBoundEvent_18_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ViewDistance_K2Node_ComponentBoundEvent_18_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ViewDistance_K2Node_ComponentBoundEvent_18_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ShadowQuality_K2Node_ComponentBoundEvent_19_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ShadowQuality_K2Node_ComponentBoundEvent_19_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ShadowQuality_K2Node_ComponentBoundEvent_19_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ShadowQuality_K2Node_ComponentBoundEvent_19_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Anti-Aliasing_Quality_K2Node_ComponentBoundEvent_20_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_AntiMinusAliasing_Quality_K2Node_ComponentBoundEvent_20_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Anti-Aliasing_Quality_K2Node_ComponentBoundEvent_20_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_AntiMinusAliasing_Quality_K2Node_ComponentBoundEvent_20_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Texture_Quality_1_K2Node_ComponentBoundEvent_21_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Texture_Quality_1_K2Node_ComponentBoundEvent_21_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Texture_Quality_1_K2Node_ComponentBoundEvent_21_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Texture_Quality_1_K2Node_ComponentBoundEvent_21_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_VisualEffects_Quality_K2Node_ComponentBoundEvent_22_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_VisualEffects_Quality_K2Node_ComponentBoundEvent_22_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_VisualEffects_Quality_K2Node_ComponentBoundEvent_22_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_VisualEffects_Quality_K2Node_ComponentBoundEvent_22_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_PostProcessing_Quality_K2Node_ComponentBoundEvent_23_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_PostProcessing_Quality_K2Node_ComponentBoundEvent_23_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_PostProcessing_Quality_K2Node_ComponentBoundEvent_23_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_PostProcessing_Quality_K2Node_ComponentBoundEvent_23_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Foliage_Quality_K2Node_ComponentBoundEvent_24_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Foliage_Quality_K2Node_ComponentBoundEvent_24_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Foliage_Quality_K2Node_ComponentBoundEvent_24_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Foliage_Quality_K2Node_ComponentBoundEvent_24_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Shading_Quality_K2Node_ComponentBoundEvent_25_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Shading_Quality_K2Node_ComponentBoundEvent_25_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Shading_Quality_K2Node_ComponentBoundEvent_25_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Shading_Quality_K2Node_ComponentBoundEvent_25_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_DynamicResolution_K2Node_ComponentBoundEvent_26_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Dropdown_DynamicResolution_K2Node_ComponentBoundEvent_26_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Dropdown_DynamicResolution_K2Node_ComponentBoundEvent_26_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_DynamicResolution_K2Node_ComponentBoundEvent_26_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_HDR_K2Node_ComponentBoundEvent_27_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Dropdown_HDR_K2Node_ComponentBoundEvent_27_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Dropdown_HDR_K2Node_ComponentBoundEvent_27_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_HDR_K2Node_ComponentBoundEvent_27_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Button_AutoSet_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Button_AutoSet_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Button_AutoSet_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_Vsync_K2Node_ComponentBoundEvent_29_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Dropdown_Vsync_K2Node_ComponentBoundEvent_29_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Dropdown_Vsync_K2Node_ComponentBoundEvent_29_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_Vsync_K2Node_ComponentBoundEvent_29_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Audio_Quality_K2Node_ComponentBoundEvent_32_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Audio_Quality_K2Node_ComponentBoundEvent_32_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Audio_Quality_K2Node_ComponentBoundEvent_32_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Audio_Quality_K2Node_ComponentBoundEvent_32_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_33_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_33_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_33_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_34_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_34_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_34_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_35_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_35_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_35_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Close_Theme2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Close_Theme2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Close_Theme2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Apply_Theme2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Apply_Theme2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Apply_Theme2_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_RestoreDefaults_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_RestoreDefaults_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_RestoreDefaults_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Video_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Video_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Video_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Audio_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Audio_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Audio_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Controls_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Controls_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Controls_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetSettings_Theme2_K2Node_ComponentBoundEvent_0_OnClicked_Confirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetSettings_Theme2_K2Node_ComponentBoundEvent_0_OnClicked_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetSettings_Theme2_K2Node_ComponentBoundEvent_0_OnClicked_Confirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetSettings_Theme2_K2Node_ComponentBoundEvent_1_OnClicked_Decline__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetSettings_Theme2_K2Node_ComponentBoundEvent_1_OnClicked_Decline__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetSettings_Theme2_K2Node_ComponentBoundEvent_1_OnClicked_Decline__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_SaveSettings_Theme2_K2Node_ComponentBoundEvent_2_OnClicked_Confirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_SaveSettings_Theme2_K2Node_ComponentBoundEvent_2_OnClicked_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_SaveSettings_Theme2_K2Node_ComponentBoundEvent_2_OnClicked_Confirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_SaveSettings_Theme2_K2Node_ComponentBoundEvent_3_OnClicked_Decline__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_SaveSettings_Theme2_K2Node_ComponentBoundEvent_3_OnClicked_Decline__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_SaveSettings_Theme2_K2Node_ComponentBoundEvent_3_OnClicked_Decline__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_LeaveGame_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_LeaveGame_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_LeaveGame_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_44_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_44_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_44_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_44_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_45_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_45_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_45_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_11_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_11_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_11_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_13_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_13_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_13_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_31_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_31_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_31_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Dropdown_MotionBlur_K2Node_ComponentBoundEvent_36_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Dropdown_MotionBlur_K2Node_ComponentBoundEvent_36_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Dropdown_MotionBlur_K2Node_ComponentBoundEvent_36_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Dropdown_MotionBlur_K2Node_ComponentBoundEvent_36_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_37_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_37_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_37_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_K2Node_ComponentBoundEvent_43_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_K2Node_ComponentBoundEvent_43_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_K2Node_ComponentBoundEvent_43_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_K2Node_ComponentBoundEvent_43_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Controls_1_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Controls_1_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_Sidebar_Theme2_Controls_1_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_2_K2Node_ComponentBoundEvent_49_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_2_K2Node_ComponentBoundEvent_49_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_2_K2Node_ComponentBoundEvent_49_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_2_K2Node_ComponentBoundEvent_49_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Button_RestartGame_C_0_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Button_RestartGame_C_0_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Button_RestartGame_C_0_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.CloseSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::CloseSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "CloseSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.ForceClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "ForceClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_PushToTalk_K2Node_ComponentBoundEvent_51_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_PushToTalk_K2Node_ComponentBoundEvent_51_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_PushToTalk_K2Node_ComponentBoundEvent_51_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_PushToTalk_K2Node_ComponentBoundEvent_51_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_1_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_1_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_1_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_1_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_EntityVolume_K2Node_ComponentBoundEvent_54_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Slider_EntityVolume_K2Node_ComponentBoundEvent_54_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Slider_EntityVolume_K2Node_ComponentBoundEvent_54_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_55_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_55_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_55_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetAchievements_Theme2_K2Node_ComponentBoundEvent_58_OnClicked_Confirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetAchievements_Theme2_K2Node_ComponentBoundEvent_58_OnClicked_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetAchievements_Theme2_K2Node_ComponentBoundEvent_58_OnClicked_Confirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetAchievements_Theme2_K2Node_ComponentBoundEvent_59_OnClicked_Decline__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetAchievements_Theme2_K2Node_ComponentBoundEvent_59_OnClicked_Decline__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Confirmation_PopUp_ResetAchievements_Theme2_K2Node_ComponentBoundEvent_59_OnClicked_Decline__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_3_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_3_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_3_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_SmoothRotation_K2Node_ComponentBoundEvent_38_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_SmoothRotation_K2Node_ComponentBoundEvent_38_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_SmoothRotation_K2Node_ComponentBoundEvent_38_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_SmoothRotation_K2Node_ComponentBoundEvent_38_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_57_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Gamma                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_57_OnValueChanged__DelegateSignature(float Gamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_57_OnValueChanged__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_57_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Gamma = Gamma;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_60_OnMouseCaptureEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_60_OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_60_OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_K2Node_ComponentBoundEvent_61_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_K2Node_ComponentBoundEvent_61_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_K2Node_ComponentBoundEvent_61_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_K2Node_ComponentBoundEvent_61_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_EventContent_K2Node_ComponentBoundEvent_63_OnOptionSwitched__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SettingsPanel_Theme2_C::BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_EventContent_K2Node_ComponentBoundEvent_63_OnOptionSwitched__DelegateSignature(const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_EventContent_K2Node_ComponentBoundEvent_63_OnOptionSwitched__DelegateSignature");

	Params::UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_EventContent_K2Node_ComponentBoundEvent_63_OnOptionSwitched__DelegateSignature_Params Parms{};

	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.ExecuteUbergraph_WB_SettingsPanel_Theme2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_24                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_23                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_FrameRateLimit_GameUserSettings               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_interpret_FrameRateLimit_FrameRateLimit                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_WindowMode_GameUserSettings                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_interpret_WindowMode_WindowMode                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_22                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_Resolution_GameUserSettings                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_interpret_Resolution_Resolution                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_21                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_20                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_19                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_18                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_17                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_16                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_15                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_14                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_13                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_12                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_GraphicQuality_GameUserSettings_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_GraphicQuality_Quality_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_DynamicResolution_GameUserSettings            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_interpret_DynamicResolution_DynamicResolution_          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_11                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_HDR_GameUserSettings                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_interpret_HDR_HDR_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_10                     (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_VSync_GameUserSettings                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_interpret_VSync_VSync_                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Volume_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_9                      (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_AudioQuality_GameUserSettings                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_interpret_AudioQuality_Quality                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Volume_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_8                      (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_interpret_MotionBlur_GameUserSettings                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_MotionBlur_MotionBlur_                        (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_7                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_6                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_5                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_VHSEffect_Command                             (ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMP_GameMode_C*              K2Node_DynamicCast_AsMP_Game_Mode                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_4                      (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioSettings            K2Node_MakeStruct_S_AudioSettings                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFancyGameInstance*          K2Node_DynamicCast_AsFancy_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MenuActor_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_LobbyActor_C*            CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_3                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVRCharacter_Demo_Client_C*  K2Node_DynamicCast_AsVRCharacter_Demo_Client                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVRCharacter_Demo_C*         K2Node_DynamicCast_AsVRCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class ABP_Ocean_Manager_C*         CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Gamma                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_2                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_interpret_Gamma_MotionBlur_                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption_1                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedOption                        (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EventItem_C>K2Node_DynamicCast_AsBPI_Event_Item                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsPanel_Theme2_C::ExecuteUbergraph_WB_SettingsPanel_Theme2(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, const class FString& K2Node_ComponentBoundEvent_SelectedOption_24, const class FString& K2Node_ComponentBoundEvent_SelectedOption_23, class UGameUserSettings* CallFunc_interpret_FrameRateLimit_GameUserSettings, float CallFunc_interpret_FrameRateLimit_FrameRateLimit, class UGameUserSettings* CallFunc_interpret_WindowMode_GameUserSettings, enum class EWindowMode CallFunc_interpret_WindowMode_WindowMode, const class FString& K2Node_ComponentBoundEvent_SelectedOption_22, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, class UGameUserSettings* CallFunc_interpret_Resolution_GameUserSettings, const struct FIntPoint& CallFunc_interpret_Resolution_Resolution, const class FString& K2Node_ComponentBoundEvent_SelectedOption_21, const class FString& K2Node_ComponentBoundEvent_SelectedOption_20, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings, int32 CallFunc_interpret_GraphicQuality_Quality, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_1, int32 CallFunc_interpret_GraphicQuality_Quality_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption_19, const class FString& K2Node_ComponentBoundEvent_SelectedOption_18, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_2, int32 CallFunc_interpret_GraphicQuality_Quality_2, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_3, int32 CallFunc_interpret_GraphicQuality_Quality_3, const class FString& K2Node_ComponentBoundEvent_SelectedOption_17, const class FString& K2Node_ComponentBoundEvent_SelectedOption_16, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_4, int32 CallFunc_interpret_GraphicQuality_Quality_4, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_5, int32 CallFunc_interpret_GraphicQuality_Quality_5, const class FString& K2Node_ComponentBoundEvent_SelectedOption_15, const class FString& K2Node_ComponentBoundEvent_SelectedOption_14, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_6, int32 CallFunc_interpret_GraphicQuality_Quality_6, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_7, int32 CallFunc_interpret_GraphicQuality_Quality_7, const class FString& K2Node_ComponentBoundEvent_SelectedOption_13, const class FString& K2Node_ComponentBoundEvent_SelectedOption_12, class UGameUserSettings* CallFunc_interpret_GraphicQuality_GameUserSettings_8, int32 CallFunc_interpret_GraphicQuality_Quality_8, class UGameUserSettings* CallFunc_interpret_DynamicResolution_GameUserSettings, bool CallFunc_interpret_DynamicResolution_DynamicResolution_, const class FString& K2Node_ComponentBoundEvent_SelectedOption_11, class UGameUserSettings* CallFunc_interpret_HDR_GameUserSettings, bool CallFunc_interpret_HDR_HDR_, const class FString& K2Node_ComponentBoundEvent_SelectedOption_10, class UGameUserSettings* CallFunc_interpret_VSync_GameUserSettings, bool CallFunc_interpret_VSync_VSync_, float K2Node_ComponentBoundEvent_Volume_9, float K2Node_ComponentBoundEvent_Volume_8, float K2Node_ComponentBoundEvent_Volume_7, const class FString& K2Node_ComponentBoundEvent_SelectedOption_9, class UGameUserSettings* CallFunc_interpret_AudioQuality_GameUserSettings, int32 CallFunc_interpret_AudioQuality_Quality, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, float K2Node_ComponentBoundEvent_Volume_6, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, bool CallFunc_IsStandalone_ReturnValue_1, float K2Node_ComponentBoundEvent_Volume_5, float K2Node_ComponentBoundEvent_Volume_4, float K2Node_ComponentBoundEvent_Volume_3, const class FString& K2Node_ComponentBoundEvent_SelectedOption_8, class UGameUserSettings* CallFunc_interpret_MotionBlur_GameUserSettings, const class FString& CallFunc_interpret_MotionBlur_MotionBlur_, float K2Node_ComponentBoundEvent_Volume_2, const class FString& K2Node_ComponentBoundEvent_SelectedOption_7, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedOption_6, const class FString& K2Node_ComponentBoundEvent_SelectedOption_5, const class FString& CallFunc_interpret_VHSEffect_Command, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMP_GameMode_C* K2Node_DynamicCast_AsMP_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsStandalone_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption_4, float K2Node_ComponentBoundEvent_Volume_1, const struct FS_AudioSettings& K2Node_MakeStruct_S_AudioSettings, float K2Node_ComponentBoundEvent_Volume, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UFancyGameInstance* K2Node_DynamicCast_AsFancy_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, class ABP_MenuActor_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_LobbyActor_C* CallFunc_GetActorOfClass_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption_3, bool CallFunc_IsValid_ReturnValue_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AVRCharacter_Demo_Client_C* K2Node_DynamicCast_AsVRCharacter_Demo_Client, bool K2Node_DynamicCast_bSuccess_4, class AVRCharacter_Demo_C* K2Node_DynamicCast_AsVRCharacter_Demo, bool K2Node_DynamicCast_bSuccess_5, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class ABP_Ocean_Manager_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_ComponentBoundEvent_Gamma, const class FString& K2Node_ComponentBoundEvent_SelectedOption_2, const class FString& CallFunc_interpret_Gamma_MotionBlur_, const class FString& K2Node_ComponentBoundEvent_SelectedOption_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_6, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_EventItem_C> K2Node_DynamicCast_AsBPI_Event_Item, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsPanel_Theme2_C", "ExecuteUbergraph_WB_SettingsPanel_Theme2");

	Params::UWB_SettingsPanel_Theme2_C_ExecuteUbergraph_WB_SettingsPanel_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_24 = K2Node_ComponentBoundEvent_SelectedOption_24;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_23 = K2Node_ComponentBoundEvent_SelectedOption_23;
	Parms.CallFunc_interpret_FrameRateLimit_GameUserSettings = CallFunc_interpret_FrameRateLimit_GameUserSettings;
	Parms.CallFunc_interpret_FrameRateLimit_FrameRateLimit = CallFunc_interpret_FrameRateLimit_FrameRateLimit;
	Parms.CallFunc_interpret_WindowMode_GameUserSettings = CallFunc_interpret_WindowMode_GameUserSettings;
	Parms.CallFunc_interpret_WindowMode_WindowMode = CallFunc_interpret_WindowMode_WindowMode;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_22 = K2Node_ComponentBoundEvent_SelectedOption_22;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_interpret_Resolution_GameUserSettings = CallFunc_interpret_Resolution_GameUserSettings;
	Parms.CallFunc_interpret_Resolution_Resolution = CallFunc_interpret_Resolution_Resolution;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_21 = K2Node_ComponentBoundEvent_SelectedOption_21;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_20 = K2Node_ComponentBoundEvent_SelectedOption_20;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings = CallFunc_interpret_GraphicQuality_GameUserSettings;
	Parms.CallFunc_interpret_GraphicQuality_Quality = CallFunc_interpret_GraphicQuality_Quality;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_1 = CallFunc_interpret_GraphicQuality_GameUserSettings_1;
	Parms.CallFunc_interpret_GraphicQuality_Quality_1 = CallFunc_interpret_GraphicQuality_Quality_1;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_19 = K2Node_ComponentBoundEvent_SelectedOption_19;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_18 = K2Node_ComponentBoundEvent_SelectedOption_18;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_2 = CallFunc_interpret_GraphicQuality_GameUserSettings_2;
	Parms.CallFunc_interpret_GraphicQuality_Quality_2 = CallFunc_interpret_GraphicQuality_Quality_2;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_3 = CallFunc_interpret_GraphicQuality_GameUserSettings_3;
	Parms.CallFunc_interpret_GraphicQuality_Quality_3 = CallFunc_interpret_GraphicQuality_Quality_3;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_17 = K2Node_ComponentBoundEvent_SelectedOption_17;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_16 = K2Node_ComponentBoundEvent_SelectedOption_16;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_4 = CallFunc_interpret_GraphicQuality_GameUserSettings_4;
	Parms.CallFunc_interpret_GraphicQuality_Quality_4 = CallFunc_interpret_GraphicQuality_Quality_4;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_5 = CallFunc_interpret_GraphicQuality_GameUserSettings_5;
	Parms.CallFunc_interpret_GraphicQuality_Quality_5 = CallFunc_interpret_GraphicQuality_Quality_5;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_15 = K2Node_ComponentBoundEvent_SelectedOption_15;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_14 = K2Node_ComponentBoundEvent_SelectedOption_14;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_6 = CallFunc_interpret_GraphicQuality_GameUserSettings_6;
	Parms.CallFunc_interpret_GraphicQuality_Quality_6 = CallFunc_interpret_GraphicQuality_Quality_6;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_7 = CallFunc_interpret_GraphicQuality_GameUserSettings_7;
	Parms.CallFunc_interpret_GraphicQuality_Quality_7 = CallFunc_interpret_GraphicQuality_Quality_7;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_13 = K2Node_ComponentBoundEvent_SelectedOption_13;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_12 = K2Node_ComponentBoundEvent_SelectedOption_12;
	Parms.CallFunc_interpret_GraphicQuality_GameUserSettings_8 = CallFunc_interpret_GraphicQuality_GameUserSettings_8;
	Parms.CallFunc_interpret_GraphicQuality_Quality_8 = CallFunc_interpret_GraphicQuality_Quality_8;
	Parms.CallFunc_interpret_DynamicResolution_GameUserSettings = CallFunc_interpret_DynamicResolution_GameUserSettings;
	Parms.CallFunc_interpret_DynamicResolution_DynamicResolution_ = CallFunc_interpret_DynamicResolution_DynamicResolution_;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_11 = K2Node_ComponentBoundEvent_SelectedOption_11;
	Parms.CallFunc_interpret_HDR_GameUserSettings = CallFunc_interpret_HDR_GameUserSettings;
	Parms.CallFunc_interpret_HDR_HDR_ = CallFunc_interpret_HDR_HDR_;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_10 = K2Node_ComponentBoundEvent_SelectedOption_10;
	Parms.CallFunc_interpret_VSync_GameUserSettings = CallFunc_interpret_VSync_GameUserSettings;
	Parms.CallFunc_interpret_VSync_VSync_ = CallFunc_interpret_VSync_VSync_;
	Parms.K2Node_ComponentBoundEvent_Volume_9 = K2Node_ComponentBoundEvent_Volume_9;
	Parms.K2Node_ComponentBoundEvent_Volume_8 = K2Node_ComponentBoundEvent_Volume_8;
	Parms.K2Node_ComponentBoundEvent_Volume_7 = K2Node_ComponentBoundEvent_Volume_7;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_9 = K2Node_ComponentBoundEvent_SelectedOption_9;
	Parms.CallFunc_interpret_AudioQuality_GameUserSettings = CallFunc_interpret_AudioQuality_GameUserSettings;
	Parms.CallFunc_interpret_AudioQuality_Quality = CallFunc_interpret_AudioQuality_Quality;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Volume_6 = K2Node_ComponentBoundEvent_Volume_6;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.CallFunc_IsStandalone_ReturnValue_1 = CallFunc_IsStandalone_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Volume_5 = K2Node_ComponentBoundEvent_Volume_5;
	Parms.K2Node_ComponentBoundEvent_Volume_4 = K2Node_ComponentBoundEvent_Volume_4;
	Parms.K2Node_ComponentBoundEvent_Volume_3 = K2Node_ComponentBoundEvent_Volume_3;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_8 = K2Node_ComponentBoundEvent_SelectedOption_8;
	Parms.CallFunc_interpret_MotionBlur_GameUserSettings = CallFunc_interpret_MotionBlur_GameUserSettings;
	Parms.CallFunc_interpret_MotionBlur_MotionBlur_ = CallFunc_interpret_MotionBlur_MotionBlur_;
	Parms.K2Node_ComponentBoundEvent_Volume_2 = K2Node_ComponentBoundEvent_Volume_2;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_7 = K2Node_ComponentBoundEvent_SelectedOption_7;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_6 = K2Node_ComponentBoundEvent_SelectedOption_6;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_5 = K2Node_ComponentBoundEvent_SelectedOption_5;
	Parms.CallFunc_interpret_VHSEffect_Command = CallFunc_interpret_VHSEffect_Command;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMP_Game_Mode = K2Node_DynamicCast_AsMP_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue_2 = CallFunc_IsStandalone_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_1 = K2Node_DynamicCast_AsBP_My_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_4 = K2Node_ComponentBoundEvent_SelectedOption_4;
	Parms.K2Node_ComponentBoundEvent_Volume_1 = K2Node_ComponentBoundEvent_Volume_1;
	Parms.K2Node_MakeStruct_S_AudioSettings = K2Node_MakeStruct_S_AudioSettings;
	Parms.K2Node_ComponentBoundEvent_Volume = K2Node_ComponentBoundEvent_Volume;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_CacheAchievements_ReturnValue = CallFunc_CacheAchievements_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFancy_Game_Instance = K2Node_DynamicCast_AsFancy_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1 = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_3 = K2Node_ComponentBoundEvent_SelectedOption_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsVRCharacter_Demo_Client = K2Node_DynamicCast_AsVRCharacter_Demo_Client;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsVRCharacter_Demo = K2Node_DynamicCast_AsVRCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Gamma = K2Node_ComponentBoundEvent_Gamma;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_2 = K2Node_ComponentBoundEvent_SelectedOption_2;
	Parms.CallFunc_interpret_Gamma_MotionBlur_ = CallFunc_interpret_Gamma_MotionBlur_;
	Parms.K2Node_ComponentBoundEvent_SelectedOption_1 = K2Node_ComponentBoundEvent_SelectedOption_1;
	Parms.K2Node_ComponentBoundEvent_SelectedOption = K2Node_ComponentBoundEvent_SelectedOption;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance_2 = K2Node_DynamicCast_AsBP_My_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Event_Item = K2Node_DynamicCast_AsBPI_Event_Item;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


