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

// 0x1 (0x1 - 0x0)
// Function BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C.ToggleEvent
struct ABP_DroppedItem_AlmondWater_C_ToggleEvent_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C.OnEventLoaded
struct ABP_DroppedItem_AlmondWater_C_OnEventLoaded_Params
{
public:
	enum class EEventType                        EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C.ExecuteUbergraph_BP_DroppedItem_AlmondWater
struct ABP_DroppedItem_AlmondWater_C_ExecuteUbergraph_BP_DroppedItem_AlmondWater_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Enable;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEventType                        K2Node_Event_EventType;                            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


