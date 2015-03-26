/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,

  CODE_FOR_addsi3 = 1,
#define CODE_FOR_addsf3 CODE_FOR_nothing
  CODE_FOR_subsi3 = 3,
#define CODE_FOR_subsf3 CODE_FOR_nothing
#define CODE_FOR_mulsi3_highpart CODE_FOR_nothing
#define CODE_FOR_umulsi3_highpart CODE_FOR_nothing
  CODE_FOR_mulsi3 = 5,
  CODE_FOR_mulhisi3 = 6,
  CODE_FOR_umulhisi3 = 7,
#define CODE_FOR_muladdhisi CODE_FOR_nothing
#define CODE_FOR_mulsubhisi CODE_FOR_nothing
#define CODE_FOR_mulsf3 CODE_FOR_nothing
#define CODE_FOR_fmasf4 CODE_FOR_nothing
#define CODE_FOR_fnmasf4 CODE_FOR_nothing
#define CODE_FOR_divsi3 CODE_FOR_nothing
#define CODE_FOR_udivsi3 CODE_FOR_nothing
#define CODE_FOR_divsf3 CODE_FOR_nothing
#define CODE_FOR_modsi3 CODE_FOR_nothing
#define CODE_FOR_umodsi3 CODE_FOR_nothing
#define CODE_FOR_sqrtsf2 CODE_FOR_nothing
  CODE_FOR_abssi2 = 8,
#define CODE_FOR_abssf2 CODE_FOR_nothing
#define CODE_FOR_sminsi3 CODE_FOR_nothing
#define CODE_FOR_uminsi3 CODE_FOR_nothing
#define CODE_FOR_smaxsi3 CODE_FOR_nothing
#define CODE_FOR_umaxsi3 CODE_FOR_nothing
  CODE_FOR_clzsi2 = 9,
  CODE_FOR_negsi2 = 10,
#define CODE_FOR_negsf2 CODE_FOR_nothing
  CODE_FOR_andsi3 = 11,
  CODE_FOR_iorsi3 = 12,
  CODE_FOR_xorsi3 = 13,
  CODE_FOR_zero_extendhisi2 = 14,
  CODE_FOR_zero_extendqisi2 = 15,
  CODE_FOR_extendhisi2_internal = 16,
#define CODE_FOR_extendqisi2_internal CODE_FOR_nothing
#define CODE_FOR_extv_internal CODE_FOR_nothing
  CODE_FOR_extzv_internal = 17,
#define CODE_FOR_fix_truncsfsi2 CODE_FOR_nothing
#define CODE_FOR_fixuns_truncsfsi2 CODE_FOR_nothing
#define CODE_FOR_floatsisf2 CODE_FOR_nothing
#define CODE_FOR_floatunssisf2 CODE_FOR_nothing
  CODE_FOR_movdi_internal = 18,
  CODE_FOR_movsi_internal = 19,
  CODE_FOR_movhi_internal = 20,
  CODE_FOR_movqi_internal = 21,
  CODE_FOR_movsf_internal = 22,
  CODE_FOR_movdf_internal = 23,
  CODE_FOR_ashlsi3_internal = 24,
  CODE_FOR_ashrsi3 = 25,
  CODE_FOR_lshrsi3 = 26,
  CODE_FOR_rotlsi3 = 27,
  CODE_FOR_rotrsi3 = 28,
  CODE_FOR_zero_cost_loop_start = 37,
  CODE_FOR_zero_cost_loop_end = 38,
  CODE_FOR_movsicc_internal0 = 39,
#define CODE_FOR_movsicc_internal1 CODE_FOR_nothing
  CODE_FOR_movsfcc_internal0 = 40,
#define CODE_FOR_movsfcc_internal1 CODE_FOR_nothing
#define CODE_FOR_seq_sf CODE_FOR_nothing
#define CODE_FOR_slt_sf CODE_FOR_nothing
#define CODE_FOR_sle_sf CODE_FOR_nothing
#define CODE_FOR_suneq_sf CODE_FOR_nothing
#define CODE_FOR_sunlt_sf CODE_FOR_nothing
#define CODE_FOR_sunle_sf CODE_FOR_nothing
#define CODE_FOR_sunordered_sf CODE_FOR_nothing
  CODE_FOR_jump = 41,
  CODE_FOR_indirect_jump_internal = 42,
  CODE_FOR_tablejump_internal = 43,
  CODE_FOR_call_internal = 44,
  CODE_FOR_call_value_internal = 45,
  CODE_FOR_entry = 46,
  CODE_FOR_return = 47,
  CODE_FOR_nop = 48,
  CODE_FOR_eh_return = 49,
  CODE_FOR_set_frame_ptr = 50,
