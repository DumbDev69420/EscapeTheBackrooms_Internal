#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BacktraceBlueprintLibrary.BacktraceBlueprintLibrary
class UBacktraceBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBacktraceBlueprintLibrary* GetDefaultObj();

	void CrashException();
	void Crash();
};

}


