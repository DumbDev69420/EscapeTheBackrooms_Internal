#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class XRVisualization.XRVisualizationLoadHelper
// (None)

class UClass* UXRVisualizationLoadHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRVisualizationLoadHelper");

	return Clss;
}


// XRVisualizationLoadHelper XRVisualization.Default__XRVisualizationLoadHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRVisualizationLoadHelper* UXRVisualizationLoadHelper::GetDefaultObj()
{
	static class UXRVisualizationLoadHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRVisualizationLoadHelper*>(UXRVisualizationLoadHelper::StaticClass()->DefaultObject);

	return Default;
}


// Class XRVisualization.XRVisualizationFunctionLibrary
// (None)

class UClass* UXRVisualizationFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRVisualizationFunctionLibrary");

	return Clss;
}


// XRVisualizationFunctionLibrary XRVisualization.Default__XRVisualizationFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRVisualizationFunctionLibrary* UXRVisualizationFunctionLibrary::GetDefaultObj()
{
	static class UXRVisualizationFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRVisualizationFunctionLibrary*>(UXRVisualizationFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function XRVisualization.XRVisualizationFunctionLibrary.RenderMotionController
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRMotionControllerData     XRControllerData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bRight                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRVisualizationFunctionLibrary::RenderMotionController(struct FXRMotionControllerData& XRControllerData, bool bRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRVisualizationFunctionLibrary", "RenderMotionController");

	Params::UXRVisualizationFunctionLibrary_RenderMotionController_Params Parms{};

	Parms.XRControllerData = XRControllerData;
	Parms.bRight = bRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRVisualization.XRVisualizationFunctionLibrary.RenderHMD
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRHMDData                  XRHMDData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UXRVisualizationFunctionLibrary::RenderHMD(struct FXRHMDData& XRHMDData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRVisualizationFunctionLibrary", "RenderHMD");

	Params::UXRVisualizationFunctionLibrary_RenderHMD_Params Parms{};

	Parms.XRHMDData = XRHMDData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


