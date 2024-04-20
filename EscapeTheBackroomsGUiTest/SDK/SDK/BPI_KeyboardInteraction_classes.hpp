#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_KeyboardInteraction.BPI_KeyboardInteraction_C
class IBPI_KeyboardInteraction_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_KeyboardInteraction_C* GetDefaultObj();

	void SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent);
	void SymbolLock();
	void Space();
	void Shift();
	void SendKeyboardText();
	void CapsLock();
};

}


