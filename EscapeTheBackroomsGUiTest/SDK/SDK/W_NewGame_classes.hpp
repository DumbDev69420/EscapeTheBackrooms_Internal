#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass W_NewGame.W_NewGame_C
class UW_NewGame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_No;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Yes;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_Name;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_NoFocus;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_YesFocus;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_70;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Error;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MainMenu_C*                         MainMenuRef;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SaveName;                                          // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FString>                        CharacterArray;                                    // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_NewGame_C* GetDefaultObj();

	void CheckName(bool* IsValid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* CustomNavigation_Down(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, bool CallFunc_HasUserFocus_ReturnValue_6);
	class UWidget* CustomNavigation_Up(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, bool CallFunc_HasUserFocus_ReturnValue_2, bool CallFunc_HasUserFocus_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	class UWidget* CustomNavigation_Right(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1);
	class UWidget* CustomNavigation_Left(enum class EUINavigation Navigation, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RefreshFocus();
	void ShowCreateNewGame();
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_219_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_236_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_NewGame_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ToggleVR(bool Hidden);
	void ExecuteUbergraph_W_NewGame(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Create_New_Slot_Success, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_CheckName_IsValid, class FText K2Node_ComponentBoundEvent_Text, const struct FDateTime& CallFunc_Now_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_GetSystemTimeSeconds_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, bool K2Node_CustomEvent_Hidden, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, class ABP_MenuActor_C* K2Node_DynamicCast_AsBP_Menu_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


