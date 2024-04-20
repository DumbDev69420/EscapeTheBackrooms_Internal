#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_Ragdoll.AnimBP_Ragdoll_C
// (None)

class UClass* UAnimBP_Ragdoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_Ragdoll_C");

	return Clss;
}


// AnimBP_Ragdoll_C AnimBP_Ragdoll.Default__AnimBP_Ragdoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_Ragdoll_C* UAnimBP_Ragdoll_C::GetDefaultObj()
{
	static class UAnimBP_Ragdoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_Ragdoll_C*>(UAnimBP_Ragdoll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_Ragdoll.AnimBP_Ragdoll_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_Ragdoll_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Ragdoll_C", "AnimGraph");

	Params::UAnimBP_Ragdoll_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_Ragdoll.AnimBP_Ragdoll_C.ExecuteUbergraph_AnimBP_Ragdoll
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Ragdoll_C::ExecuteUbergraph_AnimBP_Ragdoll(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_Ragdoll_C", "ExecuteUbergraph_AnimBP_Ragdoll");

	Params::UAnimBP_Ragdoll_C_ExecuteUbergraph_AnimBP_Ragdoll_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


