#pragma once

#include "../../useful/useful.h"
namespace app {
    namespace WeaponSpecializer_JackDoyle {
		u64 play_se_jack(app::Weapon *, u64) asm("_ZN3app27WeaponSpecializer_JackDoyle12play_se_jackERNS_6WeaponEN3phx6Hash40E") LINKABLE;
		u64 update_aura_visible(u64 /*module_accessor*/) asm("_ZN3app27WeaponSpecializer_JackDoyle19update_aura_visibleERNS_26BattleObjectModuleAccessorE") LINKABLE;
		Vector3f get_parent_doyle_joint_pos(u64/*module_accessor*/) asm("_ZN3app27WeaponSpecializer_JackDoyle26get_parent_doyle_joint_posERNS_26BattleObjectModuleAccessorE") LINKABLE;
	}
}
