/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "dfp.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "basic-block.h"
#include "target.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:144 */
rtx
gen_addsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:183 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:244 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:254 */
rtx
gen_mulhisi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:268 */
rtx
gen_umulhisi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:432 */
rtx
gen_abssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:466 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:506 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:538 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:550 */
rtx
gen_iorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:560 */
rtx
gen_xorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:573 */
rtx
gen_zero_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:584 */
rtx
gen_zero_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:610 */
rtx
gen_extendhisi2_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:694 */
rtx
gen_extzv_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:772 */
rtx
gen_movdi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:802 */
rtx
gen_movsi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:837 */
rtx
gen_movhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:865 */
rtx
gen_movqi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:937 */
rtx
gen_movsf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1011 */
rtx
gen_movdf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1056 */
rtx
gen_ashlsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1068 */
rtx
gen_ashrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1080 */
rtx
gen_lshrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1099 */
rtx
gen_rotlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1111 */
rtx
gen_rotrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1298 */
rtx
gen_zero_cost_loop_start (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	operand0,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	constm1_rtx))));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1312 */
rtx
gen_zero_cost_loop_end (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	19),
	constm1_rtx))));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1383 */
rtx
gen_movsicc_internal0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand1,
		const0_rtx),
	operand2,
	operand3));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1413 */
rtx
gen_movsfcc_internal0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand4), VOIDmode,
		operand1,
		const0_rtx),
	operand2,
	operand3));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1461 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1483 */
rtx
gen_indirect_jump_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1510 */
rtx
gen_tablejump_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1542 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (VOIDmode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 0)));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1569 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (VOIDmode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 0)));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1582 */
rtx
gen_entry (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	2));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1592 */
rtx
gen_return (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		ret_rtx,
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	0))));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1624 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1652 */
rtx
gen_eh_return (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	0),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	6)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1680 */
rtx
gen_set_frame_ptr (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	1));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:475 */
rtx
gen_ctzsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 479 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx temp = gen_reg_rtx (SImode);
  emit_insn (gen_negsi2 (temp, operands[1]));
  emit_insn (gen_andsi3 (temp, temp, operands[1]));
  emit_insn (gen_clzsi2 (temp, temp));
  emit_insn (gen_negsi2 (temp, temp));
  emit_insn (gen_addsi3 (operands[0], temp, GEN_INT (31)));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:489 */
