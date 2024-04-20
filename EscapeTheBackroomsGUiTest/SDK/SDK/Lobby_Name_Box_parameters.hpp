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

// 0x18 (0x18 - 0x0)
// Function Lobby_Name_Box.Lobby_Name_Box_C.BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct ULobby_Name_Box_C_BndEvt__Lobby_Name_Box_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function Lobby_Name_Box.Lobby_Name_Box_C.ExecuteUbergraph_Lobby_Name_Box
struct ULobby_Name_Box_C_ExecuteUbergraph_Lobby_Name_Box_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x8(0x18)(ConstParm)
};

// 0x18 (0x18 - 0x0)
// Function Lobby_Name_Box.Lobby_Name_Box_C.OnNameSwitched__DelegateSignature
struct ULobby_Name_Box_C_OnNameSwitched__DelegateSignature_Params
{
public:
	class FText                                  SelectedOption;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


