#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReefIslandSunkenStatueSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReefIslandSunkenStatueSpawner.BP_ReefIslandSunkenStatueSpawner_C
// 0x0000 (0x04F0 - 0x04F0)
class UBP_ReefIslandSunkenStatueSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReefIslandSunkenStatueSpawner.BP_ReefIslandSunkenStatueSpawner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
