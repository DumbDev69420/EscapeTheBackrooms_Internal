#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportServerToClients
struct USmoothSync_SmoothSyncTeleportServerToClients_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TempOwnerTime;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.SmoothSyncTeleportClientToServer
struct USmoothSync_SmoothSyncTeleportClientToServer_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TempOwnerTime;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableServerToClients
struct USmoothSync_SmoothSyncEnableServerToClients_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.SmoothSyncEnableClientToServer
struct USmoothSync_SmoothSyncEnableClientToServer_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.setSceneComponentToSync
struct USmoothSync_SetSceneComponentToSync_Params
{
public:
	class USceneComponent*                       TheComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.ServerSendsTransformToEveryone
struct USmoothSync_ServerSendsTransformToEveryone_Params
{
public:
	TArray<uint8>                                Value;                                             // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.enableSmoothSync
struct USmoothSync_EnableSmoothSync_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SmoothSyncPlugin.SmoothSync.ClientSendsTransformToServer
struct USmoothSync_ClientSendsTransformToServer_Params
{
public:
	TArray<uint8>                                Value;                                             // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


