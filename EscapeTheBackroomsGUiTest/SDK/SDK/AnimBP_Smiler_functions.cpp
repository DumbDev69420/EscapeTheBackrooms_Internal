#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_Smiler.AnimBP_Smiler_C
// (None)

class UClass* UAnimBP_Smiler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_Smiler_C");

	return Clss;
}


// AnimBP_Smiler_C AnimBP_Smiler.Default__AnimBP_Smiler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_Smiler_C* UAnimBP_Smiler_C::GetDefaultObj()
{
	static class UAnimBP_Smiler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_Smiler_C*>(UAnimBP_Smiler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_Smiler.AnimBP_Smiler_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_Smiler_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Smiler_C", "AnimGraph");

	Params::UAnimBP_Smiler_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_Smiler.AnimBP_Smiler_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Smiler_AnimGraphNode_TransitionResult_99D058004D9CA2B9BBC01D917DB582C3
// (BlueprintEvent)
// Parameters:

void UAnimBP_Smiler_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Smiler_AnimGraphNode_TransitionResult_99D058004D9CA2B9BBC01D917DB582C3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Smiler_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Smiler_AnimGraphNode_TransitionResult_99D058004D9CA2B9BBC01D917DB582C3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Smiler.AnimBP_Smiler_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Smiler_AnimGraphNode_TransitionResult_3A2998A74CABA1A1750B2FB90F27C93B
// (BlueprintEvent)
// Parameters:

void UAnimBP_Smiler_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Smiler_AnimGraphNode_TransitionResult_3A2998A74CABA1A1750B2FB90F27C93B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Smiler_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Smiler_AnimGraphNode_TransitionResult_3A2998A74CABA1A1750B2FB90F27C93B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBP_Smiler.AnimBP_Smiler_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Smiler_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Smiler_C", "BlueprintUpdateAnimation");

	Params::UAnimBP_Smiler_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBP_Smiler.AnimBP_Smiler_C.ExecuteUbergraph_AnimBP_Smiler
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Smiler_C::ExecuteUbergraph_AnimBP_Smiler(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Smiler_C", "ExecuteUbergraph_AnimBP_Smiler");

	Params::UAnimBP_Smiler_C_ExecuteUbergraph_AnimBP_Smiler_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


