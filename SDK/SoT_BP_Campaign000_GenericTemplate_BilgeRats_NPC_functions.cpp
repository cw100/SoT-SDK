// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign000_GenericTemplate_BilgeRats_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Campaign000_GenericTemplate_BilgeRats_NPC.BP_Campaign000_GenericTemplate_BilgeRats_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Campaign000_GenericTemplate_BilgeRats_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campaign000_GenericTemplate_BilgeRats_NPC.BP_Campaign000_GenericTemplate_BilgeRats_NPC_C.UserConstructionScript");

	ABP_Campaign000_GenericTemplate_BilgeRats_NPC_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif