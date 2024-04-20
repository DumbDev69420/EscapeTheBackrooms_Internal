#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass WB_ChatMessage.WB_ChatMessage_C
class UWB_ChatMessage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ChatMessage_Text;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Username_Text;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_ChatMessage                        ChatMessage;                                       // 0x278(0x40)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                OwnerName;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Player_Message_Color;                              // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          System_Message_Color;                              // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Global_Message_Color;                              // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_ChatMessage_C* GetDefaultObj();

	void CheckFont(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue);
	void IsFiltering(bool* IsFiltering, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UChatComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void Set_Username_Color(const struct FLinearColor& SpecifiedColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Set_Username_Global(const class FString& Chat_sender, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Set_ChatMessage_Color(const struct FLinearColor& Specified_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Set_Username();
	void Construct_ChatMessage();
	void Set_ChatMessage(bool CallFunc_IsFiltering_IsFiltering, const class FString& CallFunc_FilterText_FilteredText, bool CallFunc_FilterText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void Construct();
	void ExecuteUbergraph_WB_ChatMessage(int32 EntryPoint);
};

}


