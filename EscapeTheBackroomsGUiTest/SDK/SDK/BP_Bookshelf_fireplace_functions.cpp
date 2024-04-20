#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bookshelf_fireplace.BP_Bookshelf_fireplace_C
// (Actor)

class UClass* ABP_Bookshelf_fireplace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bookshelf_fireplace_C");

	return Clss;
}


// BP_Bookshelf_fireplace_C BP_Bookshelf_fireplace.Default__BP_Bookshelf_fireplace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bookshelf_fireplace_C* ABP_Bookshelf_fireplace_C::GetDefaultObj()
{
	static class ABP_Bookshelf_fireplace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bookshelf_fireplace_C*>(ABP_Bookshelf_fireplace_C::StaticClass()->DefaultObject);

	return Default;
}

}


