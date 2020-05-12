#pragma once

#include "../../useful/useful.h"
namespace app {
    namespace FighterSpecializer_Ryu {
		u64 check_special_air_s_command(u64 /*module_accessor*/) asm("_ZN3app22FighterSpecializer_Ryu27check_special_air_s_commandERNS_26BattleObjectModuleAccessorE") LINKABLE;
		u64 req_shinshoryu_hit_effect(u64 /*module_accessor*/, const Vector3f*, const Vector3f*, bool, bool) asm("_ZN3app22FighterSpecializer_Ryu25req_shinsyoryu_hit_effectERNS_26BattleObjectModuleAccessorERKN3phx8Vector3fES6_bb") LINKABLE;
		u64 set_final_stage_disp_status (u64/*module_accessor*/, bool, bool) asm("_ZN3app22FighterSpecializer_Ryu27set_final_stage_disp_statusERNS_26BattleObjectModuleAccessorEbb") LINKABLE;
	}
}
