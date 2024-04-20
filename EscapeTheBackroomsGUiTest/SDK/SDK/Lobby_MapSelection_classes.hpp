#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x368 - 0x260)
// WidgetBlueprintGeneratedClass Lobby_MapSelection.Lobby_MapSelection_C
class ULobby_MapSelection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              DescriptionBox;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Difficulty_Description_Text;                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DifficultySwitcherBox;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GameMode_Description_Text;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_DifficultySwitcher_C*           Lobby_DifficultySwitcher;                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_Level_Switcher_C*               Lobby_Level_Switcher_C_0;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_Name_Box_C*                     Lobby_Name_Box_C_1;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULobby_Save_Switcher_C*                Lobby_Save_Switcher;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Map_Image;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MapName_Text;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MapSwitcherBox;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NameBox;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SaveSwitcherBox;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Error;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Time;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Show_MapSwitcher_;                                 // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Selected_Option;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSwitched_Map;                                    // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Show_DifficultySwitcher;                           // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Show_SaveGameSwitcher;                             // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2400[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SaveName;                                          // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        CharacterArray;                                    // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSwitched_Save;                                   // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                SlotName;                                          // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSwitched_Difficulty;                             // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ULobby_MapSelection_C* GetDefaultObj();

	void CheckFont(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue);
	void CheckName(bool* IsValid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobby_GS_C* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_SaveName_Visibility(bool CallFunc_IsServer_ReturnValue);
	void Set_SaveButtons_Visibility(bool CallFunc_IsServer_ReturnValue);
	void ResetLevelSelection(enum class E_Difficulty Difficulty);
	void GetLevelFromName(const class FString& Name, class FName* LevelName, bool K2Node_SwitchString_CmpSuccess);
	void GetMapFromName(const class FString& Name, class UTexture** Image, bool K2Node_SwitchString_CmpSuccess);
	class FText GetTime(float Time, const class FString& CallFunc_RoundedTime_RoundedTime, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue);
	void RoundedTime(float Time, class FString* RoundedTime, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void Set_Selected_Save(const class FString& Slot, bool CallDelegate_, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void Set_Selected_Level(const class FString& Level, bool CallDelegate_, int32 Temp_int_Array_Index_Variable, class UTexture* CallFunc_GetMapFromName_Image, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture* CallFunc_GetMapFromName_Image_1, class UTexture* CallFunc_GetMapFromName_Image_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UBP_LobbySaveGame_C* CallFunc_GetLobbySaveGame_SaveGame, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_LevelStats& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FS_LevelStats& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTime_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_GetTime_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FS_LevelStats& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class FText CallFunc_GetTime_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2);
	void Set_Selected_Difficulty(const class FString& Difficulty, bool CallDelegate_, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Difficulty& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Set_DifficultyButtons_Visibility(bool CallFunc_IsServer_ReturnValue);
	void Set_OptionButtons_Visibility();
	void Set_Selected_Map(const class FString& MapName, bool CallDelegate_, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_Gamemode& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Setup();
	void BndEvt__Lobby_MapSelection_Lobby_Level_Switcher_C_0_K2Node_ComponentBoundEvent_3_OnLevelSwitched__DelegateSignature(const class FString& SelectedOption);
	void PreConstruct(bool IsDesignTime);
	void CanClose();
	void BndEvt__Lobby_MapSelection_Lobby_Save_Switcher_K2Node_ComponentBoundEvent_4_OnSaveSwitched__DelegateSignature(const class FString& SelectedOption);
	void BndEvt__Lobby_MapSelection_Lobby_DifficultySwitcher_K2Node_ComponentBoundEvent_0_OnDifficultySwitched__DelegateSignature(const class FString& SelectedOption);
	void BndEvt__Lobby_MapSelection_Lobby_Name_Box_C_1_K2Node_ComponentBoundEvent_0_OnNameSwitched__DelegateSignature(class FText SelectedOption);
	void ExecuteUbergraph_Lobby_MapSelection(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption_2, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedOption_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& K2Node_ComponentBoundEvent_SelectedOption_3, class FText K2Node_ComponentBoundEvent_SelectedOption);
	void OnSwitched_Difficulty__DelegateSignature(enum class E_Difficulty Difficulty);
	void OnSwitched_Save__DelegateSignature(const class FString& SaveName);
	void OnSwitched_Map__DelegateSignature(const class FString& Selected_Map);
};

}


