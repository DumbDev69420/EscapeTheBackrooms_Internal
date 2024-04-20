#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deep_Volume.BP_Deep_Volume_C
// (Actor)

class UClass* ABP_Deep_Volume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deep_Volume_C");

	return Clss;
}


// BP_Deep_Volume_C BP_Deep_Volume.Default__BP_Deep_Volume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deep_Volume_C* ABP_Deep_Volume_C::GetDefaultObj()
{
	static class ABP_Deep_Volume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deep_Volume_C*>(ABP_Deep_Volume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deep_Volume.BP_Deep_Volume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Volume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Volume_C", "ReceiveActorBeginOverlap");

	Params::ABP_Deep_Volume_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Volume.BP_Deep_Volume_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Volume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Volume_C", "ReceiveActorEndOverlap");

	Params::ABP_Deep_Volume_C_ReceiveActorEndOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Volume.BP_Deep_Volume_C.ExecuteUbergraph_BP_Deep_Volume
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Volume_C::ExecuteUbergraph_BP_Deep_Volume(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class AActor* K2Node_Event_OtherActor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Volume_C", "ExecuteUbergraph_BP_Deep_Volume");

	Params::ABP_Deep_Volume_C_ExecuteUbergraph_BP_Deep_Volume_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


