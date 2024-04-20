#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C
// (None)

class UClass* UScanner_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scanner_Skeleton_AnimBP_C");

	return Clss;
}


// Scanner_Skeleton_AnimBP_C Scanner_Skeleton_AnimBP.Default__Scanner_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScanner_Skeleton_AnimBP_C* UScanner_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class UScanner_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScanner_Skeleton_AnimBP_C*>(UScanner_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UScanner_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "AnimGraph");

	Params::UScanner_Skeleton_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_208F31EF417F42E8F364C3A2DC16204A
// (BlueprintEvent)
// Parameters:

void UScanner_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_208F31EF417F42E8F364C3A2DC16204A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_208F31EF417F42E8F364C3A2DC16204A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7572C51A40F4F4AE279FE093F7537489
// (BlueprintEvent)
// Parameters:

void UScanner_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7572C51A40F4F4AE279FE093F7537489()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7572C51A40F4F4AE279FE093F7537489");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_675481CC4C9907B4B90B0E98A9FE023B
// (BlueprintEvent)
// Parameters:

void UScanner_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_675481CC4C9907B4B90B0E98A9FE023B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_675481CC4C9907B4B90B0E98A9FE023B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_B522B71740E6B1FE380B69B2C20BEBD7
// (BlueprintEvent)
// Parameters:

void UScanner_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_B522B71740E6B1FE380B69B2C20BEBD7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_B522B71740E6B1FE380B69B2C20BEBD7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_D7E8D10741A32ECF3F2F799070AA3A26
// (BlueprintEvent)
// Parameters:

void UScanner_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_D7E8D10741A32ECF3F2F799070AA3A26()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_D7E8D10741A32ECF3F2F799070AA3A26");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C.ExecuteUbergraph_Scanner_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UScanner_Skeleton_AnimBP_C::ExecuteUbergraph_Scanner_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_Skeleton_AnimBP_C", "ExecuteUbergraph_Scanner_Skeleton_AnimBP");

	Params::UScanner_Skeleton_AnimBP_C_ExecuteUbergraph_Scanner_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


