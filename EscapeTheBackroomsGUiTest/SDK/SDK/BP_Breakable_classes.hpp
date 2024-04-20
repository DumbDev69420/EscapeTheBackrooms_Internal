#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_Breakable.BP_Breakable_C
class IBP_Breakable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_Breakable_C* GetDefaultObj();

	void Damage(class ACharacter* Character);
};

}


