#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x278 - 0x269)
// BlueprintGeneratedClass BP_DroppedItem_Ticket.BP_DroppedItem_Ticket_C
class ABP_DroppedItem_Ticket_C : public ABP_DroppedItem_C
{
public:
	uint8                                        Pad_233D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_Ticket_C* GetDefaultObj();

};

}


