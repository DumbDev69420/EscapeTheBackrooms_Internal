#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UI_Dragged.UI_Dragged_C
// (None)

class UClass* UUI_Dragged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Dragged_C");

	return Clss;
}


// UI_Dragged_C UI_Dragged.Default__UI_Dragged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Dragged_C* UUI_Dragged_C::GetDefaultObj()
{
	static class UUI_Dragged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Dragged_C*>(UUI_Dragged_C::StaticClass()->DefaultObject);

	return Default;
}

}