rtx
gen_ffssi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 493 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx temp = gen_reg_rtx (SImode);
  emit_insn (gen_negsi2 (temp, operands[1]));
  emit_insn (gen_andsi3 (temp, temp, operands[1]));
  emit_insn (gen_clzsi2 (temp, temp));
  emit_insn (gen_negsi2 (temp, temp));
  emit_insn (gen_addsi3 (operands[0], temp, GEN_INT (32)));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:515 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 519 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx temp = gen_reg_rtx (SImode);
  emit_insn (gen_movsi (temp, constm1_rtx));
  emit_insn (gen_xorsi3 (operands[0], temp, operands[1]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:598 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 602 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (sext_operand (operands[1], HImode))
    emit_insn (gen_extendhisi2_internal (operands[0], operands[1]));
  else
    xtensa_extend_reg (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:621 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 625 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (TARGET_SEXT)
    emit_insn (gen_extendqisi2_internal (operands[0], operands[1]));
  else
    xtensa_extend_reg (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:680 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 686 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (!extui_fldsz_operand (operands[2], SImode))
    FAIL;
  emit_insn (gen_extzv_internal (operands[0], operands[1],
				 operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:757 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 761 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (CONSTANT_P (operands[1]) && !TARGET_CONST16)
    operands[1] = force_const_mem (DImode, operands[1]);

  if (!register_operand (operands[0], DImode)
      && !register_operand (operands[1], DImode))
    operands[1] = force_reg (DImode, operands[1]);

  operands[1] = xtensa_copy_incoming_a7 (operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:772 */
extern rtx gen_split_60 (rtx, rtx *);
rtx
gen_split_60 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 781 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  xtensa_split_operand_pair (operands, SImode);
  if (reg_overlap_mentioned_p (operands[0], operands[3]))
    {
      rtx tmp;
      tmp = operands[0], operands[0] = operands[1], operands[1] = tmp;
      tmp = operands[2], operands[2] = operands[3], operands[3] = tmp;
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:793 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 797 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (xtensa_emit_move_sequence (operands, SImode))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:828 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 832 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (xtensa_emit_move_sequence (operands, HImode))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:856 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 860 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (xtensa_emit_move_sequence (operands, QImode))
    DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:884 */
rtx
gen_reloadhi_literal (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 889 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx lit, scratch;
  unsigned word_off, byte_off;

  if (MEM_P (operands[1]))
    {
      lit = operands[1];
      word_off = 0;
      byte_off = 0;
    }
  else
    {
      gcc_assert (GET_CODE (operands[1]) == SUBREG);
      lit = SUBREG_REG (operands[1]);
      word_off = SUBREG_BYTE (operands[1]) & ~(UNITS_PER_WORD - 1);
      byte_off = SUBREG_BYTE (operands[1]) - word_off;
    }

  lit = adjust_address (lit, SImode, word_off);
  scratch = operands[2];
  emit_insn (gen_movsi (scratch, lit));
  emit_insn (gen_movhi (operands[0],
			    gen_rtx_SUBREG (HImode, scratch, byte_off)));

  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:884 */
rtx
gen_reloadqi_literal (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 889 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx lit, scratch;
  unsigned word_off, byte_off;

  if (MEM_P (operands[1]))
    {
      lit = operands[1];
      word_off = 0;
      byte_off = 0;
    }
  else
    {
      gcc_assert (GET_CODE (operands[1]) == SUBREG);
      lit = SUBREG_REG (operands[1]);
      word_off = SUBREG_BYTE (operands[1]) & ~(UNITS_PER_WORD - 1);
      byte_off = SUBREG_BYTE (operands[1]) - word_off;
    }

  lit = adjust_address (lit, SImode, word_off);
  scratch = operands[2];
  emit_insn (gen_movsi (scratch, lit));
  emit_insn (gen_movqi (operands[0],
			    gen_rtx_SUBREG (QImode, scratch, byte_off)));

  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:918 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 922 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (!TARGET_CONST16 && CONSTANT_P (operands[1]))
    operands[1] = force_const_mem (SFmode, operands[1]);

  if ((!register_operand (operands[0], SFmode)
       && !register_operand (operands[1], SFmode))
      || (FP_REG_P (xt_true_regnum (operands[0]))
	  && !(reload_in_progress | reload_completed)
	  && (constantpool_mem_p (operands[1])
	      || CONSTANT_P (operands[1]))))
    operands[1] = force_reg (SFmode, operands[1]);

  operands[1] = xtensa_copy_incoming_a7 (operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:996 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1000 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (CONSTANT_P (operands[1]) && !TARGET_CONST16)
    operands[1] = force_const_mem (DFmode, operands[1]);

  if (!register_operand (operands[0], DFmode)
      && !register_operand (operands[1], DFmode))
    operands[1] = force_reg (DFmode, operands[1]);

  operands[1] = xtensa_copy_incoming_a7 (operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1011 */
extern rtx gen_split_68 (rtx, rtx *);
rtx
gen_split_68 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1020 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  xtensa_split_operand_pair (operands, SFmode);
  if (reg_overlap_mentioned_p (operands[0], operands[3]))
    {
      rtx tmp;
      tmp = operands[0], operands[0] = operands[1], operands[1] = tmp;
      tmp = operands[2], operands[2] = operands[3], operands[3] = tmp;
    }
}
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1032 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1038 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (!xtensa_expand_block_move (operands))
    FAIL;
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1047 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1052 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  operands[1] = xtensa_copy_incoming_a7 (operands[1]);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1128 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1134 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  xtensa_expand_conditional_branch (operands, SImode);
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2));
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1331 */
rtx
gen_cstoresi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1337 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (!xtensa_expand_scc (operands, SImode))
    FAIL;
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0);
  emit (gen_rtx_fmt_ee (GET_CODE (operand1), VOIDmode,
		operand2,
		operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1359 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1365 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (!xtensa_expand_conditional_move (operands, 0))
    FAIL;
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1371 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1377 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (!xtensa_expand_conditional_move (operands, 1))
    FAIL;
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1470 */
rtx
gen_indirect_jump (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 1474 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx dest = operands[0];
  if (GET_CODE (dest) != REG || GET_MODE (dest) != Pmode)
    operands[0] = copy_to_mode_reg (Pmode, dest);

  emit_jump_insn (gen_indirect_jump_internal (dest));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1492 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1496 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx target = operands[0];
  if (flag_pic)
    {
      /* For PIC, the table entry is relative to the start of the table.  */
      rtx label = gen_reg_rtx (SImode);
      target = gen_reg_rtx (SImode);
      emit_move_insn (label, gen_rtx_LABEL_REF (SImode, operands[1]));
      emit_insn (gen_addsi3 (target, operands[0], label));
    }
  emit_jump_insn (gen_tablejump_internal (target, operands[1]));
  DONE;
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1523 */
rtx
gen_sym_PLT (rtx operand0)
{
  return gen_rtx_CONST (VOIDmode,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	3));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1528 */
rtx
gen_call (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1533 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx addr = XEXP (operands[0], 0);
  if (flag_pic && GET_CODE (addr) == SYMBOL_REF
      && (!SYMBOL_REF_LOCAL_P (addr) || SYMBOL_REF_EXTERNAL_P (addr)))
    addr = gen_sym_PLT (addr);
  if (!call_insn_operand (addr, VOIDmode))
    XEXP (operands[0], 0) = copy_to_mode_reg (Pmode, addr);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (SImode, 0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1554 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1560 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  rtx addr = XEXP (operands[1], 0);
  if (flag_pic && GET_CODE (addr) == SYMBOL_REF
      && (!SYMBOL_REF_LOCAL_P (addr) || SYMBOL_REF_EXTERNAL_P (addr)))
    addr = gen_sym_PLT (addr);
  if (!call_insn_operand (addr, VOIDmode))
    XEXP (operands[1], 0) = copy_to_mode_reg (Pmode, addr);
}
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (SImode, 0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1608 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 1611 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  xtensa_expand_prologue ();
  DONE;
}
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1616 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 1619 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  xtensa_expand_epilogue ();
  DONE;
}
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1652 */
extern rtx gen_split_82 (rtx, rtx *);
rtx
gen_split_82 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 1663 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"

  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_ASHIFT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (2)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	0),
	gen_rtx_ROTATERT (SImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1693 */
extern rtx gen_split_83 (rtx, rtx *);
rtx
gen_split_83 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1697 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"

  emit_insn (gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1713 */
rtx
gen_sym_TPOFF (rtx operand0)
{
  return gen_rtx_CONST (VOIDmode,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	5));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1718 */
rtx
gen_sym_DTPOFF (rtx operand0)
{
  return gen_rtx_CONST (VOIDmode,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	6));
}

/* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1815 */
rtx
gen_memory_barrier (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 1819 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
    (void) operand0;
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	11)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 49:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 45:
    case 44:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 0);
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 49:
      return 0;

    case 45:
    case 44:
      return 1;

    default:
      gcc_unreachable ();
    }
}
