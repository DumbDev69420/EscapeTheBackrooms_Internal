#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FL_GameSettings.BP_FL_GameSettings_C
// (None)

class UClass* UBP_FL_GameSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FL_GameSettings_C");

	return Clss;
}


// BP_FL_GameSettings_C BP_FL_GameSettings.Default__BP_FL_GameSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FL_GameSettings_C* UBP_FL_GameSettings_C::GetDefaultObj()
{
	static class UBP_FL_GameSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FL_GameSettings_C*>(UBP_FL_GameSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FL_GameSettings.BP_FL_GameSettings_C.LoadSettings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       SaveGame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      GameSettings_SlotName                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_SG_GameSettings_C*       K2Node_DynamicCast_AsBP_SG_Game_Settings                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FL_GameSettings_C::LoadSettings(class UObject* __WorldContext, class UBP_SG_GameSettings_C** SaveGame, const class FString& GameSettings_SlotName, class UBP_SG_GameSettings_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class UBP_SG_GameSettings_C* K2Node_DynamicCast_AsBP_SG_Game_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_GameSettings_C", "LoadSettings");

	Params::UBP_FL_GameSettings_C_LoadSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.GameSettings_SlotName = GameSettings_SlotName;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SG_Game_Settings = K2Node_DynamicCast_AsBP_SG_Game_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_FL_GameSettings.BP_FL_GameSettings_C.SetHasSeenVHS
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       CallFunc_LoadSettings_SaveGame                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FL_GameSettings_C::SetHasSeenVHS(class UObject* __WorldContext, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_GameSettings_C", "SetHasSeenVHS");

	Params::UBP_FL_GameSettings_C_SetHasSeenVHS_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadSettings_SaveGame = CallFunc_LoadSettings_SaveGame;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FL_GameSettings.BP_FL_GameSettings_C.Load_ControlSettings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Sensitivity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvertMouse                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CameraSetting         CameraSetting                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowBody                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UsingPushToTalk                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SmoothRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideGore                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Gamma                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CameraShake                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowEventContent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_SG_GameSettings_C*       CallFunc_LoadSettings_SaveGame                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FL_GameSettings_C::Load_ControlSettings(class UObject* __WorldContext, float* Sensitivity, bool* InvertMouse, enum class E_CameraSetting* CameraSetting, bool* ShowBody, bool* UsingPushToTalk, int32* FOV, bool* SmoothRotation, bool* HideGore, float* Gamma, bool* CameraShake, bool* ShowEventContent, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_GameSettings_C", "Load_ControlSettings");

	Params::UBP_FL_GameSettings_C_Load_ControlSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadSettings_SaveGame = CallFunc_LoadSettings_SaveGame;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sensitivity != nullptr)
		*Sensitivity = Parms.Sensitivity;

	if (InvertMouse != nullptr)
		*InvertMouse = Parms.InvertMouse;

	if (CameraSetting != nullptr)
		*CameraSetting = Parms.CameraSetting;

	if (ShowBody != nullptr)
		*ShowBody = Parms.ShowBody;

	if (UsingPushToTalk != nullptr)
		*UsingPushToTalk = Parms.UsingPushToTalk;

	if (FOV != nullptr)
		*FOV = Parms.FOV;

	if (SmoothRotation != nullptr)
		*SmoothRotation = Parms.SmoothRotation;

	if (HideGore != nullptr)
		*HideGore = Parms.HideGore;

	if (Gamma != nullptr)
		*Gamma = Parms.Gamma;

	if (CameraShake != nullptr)
		*CameraShake = Parms.CameraShake;

	if (ShowEventContent != nullptr)
		*ShowEventContent = Parms.ShowEventContent;

}


// Function BP_FL_GameSettings.BP_FL_GameSettings_C.Set_AudioSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      GameSettings_SlotName                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SG_GameSettings_C*       CallFunc_LoadSettings_SaveGame                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FL_GameSettings_C::Set_AudioSettings(class UObject* __WorldContext, const class FString& GameSettings_SlotName, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FL_GameSettings_C", "Set_AudioSettings");

	Params::UBP_FL_GameSettings_C_Set_AudioSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.GameSettings_SlotName = GameSettings_SlotName;
	Parms.CallFunc_LoadSettings_SaveGame = CallFunc_LoadSettings_SaveGame;

	UObject::ProcessEvent(Func, &Parms);

}

}


