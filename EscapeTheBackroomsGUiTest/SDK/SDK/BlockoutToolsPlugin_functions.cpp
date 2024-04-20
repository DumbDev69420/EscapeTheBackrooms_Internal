#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlockoutToolsPlugin.BlockoutToolsParent
// (Actor)

class UClass* ABlockoutToolsParent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlockoutToolsParent");

	return Clss;
}


// BlockoutToolsParent BlockoutToolsPlugin.Default__BlockoutToolsParent
// (Public, ClassDefaultObject, ArchetypeObject)

class ABlockoutToolsParent* ABlockoutToolsParent::GetDefaultObj()
{
	static class ABlockoutToolsParent* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlockoutToolsParent*>(ABlockoutToolsParent::StaticClass()->DefaultObject);

	return Default;
}


// Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void ABlockoutToolsParent::RerunConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlockoutToolsParent", "RerunConstructionScript");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void ABlockoutToolsParent::BlockoutSetMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlockoutToolsParent", "BlockoutSetMaterial");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class BlockoutToolsPlugin.BlockoutToolsSettings
// (None)

class UClass* UBlockoutToolsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlockoutToolsSettings");

	return Clss;
}


// BlockoutToolsSettings BlockoutToolsPlugin.Default__BlockoutToolsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlockoutToolsSettings* UBlockoutToolsSettings::GetDefaultObj()
{
	static class UBlockoutToolsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlockoutToolsSettings*>(UBlockoutToolsSettings::StaticClass()->DefaultObject);

	return Default;
}

}


