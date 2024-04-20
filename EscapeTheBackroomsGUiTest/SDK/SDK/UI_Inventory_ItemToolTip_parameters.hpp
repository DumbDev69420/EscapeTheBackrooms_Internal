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

// 0xC0 (0xC0 - 0x0)
// Function UI_Inventory_ItemToolTip.UI_Inventory_ItemToolTip_C.ExecuteUbergraph_UI_Inventory_ItemToolTip
struct UUI_Inventory_ItemToolTip_C_ExecuteUbergraph_UI_Inventory_ItemToolTip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A0[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Item                              CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x98)(HasGetValueTypeHash)
	uint8                                        Pad_20A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


