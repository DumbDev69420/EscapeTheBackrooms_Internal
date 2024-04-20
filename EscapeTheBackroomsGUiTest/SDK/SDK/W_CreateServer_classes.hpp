#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x2FC - 0x260)
// WidgetBlueprintGeneratedClass W_CreateServer.W_CreateServer_C
class UW_CreateServer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_No;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Yes;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_Private;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_Name;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Lan;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_NoFocus;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SliderFocus;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_YesFocus;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_MaxPlayers;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_70;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_MaxPlayers;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Error;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_SliderMaxPlayers;                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_C*                         MainMenuRef;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlayer;                                         // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ServerName;                                        // 0x2E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        MaximumPlayers;                                    // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_CreateServer_C* GetDefaultObj();

	void Check_Server_Name(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_3, bool CallFunc_HasUserFocus_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, bool CallFunc_HasUserFocus_ReturnValue_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5);
	class UWidget* CustomNavigation_Up(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, bool CallFunc_HasUserFocus_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	class UWidget* CustomNavigation_Right(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RefreshFocus();
	void BndEvt__Slider_MaxPlayers_K2Node_ComponentBoundEvent_193_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ShowCreateServer();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_236_OnButtonClickedEvent__DelegateSignature();
	void ChangeMaxPlayerSlider(float Value);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_CreateServer_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_W_CreateServer(int32 EntryPoint, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_6, bool Temp_bool_IsClosed_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Has_Been_Initd_Variable_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_2, bool Temp_bool_IsClosed_Variable_8, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, bool CallFunc_HasUserFocus_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, float K2Node_ComponentBoundEvent_Value_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, float CallFunc_GetValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, bool Temp_bool_Has_Been_Initd_Variable_7, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_8, bool K2Node_Event_IsDesignTime, bool CallFunc_IsChecked_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


