#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RailingLight_MediumShip_Wheel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailingLight_MediumShip_Wheel.BP_RailingLight_MediumShip_Wheel_C
// 0x0000 (0x0819 - 0x0819)
class ABP_RailingLight_MediumShip_Wheel_C : public ABP_InteractableShipRailingLight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_RailingLight_MediumShip_Wheel.BP_RailingLight_MediumShip_Wheel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif