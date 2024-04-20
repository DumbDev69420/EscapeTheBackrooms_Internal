#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InteractiveFoliageChunk_BP.InteractiveFoliageChunk_BP_C
// (Actor)

class UClass* AInteractiveFoliageChunk_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageChunk_BP_C");

	return Clss;
}


// InteractiveFoliageChunk_BP_C InteractiveFoliageChunk_BP.Default__InteractiveFoliageChunk_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInteractiveFoliageChunk_BP_C* AInteractiveFoliageChunk_BP_C::GetDefaultObj()
{
	static class AInteractiveFoliageChunk_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractiveFoliageChunk_BP_C*>(AInteractiveFoliageChunk_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveFoliageChunk_BP.InteractiveFoliageChunk_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AInteractiveFoliageChunk_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractiveFoliageChunk_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


