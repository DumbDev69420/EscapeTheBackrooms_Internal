#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x2B5 - 0x260)
// WidgetBlueprintGeneratedClass WB_Chat.WB_Chat_C
class UWB_Chat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              Chat_InputBox;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Chat_Panel;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Chat_Scrollbox;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ChatBorder;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ChatBox;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      ChatMessage_InputBox;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Duration_Till_Chat_Fade;                           // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fading_;                                           // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChatFocused_;                                      // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanSend_;                                          // 0x29E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F44[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Chat_Message;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Max_Chat_Messages;                                 // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Allow_Chat_Fading_;                                // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWB_Chat_C* GetDefaultObj();

	void CheckFont(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue);
	void FadeChatPanel(float Input, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void Reset_UserFocus(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void Focus_Chat();
	void Submit_Chat_Message(const struct FS_ChatMessage& Message, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
	void Send_Global_Message(const class FString& Global_Message, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FS_ChatMessage& K2Node_MakeStruct_S_ChatMessage);
	void Update_Chat(const struct FS_ChatMessage& Message);
	void Add_Chat(const struct FS_ChatMessage& Message, class UWB_ChatMessage_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Remove_Excess_Messages(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void FadeMinusout_ChatPanel(float DeltaTime, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1);
	void FadeMinusin_Chat_Panel(const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void BndEvt__Chat_WB_ChatMessage_Inputbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void Trigger_ChatFade();
	void BndEvt__LobbyChat_WB_ChatMessage_Inputbox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_WB_Chat(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
};

}


