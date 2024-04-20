#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C
// (Actor)

class UClass* ABP_DroppedItem_Jelly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_Jelly_C");

	return Clss;
}


// BP_DroppedItem_Jelly_C BP_DroppedItem_Jelly.Default__BP_DroppedItem_Jelly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_Jelly_C* ABP_DroppedItem_Jelly_C::GetDefaultObj()
{
	static class ABP_DroppedItem_Jelly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_Jelly_C*>(ABP_DroppedItem_Jelly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_Jelly_C::ToggleEvent(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_Jelly_C", "ToggleEvent");

	Params::ABP_DroppedItem_Jelly_C_ToggleEvent_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.OnEventLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventType              EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DroppedItem_Jelly_C::OnEventLoaded(enum class EEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_Jelly_C", "OnEventLoaded");

	Params::ABP_DroppedItem_Jelly_C_OnEventLoaded_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C.ExecuteUbergraph_BP_DroppedItem_Jelly
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventType              K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_Jelly_C::ExecuteUbergraph_BP_DroppedItem_Jelly(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_SetStaticMesh_ReturnValue, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, bool K2Node_Event_Enable, enum class EEventType K2Node_Event_EventType, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_Jelly_C", "ExecuteUbergraph_BP_DroppedItem_Jelly");

	Params::ABP_DroppedItem_Jelly_C_ExecuteUbergraph_BP_DroppedItem_Jelly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


