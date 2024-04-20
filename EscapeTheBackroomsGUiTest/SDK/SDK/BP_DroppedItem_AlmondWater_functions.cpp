#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C
// (Actor)

class UClass* ABP_DroppedItem_AlmondWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_AlmondWater_C");

	return Clss;
}


// BP_DroppedItem_AlmondWater_C BP_DroppedItem_AlmondWater.Default__BP_DroppedItem_AlmondWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_AlmondWater_C* ABP_DroppedItem_AlmondWater_C::GetDefaultObj()
{
	static class ABP_DroppedItem_AlmondWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_AlmondWater_C*>(ABP_DroppedItem_AlmondWater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_AlmondWater_C::ToggleEvent(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_AlmondWater_C", "ToggleEvent");

	Params::ABP_DroppedItem_AlmondWater_C_ToggleEvent_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C.OnEventLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventType              EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_AlmondWater_C::OnEventLoaded(enum class EEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_AlmondWater_C", "OnEventLoaded");

	Params::ABP_DroppedItem_AlmondWater_C_OnEventLoaded_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C.ExecuteUbergraph_BP_DroppedItem_AlmondWater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventType              K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_AlmondWater_C::ExecuteUbergraph_BP_DroppedItem_AlmondWater(int32 EntryPoint, bool K2Node_Event_Enable, enum class EEventType K2Node_Event_EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_AlmondWater_C", "ExecuteUbergraph_BP_DroppedItem_AlmondWater");

	Params::ABP_DroppedItem_AlmondWater_C_ExecuteUbergraph_BP_DroppedItem_AlmondWater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;

	UObject::ProcessEvent(Func, &Parms);

}

}


