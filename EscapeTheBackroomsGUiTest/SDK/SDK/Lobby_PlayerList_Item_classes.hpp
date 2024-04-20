#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass Lobby_PlayerList_Item.Lobby_PlayerList_Item_C
class ULobby_PlayerList_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              HostIndicator;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Kick_Btn;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KickButton_Text;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Player_Avatar_Image;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Player_ReadyStatus;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Player_Username_text;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Speaker_Image;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_ConnectedPlayer                    ConnectedPlayer;                                   // 0x2A0(0x20)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           Ready_Color;                                       // 0x2C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           NotReady_Color;                                    // 0x2E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULobby_PlayerList_Item_C* GetDefaultObj();

	void Set_Speaking(bool IsSpeaking);
	void KickPlayer(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABase_GM_C* K2Node_DynamicCast_AsBase_GM, bool K2Node_DynamicCast_bSuccess);
	void Setup();
	void Set_Avatar(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Set_Username(class FText CallFunc_Conv_StringToText_ReturnValue);
	void Set_KickButton(bool CallFunc_IsServer_ReturnValue);
	void Set_HostIndicator();
	void Set_ReadyStatus(class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void CanClose();
	void Construct();
	void BndEvt__WB_Lobby_PlayerList_Item_Kick_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Lobby_PlayerList_Item(int32 EntryPoint);
};

}


