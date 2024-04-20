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

// 0xB0 (0xB0 - 0x0)
// Function XRVisualization.XRVisualizationFunctionLibrary.RenderMotionController
struct UXRVisualizationFunctionLibrary_RenderMotionController_Params
{
public:
	struct FXRMotionControllerData               XRControllerData;                                  // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bRight;                                            // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC3[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function XRVisualization.XRVisualizationFunctionLibrary.RenderHMD
struct UXRVisualizationFunctionLibrary_RenderHMD_Params
{
public:
	struct FXRHMDData                            XRHMDData;                                         // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


