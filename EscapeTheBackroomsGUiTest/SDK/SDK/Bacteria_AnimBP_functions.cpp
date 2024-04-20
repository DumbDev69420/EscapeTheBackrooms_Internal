#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bacteria_AnimBP.Bacteria_AnimBP_C
// (None)

class UClass* UBacteria_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bacteria_AnimBP_C");

	return Clss;
}


// Bacteria_AnimBP_C Bacteria_AnimBP.Default__Bacteria_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBacteria_AnimBP_C* UBacteria_AnimBP_C::GetDefaultObj()
{
	static class UBacteria_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBacteria_AnimBP_C*>(UBacteria_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bacteria_AnimBP.Bacteria_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBacteria_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_C", "AnimGraph");

	Params::UBacteria_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Bacteria_AnimBP.Bacteria_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_0AED4C9F4260D894E35E47A57C340F87
// (BlueprintEvent)
// Parameters:

void UBacteria_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_0AED4C9F4260D894E35E47A57C340F87()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_0AED4C9F4260D894E35E47A57C340F87");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bacteria_AnimBP.Bacteria_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_9EEDD44D4AEC7449DD3BE88E9B734C59
// (BlueprintEvent)
// Parameters:

void UBacteria_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_9EEDD44D4AEC7449DD3BE88E9B734C59()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_9EEDD44D4AEC7449DD3BE88E9B734C59");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bacteria_AnimBP.Bacteria_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacteria_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UBacteria_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bacteria_AnimBP.Bacteria_AnimBP_C.ExecuteUbergraph_Bacteria_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacteria_AnimBP_C::ExecuteUbergraph_Bacteria_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AnimBP_C", "ExecuteUbergraph_Bacteria_AnimBP");

	Params::UBacteria_AnimBP_C_ExecuteUbergraph_Bacteria_AnimBP_Params Parms{};

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


