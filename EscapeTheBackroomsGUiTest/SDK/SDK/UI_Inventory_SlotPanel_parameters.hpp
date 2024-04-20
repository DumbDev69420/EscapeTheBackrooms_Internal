#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C.SetIcon
struct UUI_Inventory_SlotPanel_C_SetIcon_Params
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function UI_Inventory_SlotPanel.UI_Inventory_SlotPanel_C.ExecuteUbergraph_UI_Inventory_SlotPanel
struct UUI_Inventory_SlotPanel_C_ExecuteUbergraph_UI_Inventory_SlotPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Item;                           // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2160[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Item                              CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x98)(HasGetValueTypeHash)
	uint8                                        Pad_2161[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


