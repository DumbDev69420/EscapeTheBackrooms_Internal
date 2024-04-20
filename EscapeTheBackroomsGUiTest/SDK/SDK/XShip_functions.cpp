#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class XShip.XShipComponent
// (None)

class UClass* UXShipComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XShipComponent");

	return Clss;
}


// XShipComponent XShip.Default__XShipComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UXShipComponent* UXShipComponent::GetDefaultObj()
{
	static class UXShipComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UXShipComponent*>(UXShipComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function XShip.XShipComponent.Server_PassMovementInfo
// (Net, Native, Event, Protected, NetServer)
// Parameters:
// struct FRepXShipMovement           NewRepXShipMovement                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UXShipComponent::Server_PassMovementInfo(struct FRepXShipMovement& NewRepXShipMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "Server_PassMovementInfo");

	Params::UXShipComponent_Server_PassMovementInfo_Params Parms{};

	Parms.NewRepXShipMovement = NewRepXShipMovement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XShip.XShipComponent.IsEngineInWater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UXShipComponent::IsEngineInWater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "IsEngineInWater");

	Params::UXShipComponent_IsEngineInWater_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipComponent.GetXShipPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AXShipPawn*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AXShipPawn* UXShipComponent::GetXShipPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "GetXShipPawn");

	Params::UXShipComponent_GetXShipPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipComponent.GetShipBoundsRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UXShipComponent::GetShipBoundsRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "GetShipBoundsRadius");

	Params::UXShipComponent_GetShipBoundsRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipComponent.EnableAllFloaters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UXShipComponent::EnableAllFloaters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "EnableAllFloaters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XShip.XShipComponent.EnableAllEngines
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UXShipComponent::EnableAllEngines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "EnableAllEngines");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XShip.XShipComponent.DisableAllFloaters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UXShipComponent::DisableAllFloaters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "DisableAllFloaters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XShip.XShipComponent.DisableAllEngines
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UXShipComponent::DisableAllEngines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipComponent", "DisableAllEngines");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class XShip.XShipPawn
// (Actor, Pawn)

class UClass* AXShipPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XShipPawn");

	return Clss;
}


// XShipPawn XShip.Default__XShipPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AXShipPawn* AXShipPawn::GetDefaultObj()
{
	static class AXShipPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AXShipPawn*>(AXShipPawn::StaticClass()->DefaultObject);

	return Default;
}


// Function XShip.XShipPawn.GetXShipComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UXShipComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UXShipComponent* AXShipPawn::GetXShipComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipPawn", "GetXShipComponent");

	Params::AXShipPawn_GetXShipComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipPawn.GetWaterWorldZ
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InLocation                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AXShipPawn::GetWaterWorldZ(const struct FVector2D& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipPawn", "GetWaterWorldZ");

	Params::AXShipPawn_GetWaterWorldZ_Params Parms{};

	Parms.InLocation = InLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipPawn.GetWaterNormal
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InLocation                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AXShipPawn::GetWaterNormal(const struct FVector2D& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipPawn", "GetWaterNormal");

	Params::AXShipPawn_GetWaterNormal_Params Parms{};

	Parms.InLocation = InLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipPawn.GetWaterDensity
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InLocation                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AXShipPawn::GetWaterDensity(const struct FVector2D& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipPawn", "GetWaterDensity");

	Params::AXShipPawn_GetWaterDensity_Params Parms{};

	Parms.InLocation = InLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XShip.XShipPawn.AddRotationInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              ScaleValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AXShipPawn::AddRotationInput(float ScaleValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XShipPawn", "AddRotationInput");

	Params::AXShipPawn_AddRotationInput_Params Parms{};

	Parms.ScaleValue = ScaleValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


