#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Player_Legs_AnimBP.Player_Legs_AnimBP_C
// (None)

class UClass* UPlayer_Legs_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Player_Legs_AnimBP_C");

	return Clss;
}


// Player_Legs_AnimBP_C Player_Legs_AnimBP.Default__Player_Legs_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayer_Legs_AnimBP_C* UPlayer_Legs_AnimBP_C::GetDefaultObj()
{
	static class UPlayer_Legs_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayer_Legs_AnimBP_C*>(UPlayer_Legs_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPlayer_Legs_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "AnimGraph");

	Params::UPlayer_Legs_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_BB939D674E19F7B7B6E0DB8CA633050B
// (BlueprintEvent)
// Parameters:

void UPlayer_Legs_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_BB939D674E19F7B7B6E0DB8CA633050B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_BB939D674E19F7B7B6E0DB8CA633050B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_B148701C4EA9CDAA9CAD6595429CA86E
// (BlueprintEvent)
// Parameters:

void UPlayer_Legs_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_B148701C4EA9CDAA9CAD6595429CA86E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_B148701C4EA9CDAA9CAD6595429CA86E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_4EBF1F0143B57EF694EACFBFF7CC9774
// (BlueprintEvent)
// Parameters:

void UPlayer_Legs_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_4EBF1F0143B57EF694EACFBFF7CC9774()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_4EBF1F0143B57EF694EACFBFF7CC9774");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_6FD42B9F476E764603B3B59A931F690B
// (BlueprintEvent)
// Parameters:

void UPlayer_Legs_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_6FD42B9F476E764603B3B59A931F690B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_6FD42B9F476E764603B3B59A931F690B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_914DE35F476091BA53B292AC4EE26AF1
// (BlueprintEvent)
// Parameters:

void UPlayer_Legs_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_914DE35F476091BA53B292AC4EE26AF1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_914DE35F476091BA53B292AC4EE26AF1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_Legs_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UPlayer_Legs_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Player_Legs_AnimBP.Player_Legs_AnimBP_C.ExecuteUbergraph_Player_Legs_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_Legs_AnimBP_C::ExecuteUbergraph_Player_Legs_AnimBP(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_CalculateDirection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Player_Legs_AnimBP_C", "ExecuteUbergraph_Player_Legs_AnimBP");

	Params::UPlayer_Legs_AnimBP_C_ExecuteUbergraph_Player_Legs_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


