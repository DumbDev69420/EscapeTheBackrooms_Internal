#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SimpleScatterPlugin.SimpleScatter
// (Actor)

class UClass* ASimpleScatter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleScatter");

	return Clss;
}


// SimpleScatter SimpleScatterPlugin.Default__SimpleScatter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASimpleScatter* ASimpleScatter::GetDefaultObj()
{
	static class ASimpleScatter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleScatter*>(ASimpleScatter::StaticClass()->DefaultObject);

	return Default;
}


// Function SimpleScatterPlugin.SimpleScatter.ManualRefresh
// (Final, Native, Private)
// Parameters:

void ASimpleScatter::ManualRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleScatter", "ManualRefresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SimpleScatterPlugin.SimpleScatterSpline
// (SceneComponent, PrimitiveComponent)

class UClass* USimpleScatterSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleScatterSpline");

	return Clss;
}


// SimpleScatterSpline SimpleScatterPlugin.Default__SimpleScatterSpline
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleScatterSpline* USimpleScatterSpline::GetDefaultObj()
{
	static class USimpleScatterSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleScatterSpline*>(USimpleScatterSpline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimpleScatterPlugin.SimpleScatterSplineActor
// (Actor)

class UClass* ASimpleScatterSplineActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleScatterSplineActor");

	return Clss;
}


// SimpleScatterSplineActor SimpleScatterPlugin.Default__SimpleScatterSplineActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ASimpleScatterSplineActor* ASimpleScatterSplineActor::GetDefaultObj()
{
	static class ASimpleScatterSplineActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleScatterSplineActor*>(ASimpleScatterSplineActor::StaticClass()->DefaultObject);

	return Default;
}

}


