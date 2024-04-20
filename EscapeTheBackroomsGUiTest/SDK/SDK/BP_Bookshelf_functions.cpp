#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bookshelf.BP_Bookshelf_C
// (Actor)

class UClass* ABP_Bookshelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bookshelf_C");

	return Clss;
}


// BP_Bookshelf_C BP_Bookshelf.Default__BP_Bookshelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bookshelf_C* ABP_Bookshelf_C::GetDefaultObj()
{
	static class ABP_Bookshelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bookshelf_C*>(ABP_Bookshelf_C::StaticClass()->DefaultObject);

	return Default;
}

}


