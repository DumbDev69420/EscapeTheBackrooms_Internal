#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bacteria_AnimBP_2.Bacteria_AnimBP_2_C
// (None)

class UClass* UBacteria_AnimBP_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bacteria_AnimBP_2_C");

	return Clss;
}


// Bacteria_AnimBP_2_C Bacteria_AnimBP_2.Default__Bacteria_AnimBP_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBacteria_AnimBP_2_C* UBacteria_AnimBP_2_C::GetDefaultObj()
{
	static class UBacteria_AnimBP_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBacteria_AnimBP_2_C*>(UBacteria_AnimBP_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bacteria_AnimBP_2.Bacteria_AnimBP_2_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBacteria_AnimBP_2_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_2_C", "AnimGraph");

	Params::UBacteria_AnimBP_2_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Bacteria_AnimBP_2.Bacteria_AnimBP_2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_2_AnimGraphNode_TransitionResult_B6EDB8254B991F8BF52B7A8B6284EB0B
// (BlueprintEvent)
// Parameters:

void UBacteria_AnimBP_2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_2_AnimGraphNode_TransitionResult_B6EDB8254B991F8BF52B7A8B6284EB0B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_2_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_2_AnimGraphNode_TransitionResult_B6EDB8254B991F8BF52B7A8B6284EB0B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bacteria_AnimBP_2.Bacteria_AnimBP_2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_2_AnimGraphNode_TransitionResult_A772EA35429EB252A7E8E9B61C995325
// (BlueprintEvent)
// Parameters:

void UBacteria_AnimBP_2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_2_AnimGraphNode_TransitionResult_A772EA35429EB252A7E8E9B61C995325()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_2_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_2_AnimGraphNode_TransitionResult_A772EA35429EB252A7E8E9B61C995325");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bacteria_AnimBP_2.Bacteria_AnimBP_2_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacteria_AnimBP_2_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_2_C", "BlueprintUpdateAnimation");

	Params::UBacteria_AnimBP_2_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bacteria_AnimBP_2.Bacteria_AnimBP_2_C.ExecuteUbergraph_Bacteria_AnimBP_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacteria_AnimBP_2_C::ExecuteUbergraph_Bacteria_AnimBP_2(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_2_C", "ExecuteUbergraph_Bacteria_AnimBP_2");

	Params::UBacteria_AnimBP_2_C_ExecuteUbergraph_Bacteria_AnimBP_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


