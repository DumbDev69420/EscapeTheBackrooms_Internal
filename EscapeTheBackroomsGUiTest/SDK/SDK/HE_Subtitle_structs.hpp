#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x4C - 0x0)
// UserDefinedStruct HE_Subtitle.HE_Subtitle
struct FHE_Subtitle
{
public:
	class FText                                  SubtitleText_6_6BCC1FAE4AA18AB3A2C109B289F03ECC;   // 0x0(0x18)(Edit, BlueprintVisible)
	class USoundBase*                            SubtitleSound_7_F7B3336B46D26792EC7D11B38686BB07;  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Soundis3D_29_AC97CC71400FF9784591338B5C6BC8B7;     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHE_SubtitleSub                       AttachSettingsIfSoundis3D_39_9AD9772245A27FB5452EC09DB720CB1F; // 0x28(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModifyDurationPlusorMinusSec_46_08FC403D464A20C6CBF55A82BF774C1F; // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


