#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CloseableInterface.BP_CloseableInterface_C
// (None)

class UClass* IBP_CloseableInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CloseableInterface_C");

	return Clss;
}


// BP_CloseableInterface_C BP_CloseableInterface.Default__BP_CloseableInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_CloseableInterface_C* IBP_CloseableInterface_C::GetDefaultObj()
{
	static class IBP_CloseableInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_CloseableInterface_C*>(IBP_CloseableInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CloseableInterface.BP_CloseableInterface_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_CloseableInterface_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CloseableInterface_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}

}


