#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ChunkActor.BP_ChunkActor_C
// (Actor)

class UClass* ABP_ChunkActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ChunkActor_C");

	return Clss;
}


// BP_ChunkActor_C BP_ChunkActor.Default__BP_ChunkActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ChunkActor_C* ABP_ChunkActor_C::GetDefaultObj()
{
	static class ABP_ChunkActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ChunkActor_C*>(ABP_ChunkActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ChunkActor.BP_ChunkActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChunkActor_C::UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChunkActor_C", "UserConstructionScript");

	Params::ABP_ChunkActor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChunkActor.BP_ChunkActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ChunkActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChunkActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChunkActor.BP_ChunkActor_C.ExecuteUbergraph_BP_ChunkActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChunkActor_C::ExecuteUbergraph_BP_ChunkActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChunkActor_C", "ExecuteUbergraph_BP_ChunkActor");

	Params::ABP_ChunkActor_C_ExecuteUbergraph_BP_ChunkActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


