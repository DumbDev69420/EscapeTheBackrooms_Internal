#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0xC1 - 0xB0)
// BlueprintGeneratedClass ChatComponent.ChatComponent_C
class UChatComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Chat_C*                            WB_ChatRef;                                        // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFiltering;                                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UChatComponent_C* GetDefaultObj();

	void Clear_Chat(bool CallFunc_IsValid_ReturnValue);
	void Focus_Chat(bool CallFunc_IsValid_ReturnValue);
	void Create_Chat_Widget(bool IsInGame, class UWB_Chat_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
	void OC_Setup_Chat_Widget(bool IsInGame);
	void OC_Update_Chat(const struct FS_ChatMessage& Message);
	void SR_Update_Chat(struct FS_ChatMessage& Message);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ChatComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool K2Node_CustomEvent_IsInGame, const struct FS_ChatMessage& K2Node_CustomEvent_Message_1, const struct FS_ChatMessage& K2Node_CustomEvent_Message, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ALobby_GM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, class AMP_GameMode_C* K2Node_DynamicCast_AsMP_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, class ALobby_PlayerController_C* CallFunc_Array_Get_Item, class AMP_PlayerController_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_InitTextFiltering_ReturnValue);
};

}


