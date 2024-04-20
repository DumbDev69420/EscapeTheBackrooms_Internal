#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_Elevator_Lever.AnimBP_Elevator_Lever_C
// (None)

class UClass* UAnimBP_Elevator_Lever_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_Elevator_Lever_C");

	return Clss;
}


// AnimBP_Elevator_Lever_C AnimBP_Elevator_Lever.Default__AnimBP_Elevator_Lever_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_Elevator_Lever_C* UAnimBP_Elevator_Lever_C::GetDefaultObj()
{
	static class UAnimBP_Elevator_Lever_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_Elevator_Lever_C*>(UAnimBP_Elevator_Lever_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_Elevator_Lever.AnimBP_Elevator_Lever_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_Elevator_Lever_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Elevator_Lever_C", "AnimGraph");

	Params::UAnimBP_Elevator_Lever_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_Elevator_Lever.AnimBP_Elevator_Lever_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Elevator_Lever_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Elevator_Lever_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_Elevator_Lever_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_Elevator_Lever.AnimBP_Elevator_Lever_C.ExecuteUbergraph_AnimBP_Elevator_Lever
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Lever_C*                 K2Node_DynamicCast_AsBP_Lever                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Elevator_Lever_C::ExecuteUbergraph_AnimBP_Elevator_Lever(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Lever_C* K2Node_DynamicCast_AsBP_Lever, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Elevator_Lever_C", "ExecuteUbergraph_AnimBP_Elevator_Lever");

	Params::UAnimBP_Elevator_Lever_C_ExecuteUbergraph_AnimBP_Elevator_Lever_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Lever = K2Node_DynamicCast_AsBP_Lever;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


