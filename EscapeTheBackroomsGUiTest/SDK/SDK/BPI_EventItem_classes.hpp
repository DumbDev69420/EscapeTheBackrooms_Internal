#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_EventItem.BPI_EventItem_C
class IBPI_EventItem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_EventItem_C* GetDefaultObj();

	void ToggleEvent(bool Enable);
};

}


