#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CageScare.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C CageScare.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CageScare.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*          SK_AnglerFish                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ASkeletalMeshActor* SK_AnglerFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.SK_AnglerFish = SK_AnglerFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CageScare.SequenceDirector_C.SK_AnglerFish_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*          SK_AnglerFish                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SK_AnglerFish_Event_0(class ASkeletalMeshActor* SK_AnglerFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SK_AnglerFish_Event_0");

	Params::USequenceDirector_C_SK_AnglerFish_Event_0_Params Parms{};

	Parms.SK_AnglerFish = SK_AnglerFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CageScare.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkeletalMeshActor*          K2Node_CustomEvent_SK_AnglerFish                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ASkeletalMeshActor* K2Node_CustomEvent_SK_AnglerFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SK_AnglerFish = K2Node_CustomEvent_SK_AnglerFish;

	UObject::ProcessEvent(Func, &Parms);

}

}


