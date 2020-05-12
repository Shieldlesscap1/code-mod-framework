#pragma once

#include "../../useful/useful.h"
namespace app::specializer {
    namespace FighterSpecializer_Brave {
		u64 lot_critical(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave12lot_criticalERNS_7FighterE") LINKABLE;
		u64 alloc_log_group(u64 /*module_accessor*/, int) asm("_ZN3app24FighterSpecializer_Brave15alloc_log_groupERNS_26BattleObjectModuleAccessorEi") LINKABLE;
		u64 call_final_module(app::Fighter *, int) asm("_ZN3app24FighterSpecializer_Brave17call_final_moduleERNS_7FighterEi") LINKABLE;
		u64 check_flying_ceil(u64 /*module_accessor*/, float, float, float) asm("_ZN3app24FighterSpecializer_Brave17check_flying_ceilERNS_26BattleObjectModuleAccessorEfff") LINKABLE;
		u64 adjust_flying_ceil(u64 /*module_accessor*/, float, float, float) asm("_ZN3app24FighterSpecializer_Brave18adjust_flying_ceilERNS_26BattleObjectModuleAccessorEfff") LINKABLE;
		Vector2f get_flying_pos(void) asm("_ZN3app24FighterSpecializer_Brave21get_flying_target_posEv") LINKABLE;
		u64 special_lw_close_window(app::Fighter *, bool, bool, bool) asm("_ZN3app24FighterSpecializer_Brave23special_lw_close_windowERNS_7FighterEbbb") LINKABLE;
		u64 special_lw_open_command(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave23special_lw_open_commandERNS_7FighterE") LINKABLE;
		u64 special_lw_select_index(app::Fighter *, int) asm("_ZN3app24FighterSpecializer_Brave23special_lw_select_indexERNS_7FighterEi") LINKABLE;
		u64 final_module_hit_success(void) asm("_ZN3app24FighterSpecializer_Brave24final_module_hit_successEv") LINKABLE;
		u64 special_lw_cursor_decide(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave24special_lw_cursor_decideERNS_7FighterE") LINKABLE;
		int special_lw_active_command(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave25special_lw_active_commandERNS_7FighterE") LINKABLE;
		u64 special_lw_decide_command(app::Fighter *, int /*FighterBraveSpecialLwCommand*/, int) asm("_ZN3app24FighterSpecializer_Brave25special_lw_decide_commandERNS_7FighterENS_28FighterBraveSpecialLwCommandEi") LINKABLE;
		float get_special_lw_param_frame(u64 /*module_accessor*/, u64) asm("_ZN3app24FighterSpecializer_Brave26get_special_lw_param_frameERNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
		u64 special_lw_deactive_command(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave27special_lw_deactive_commandERNS_7FighterE") LINKABLE;
		u64 special_lw_on_start_command(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave27special_lw_on_start_commandERNS_7FighterE") LINKABLE;
		u64 special_lw_start_cursor_blink(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave29special_lw_start_cursor_blinkERNS_7FighterE") LINKABLE;
		int get_special_lw_command_sp_cost(u64 /*module_accessor*/, int /*FighterBraveSpecialLwCommand*/, bool) asm("_ZN3app24FighterSpecializer_Brave30get_special_lw_command_sp_costERKNS_26BattleObjectModuleAccessorENS_28FighterBraveSpecialLwCommandEb") LINKABLE;
		u64 special_lw_select_command(app::Fighter *) asm("_ZN3app24FighterSpecializer_Brave31special_lw_start_select_commandERNS_7FighterE") LINKABLE;
		int get_special_lw_command_from_index(app::Fighter *, int) asm("_ZN3app24FighterSpecializer_Brave33get_special_lw_command_from_indexERNS_7FighterEi") LINKABLE;
		u64 get_special_lw_various_motion_kind(u64 /*module_accessor*/, int /*FighterBraveSpecialLwVariousKind*/, bool) asm("_ZN3app24FighterSpecializer_Brave34get_special_lw_various_motion_kindERNS_26BattleObjectModuleAccessorENS_32FighterBraveSpecialLwVariousKindEb") LINKABLE;
		u64 get_special_lw_various_kind2command(int /*FighterBraveSpecialLwVariousKind*/) asm("_ZN3app24FighterSpecializer_Brave35get_special_lw_various_kind2commandENS_32FighterBraveSpecialLwVariousKindE") LINKABLE;
		u64 add_sp(app::Fighter *, float) asm("_ZN3app24FighterSpecializer_Brave6add_spERNS_7FighterEf") LINKABLE;
		u64 set_sp(app::Fighter *, float, bool) asm("_ZN3app24FighterSpecializer_Brave6set_spERNS_7FighterEfb") LINKABLE;
    }
}
