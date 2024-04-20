#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_FL_GameSettings.BP_FL_GameSettings_C
class UBP_FL_GameSettings_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_FL_GameSettings_C* GetDefaultObj();

	void LoadSettings(class UObject* __WorldContext, class UBP_SG_GameSettings_C** SaveGame, const class FString& GameSettings_SlotName, class UBP_SG_GameSettings_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class UBP_SG_GameSettings_C* K2Node_DynamicCast_AsBP_SG_Game_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void SetHasSeenVHS(class UObject* __WorldContext, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, bool CallFunc_SaveGameToSlot_ReturnValue);
	void Load_ControlSettings(class UObject* __WorldContext, float* Sensitivity, bool* InvertMouse, enum class E_CameraSetting* CameraSetting, bool* ShowBody, bool* UsingPushToTalk, int32* FOV, bool* SmoothRotation, bool* HideGore, float* Gamma, bool* CameraShake, bool* ShowEventContent, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, float CallFunc_FClamp_ReturnValue);
	void Set_AudioSettings(class UObject* __WorldContext, const class FString& GameSettings_SlotName, class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame);
};

}


