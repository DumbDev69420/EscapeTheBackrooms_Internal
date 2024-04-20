#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SmoothSyncPlugin.SmoothSync
// (None)

class UClass* USmoothSync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothSync");

	return Clss;
}


// SmoothSync SmoothSyncPlugin.Default__SmoothSync
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothSync* USmoothSync::GetDefaultObj()
{
	static class USmoothSync* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothSync*>(USmoothSync::StaticClass()->DefaultObject);

	return Default;
}


// Function SmoothSyncPlugin.SmoothSync.teleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USmoothSync::Teleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "teleport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TempOwnerTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmoothSync::SmoothSyncTeleportServerToClients(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float TempOwnerTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "SmoothSyncTeleportServerToClients");

	Params::USmoothSync_SmoothSyncTeleportServerToClients_Params Parms{};

	Parms.Position = Position;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;
	Parms.TempOwnerTime = TempOwnerTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TempOwnerTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmoothSync::SmoothSyncTeleportClientToServer(const struct FVector& Position, const struct FVector& Rotation, const struct FVector& Scale, float TempOwnerTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "SmoothSyncTeleportClientToServer");

	Params::USmoothSync_SmoothSyncTeleportClientToServer_Params Parms{};

	Parms.Position = Position;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;
	Parms.TempOwnerTime = TempOwnerTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
// (Net, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmoothSync::SmoothSyncEnableServerToClients(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "SmoothSyncEnableServerToClients");

	Params::USmoothSync_SmoothSyncEnableServerToClients_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmoothSync::SmoothSyncEnableClientToServer(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "SmoothSyncEnableClientToServer");

	Params::USmoothSync_SmoothSyncEnableClientToServer_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             TheComponent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmoothSync::SetSceneComponentToSync(class USceneComponent* TheComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "setSceneComponentToSync");

	Params::USmoothSync_SetSceneComponentToSync_Params Parms{};

	Parms.TheComponent = TheComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
// (Net, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USmoothSync::ServerSendsTransformToEveryone(TArray<uint8>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "ServerSendsTransformToEveryone");

	Params::USmoothSync_ServerSendsTransformToEveryone_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.forceStateSendNextFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USmoothSync::ForceStateSendNextFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "forceStateSendNextFrame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmoothSync::EnableSmoothSync(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "enableSmoothSync");

	Params::USmoothSync_EnableSmoothSync_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USmoothSync::ClientSendsTransformToServer(TArray<uint8>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "ClientSendsTransformToServer");

	Params::USmoothSync_ClientSendsTransformToServer_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmoothSyncPlugin.SmoothSync.clearBuffer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USmoothSync::ClearBuffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmoothSync", "clearBuffer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


