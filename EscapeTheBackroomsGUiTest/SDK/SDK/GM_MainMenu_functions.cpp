#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_MainMenu.GM_MainMenu_C
// (Actor)

class UClass* AGM_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_MainMenu_C");

	return Clss;
}


// GM_MainMenu_C GM_MainMenu.Default__GM_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_MainMenu_C* AGM_MainMenu_C::GetDefaultObj()
{
	static class AGM_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_MainMenu_C*>(AGM_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


