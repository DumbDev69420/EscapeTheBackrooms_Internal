#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UI_Checklist.UI_Checklist_C
class UUI_Checklist_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_44;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Checklist_C* GetDefaultObj();

	void GetSurvivorsText(class UBP_New_SaveGame_C* SaveGame, class UUI_Checklist_Item_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_New_SaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_New_SaveGame_C* K2Node_DynamicCast_AsBP_New_Save_Game, bool K2Node_DynamicCast_bSuccess);
	void AddItem(class UUI_Checklist_Item_C* ChecklistEntry);
	void Construct();
	void ExecuteUbergraph_UI_Checklist(int32 EntryPoint, class UUI_Checklist_Item_C* K2Node_CustomEvent_ChecklistEntry, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


