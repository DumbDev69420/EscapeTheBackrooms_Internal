#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Scoreboard_UI.Scoreboard_UI_C
// (None)

class UClass* UScoreboard_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scoreboard_UI_C");

	return Clss;
}


// Scoreboard_UI_C Scoreboard_UI.Default__Scoreboard_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreboard_UI_C* UScoreboard_UI_C::GetDefaultObj()
{
	static class UScoreboard_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreboard_UI_C*>(UScoreboard_UI_C::StaticClass()->DefaultObject);

	return Default;
}

}


