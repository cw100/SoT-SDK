#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wpn_sniper_rifle_cra_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wpn_sniper_rifle_cra_01_a_Wieldable.BP_wpn_sniper_rifle_cra_01_a_Wieldable_C
// 0x0000 (0x0AA0 - 0x0AA0)
class ABP_wpn_sniper_rifle_cra_01_a_Wieldable_C : public ABP_EyeOfReach_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_wpn_sniper_rifle_cra_01_a_Wieldable.BP_wpn_sniper_rifle_cra_01_a_Wieldable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif