#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wpn_flintlock_pistol_cra_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wpn_flintlock_pistol_cra_01_a_Wieldable.BP_wpn_flintlock_pistol_cra_01_a_Wieldable_C
// 0x0000 (0x0A60 - 0x0A60)
class ABP_wpn_flintlock_pistol_cra_01_a_Wieldable_C : public ABP_FlintlockPistol_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_wpn_flintlock_pistol_cra_01_a_Wieldable.BP_wpn_flintlock_pistol_cra_01_a_Wieldable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif