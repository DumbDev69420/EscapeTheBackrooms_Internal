#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_Destructible.BP_Destructible_C
class IBP_Destructible_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_Destructible_C* GetDefaultObj();

	void Damage(class ACharacter* Character);
};

}


