#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bacteria_RoomPoint.BP_Bacteria_RoomPoint_C
// (Actor)

class UClass* ABP_Bacteria_RoomPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bacteria_RoomPoint_C");

	return Clss;
}


// BP_Bacteria_RoomPoint_C BP_Bacteria_RoomPoint.Default__BP_Bacteria_RoomPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bacteria_RoomPoint_C* ABP_Bacteria_RoomPoint_C::GetDefaultObj()
{
	static class ABP_Bacteria_RoomPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bacteria_RoomPoint_C*>(ABP_Bacteria_RoomPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


