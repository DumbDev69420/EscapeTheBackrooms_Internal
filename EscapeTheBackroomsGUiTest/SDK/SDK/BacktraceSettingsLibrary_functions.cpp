#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BacktraceSettingsLibrary.BacktraceSettings
// (None)

class UClass* UBacktraceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BacktraceSettings");

	return Clss;
}


// BacktraceSettings BacktraceSettingsLibrary.Default__BacktraceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UBacktraceSettings* UBacktraceSettings::GetDefaultObj()
{
	static class UBacktraceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UBacktraceSettings*>(UBacktraceSettings::StaticClass()->DefaultObject);

	return Default;
}

}


