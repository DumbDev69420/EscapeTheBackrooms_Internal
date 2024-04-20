#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2D9 - 0x280)
// BlueprintGeneratedClass BP_Spectator.BP_Spectator_C
class ABP_Spectator_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetInteractionComponent*           WidgetInteraction;                                 // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetInteractionComponent*           WidgetInteraction1;                                // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*            R_MotionController;                                // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*            L_MotionController;                                // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       MotionControllers;                                 // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget;                                            // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        SpectatingIndex;                                   // 0x2C8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2504[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABPCharacter_Demo_C*                   Target;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSwitch;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Spectator_C* GetDefaultObj();

	void ToggleWidgetInteraction(bool Enable, bool CallFunc_Not_PreBool_ReturnValue);
	void SetupWidget(bool DesiredSize, float Scale, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue);
	void SpectateIndex(int32 SpectateIndex, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue);
	void SpectateNext(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SpectatePrevious(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AMP_GameState_C* K2Node_DynamicCast_AsMP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable, class ABPCharacter_Demo_C* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetPlayerName_ReturnValue_1);
	void InpActEvt_Secondary_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Settings_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
	void SpectateNextPlayer();
	void SpectatePreviousPlayer();
	void UpdateSpectating(const class FString& Spectating);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Spectator(int32 EntryPoint, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, const class FString& K2Node_CustomEvent_Spectating, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, TArray<class UGameEnd_UI_2_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UGameEnd_UI_2_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class UShocked_UI_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, const struct FKey& K2Node_InputActionEvent_Key, class UShocked_UI_C* CallFunc_Array_Get_Item_1, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue);
};

}


