#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwreck_01_a_NetProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shipwreck_01_a_NetProxy.BP_Shipwreck_01_a_NetProxy_C
// 0x0000 (0x04E0 - 0x04E0)
class ABP_Shipwreck_01_a_NetProxy_C : public ANetProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shipwreck_01_a_NetProxy.BP_Shipwreck_01_a_NetProxy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif