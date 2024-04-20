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

// 0x14 (0x14 - 0x0)
// UserDefinedStruct HE_Fear.HE_Fear
struct FHE_Fear
{
public:
	bool                                         FearAnimation_9_0E486C1142B37F96E07FAE8158BEF0FA;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FearSound_2_49CB5D39413F6879091FAC8EC104A385;      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FB0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CustomFearSoundOptional_6_054E50E941988E832A422AB0377B6117; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinusDelayBeforeFear_12_F3DB113843ED8BCE85522DB06035366A; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


