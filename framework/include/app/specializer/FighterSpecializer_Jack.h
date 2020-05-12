#pragma once

#include "../../useful/useful.h"
namespace app {
    namespace FighterSpecializer_Jack {
		u64 add_rebel_gauge(u64 /*module_accessor*/, int /*get_player_number*/, float)	asm("_ZN3app23FighterSpecializer_Jack15add_rebel_gaugeERNS_26BattleObjectModuleAccessorENS_14FighterEntryIDEf") LINKABLE;
		bool is_cut_in_effect(u64 /*module_accessor*/) asm("_ZN3app23FighterSpecializer_Jack16is_cut_in_effectERNS_26BattleObjectModuleAccessorE") LINKABLE;
		u64 call_final_module(app::Fighter *, int) asm("_ZN3app23FighterSpecializer_Jack17call_final_moduleERNS_7FighterEi") LINKABLE;
		u64 set_cut_in_effect(u64 /*module_accessor*/) asm("_ZN3app23FighterSpecializer_Jack17set_cut_in_effectERNS_26BattleObjectModuleAccessorE") LINKABLE;
		u64 set_doyle_suspend(u64 /*module_accessor*/, bool) asm("_ZN3app23FighterSpecializer_Jack17set_doyle_suspendERNS_26BattleObjectModuleAccessorEb") LINKABLE;
		u64 final_module_hit_success(void) asm("_ZN3app23FighterSpecializer_Jack24final_module_hit_successEv") LINKABLE;
		u64 check_doyle_summon_dispatch(u64 /*module_accessor*/, bool, bool) asm("_ZN3app23FighterSpecializer_Jack27check_doyle_summon_dispatchERNS_26BattleObjectModuleAccessorEbb") LINKABLE;
	}
}