#define CODE_FOR_get_thread_pointersi CODE_FOR_nothing
#define CODE_FOR_set_thread_pointersi CODE_FOR_nothing
#define CODE_FOR_tls_func CODE_FOR_nothing
#define CODE_FOR_tls_arg CODE_FOR_nothing
#define CODE_FOR_tls_call CODE_FOR_nothing
#define CODE_FOR_sync_lock_releasesi CODE_FOR_nothing
#define CODE_FOR_sync_compare_and_swapsi CODE_FOR_nothing
#define CODE_FOR_mulsidi3 CODE_FOR_nothing
#define CODE_FOR_umulsidi3 CODE_FOR_nothing
  CODE_FOR_ctzsi2 = 53,
  CODE_FOR_ffssi2 = 54,
  CODE_FOR_one_cmplsi2 = 55,
  CODE_FOR_extendhisi2 = 56,
  CODE_FOR_extendqisi2 = 57,
#define CODE_FOR_extv CODE_FOR_nothing
  CODE_FOR_extzv = 58,
  CODE_FOR_movdi = 59,
  CODE_FOR_movsi = 61,
  CODE_FOR_movhi = 62,
  CODE_FOR_movqi = 63,
  CODE_FOR_reloadhi_literal = 64,
  CODE_FOR_reloadqi_literal = 65,
  CODE_FOR_movsf = 66,
  CODE_FOR_movdf = 67,
  CODE_FOR_movmemsi = 69,
  CODE_FOR_ashlsi3 = 70,
  CODE_FOR_cbranchsi4 = 71,
#define CODE_FOR_cbranchsf4 CODE_FOR_nothing
  CODE_FOR_cstoresi4 = 72,
#define CODE_FOR_cstoresf4 CODE_FOR_nothing
  CODE_FOR_movsicc = 73,
  CODE_FOR_movsfcc = 74,
  CODE_FOR_indirect_jump = 75,
  CODE_FOR_tablejump = 76,
  CODE_FOR_sym_PLT = 77,
  CODE_FOR_call = 78,
  CODE_FOR_call_value = 79,
  CODE_FOR_prologue = 80,
  CODE_FOR_epilogue = 81,
#define CODE_FOR_nonlocal_goto CODE_FOR_nothing
  CODE_FOR_sym_TPOFF = 84,
  CODE_FOR_sym_DTPOFF = 85,
  CODE_FOR_memory_barrier = 86,
#define CODE_FOR_sync_compare_and_swaphi CODE_FOR_nothing
#define CODE_FOR_sync_compare_and_swapqi CODE_FOR_nothing
#define CODE_FOR_sync_lock_test_and_sethi CODE_FOR_nothing
#define CODE_FOR_sync_lock_test_and_setqi CODE_FOR_nothing
#define CODE_FOR_sync_andhi CODE_FOR_nothing
#define CODE_FOR_sync_iorhi CODE_FOR_nothing
#define CODE_FOR_sync_xorhi CODE_FOR_nothing
#define CODE_FOR_sync_addhi CODE_FOR_nothing
#define CODE_FOR_sync_subhi CODE_FOR_nothing
#define CODE_FOR_sync_nandhi CODE_FOR_nothing
#define CODE_FOR_sync_andqi CODE_FOR_nothing
#define CODE_FOR_sync_iorqi CODE_FOR_nothing
#define CODE_FOR_sync_xorqi CODE_FOR_nothing
#define CODE_FOR_sync_addqi CODE_FOR_nothing
#define CODE_FOR_sync_subqi CODE_FOR_nothing
#define CODE_FOR_sync_nandqi CODE_FOR_nothing
#define CODE_FOR_sync_old_andhi CODE_FOR_nothing
#define CODE_FOR_sync_old_iorhi CODE_FOR_nothing
#define CODE_FOR_sync_old_xorhi CODE_FOR_nothing
#define CODE_FOR_sync_old_addhi CODE_FOR_nothing
#define CODE_FOR_sync_old_subhi CODE_FOR_nothing
#define CODE_FOR_sync_old_nandhi CODE_FOR_nothing
#define CODE_FOR_sync_old_andqi CODE_FOR_nothing
#define CODE_FOR_sync_old_iorqi CODE_FOR_nothing
#define CODE_FOR_sync_old_xorqi CODE_FOR_nothing
#define CODE_FOR_sync_old_addqi CODE_FOR_nothing
#define CODE_FOR_sync_old_subqi CODE_FOR_nothing
#define CODE_FOR_sync_old_nandqi CODE_FOR_nothing
#define CODE_FOR_sync_new_andhi CODE_FOR_nothing
#define CODE_FOR_sync_new_iorhi CODE_FOR_nothing
#define CODE_FOR_sync_new_xorhi CODE_FOR_nothing
#define CODE_FOR_sync_new_addhi CODE_FOR_nothing
#define CODE_FOR_sync_new_subhi CODE_FOR_nothing
#define CODE_FOR_sync_new_nandhi CODE_FOR_nothing
#define CODE_FOR_sync_new_andqi CODE_FOR_nothing
#define CODE_FOR_sync_new_iorqi CODE_FOR_nothing
#define CODE_FOR_sync_new_xorqi CODE_FOR_nothing
#define CODE_FOR_sync_new_addqi CODE_FOR_nothing
#define CODE_FOR_sync_new_subqi CODE_FOR_nothing
#define CODE_FOR_sync_new_nandqi CODE_FOR_nothing
  LAST_INSN_CODE
};

#endif /* GCC_INSN_CODES_H */