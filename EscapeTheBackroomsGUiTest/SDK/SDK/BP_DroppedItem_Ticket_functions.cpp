#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_Ticket.BP_DroppedItem_Ticket_C
// (Actor)

class UClass* ABP_DroppedItem_Ticket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_Ticket_C");

	return Clss;
}


// BP_DroppedItem_Ticket_C BP_DroppedItem_Ticket.Default__BP_DroppedItem_Ticket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_Ticket_C* ABP_DroppedItem_Ticket_C::GetDefaultObj()
{
	static class ABP_DroppedItem_Ticket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_Ticket_C*>(ABP_DroppedItem_Ticket_C::StaticClass()->DefaultObject);

	return Default;
}

}


