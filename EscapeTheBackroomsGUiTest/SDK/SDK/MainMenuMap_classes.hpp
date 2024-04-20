#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x242 - 0x228)
// BlueprintGeneratedClass MainMenuMap.MainMenuMap_C
class AMainMenuMap_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Intro_C*                            IntroRef;                                          // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                  MyGameInstanceRef;                                 // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TemplateGraphic                 TempResolution;                                    // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TemplateGraphic                 TempScreenMode;                                    // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMainMenuMap_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ContinueLoadWithIntro();
	void ContinueLoadWithoutIntro();
	void ExecuteUbergraph_MainMenuMap(int32 EntryPoint, bool CallFunc_IsNoHMDMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_MainMenu_C* CallFunc_Create_ReturnValue, class UW_Intro_C* CallFunc_Create_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerController*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_EnableHMD_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_3, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsNoHMDMode_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


