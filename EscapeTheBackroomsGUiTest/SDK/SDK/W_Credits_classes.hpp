#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x319 - 0x260)
// WidgetBlueprintGeneratedClass W_Credits.W_Credits_C
class UW_Credits_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInOut;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Fond;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_MyLogo;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_MyLogo_1;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       MyBlur;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Credits;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_Additionals;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_Additionals_1;                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_Artists;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_Director;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_GameBy;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_GameName;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_GameName_1;                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_Playtesters;                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CreditsTitleName_C*                 W_CreditsTitle_SoundDesigner;                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        TestTop;                                           // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Invers_;                                           // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartAt;                                           // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndAt;                                             // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInSpeed;                                       // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimerSpeed;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimSpeed;                                         // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActualTop;                                         // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stopped_;                                          // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Audio;                                             // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSolo;                                            // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_Credits_C* GetDefaultObj();

	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void CloseCredits();
	void OnFailure_218EDE1942D56A9FA8AEBCA97849717D();
	void OnSuccess_218EDE1942D56A9FA8AEBCA97849717D();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnBackgroundClick();
	void UpdateCanJoin(bool CanJoin);
	void ExecuteUbergraph_W_Credits(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ServerTravel_ReturnValue, bool K2Node_CustomEvent_CanJoin, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, int32 CallFunc_GetSessionSettings_NumConnections_1, int32 CallFunc_GetSessionSettings_NumPrivateConnections_1, bool CallFunc_GetSessionSettings_bIsLAN_1, bool CallFunc_GetSessionSettings_bIsDedicated_1, bool CallFunc_GetSessionSettings_bAllowInvites_1, bool CallFunc_GetSessionSettings_bAllowJoinInProgress_1, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled_1, int32 CallFunc_GetSessionSettings_BuildUniqueID_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings_1, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, bool K2Node_SwitchEnum_CmpSuccess_1, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyBool_SearchResult, bool CallFunc_GetSessionPropertyBool_SettingValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


