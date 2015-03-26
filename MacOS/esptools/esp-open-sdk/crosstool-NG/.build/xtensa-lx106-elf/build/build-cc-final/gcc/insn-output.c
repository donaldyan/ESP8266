/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_1[] = {
  "add.n\t%0, %1, %2",
  "addi.n\t%0, %1, %d2",
  "add\t%0, %1, %2",
  "addi\t%0, %1, %d2",
  "addmi\t%0, %1, %x2",
};

static const char * const output_6[] = {
  "mul16s\t%0, %1, %2",
  "mul.aa.ll\t%1, %2",
};

static const char * const output_7[] = {
  "mul16u\t%0, %1, %2",
  "umul.aa.ll\t%1, %2",
};

static const char * const output_11[] = {
  "extui\t%0, %1, 0, %K2",
  "and\t%0, %1, %2",
};

static const char * const output_14[] = {
  "extui\t%0, %1, 0, 16",
  "l16ui\t%0, %1",
};

static const char * const output_15[] = {
  "extui\t%0, %1, 0, 8",
  "l8ui\t%0, %1",
};

static const char * const output_16[] = {
  "sext\t%0, %1, 15",
  "l16si\t%0, %1",
};

static const char *
output_17 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 700 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  int shift;
  if (BITS_BIG_ENDIAN)
    shift = (32 - (INTVAL (operands[2]) + INTVAL (operands[3]))) & 0x1f;
  else
    shift = INTVAL (operands[3]) & 0x1f;
  operands[3] = GEN_INT (shift);
  return "extui\t%0, %1, %3, %2";
}
}

static const char * const output_19[] = {
  "movi.n\t%0, %x1",
  "mov.n\t%0, %1",
  "mov.n\t%0, %1",
  "%v1l32i.n\t%0, %1",
  "%v0s32i.n\t%1, %0",
  "%v0s32i.n\t%1, %0",
  "mov\t%0, %1",
  "movsp\t%0, %1",
  "movi\t%0, %x1",
  "const16\t%0, %t1\n\tconst16\t%0, %b1",
  "%v1l32r\t%0, %1",
  "%v1l32i\t%0, %1",
  "%v0s32i\t%1, %0",
  "rsr\t%0, ACCLO",
  "wsr\t%1, ACCLO",
};

static const char * const output_20[] = {
  "movi.n\t%0, %x1",
  "mov.n\t%0, %1",
  "mov\t%0, %1",
  "movi\t%0, %x1",
  "%v1l16ui\t%0, %1",
  "%v0s16i\t%1, %0",
  "rsr\t%0, ACCLO",
  "wsr\t%1, ACCLO",
};

static const char * const output_21[] = {
  "movi.n\t%0, %x1",
  "mov.n\t%0, %1",
  "mov\t%0, %1",
  "movi\t%0, %x1",
  "%v1l8ui\t%0, %1",
  "%v0s8i\t%1, %0",
  "rsr\t%0, ACCLO",
  "wsr\t%1, ACCLO",
};

static const char * const output_22[] = {
  "mov.s\t%0, %1",
  "%v1lsi\t%0, %1",
  "%v0ssi\t%1, %0",
  "mov.n\t%0, %1",
  "%v1l32i.n\t%0, %1",
  "%v0s32i.n\t%1, %0",
  "mov\t%0, %1",
  "wfr\t%0, %1",
  "rfr\t%0, %1",
  "const16\t%0, %t1\n\tconst16\t%0, %b1",
  "%v1l32r\t%0, %1",
  "%v1l32i\t%0, %1",
  "%v0s32i\t%1, %0",
};

static const char * const output_24[] = {
  "slli\t%0, %1, %R2",
  "ssl\t%2\n\tsll\t%0, %1",
};

static const char * const output_25[] = {
  "srai\t%0, %1, %R2",
  "ssr\t%2\n\tsra\t%0, %1",
};

static const char *
output_26 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1085 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (which_alternative == 0)
    {
      if ((INTVAL (operands[2]) & 0x1f) < 16)
        return "srli\t%0, %1, %R2";
      else
      	return "extui\t%0, %1, %R2, %L2";
    }
  return "ssr\t%2\n\tsrl\t%0, %1";
}
}

static const char * const output_27[] = {
  "ssai\t%L2\n\tsrc\t%0, %1, %1",
  "ssl\t%2\n\tsrc\t%0, %1, %1",
};

static const char * const output_28[] = {
  "ssai\t%R2\n\tsrc\t%0, %1, %1",
  "ssr\t%2\n\tsrc\t%0, %1, %1",
};

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1160 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_branch (false, which_alternative == 0, operands);
}
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1175 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_branch (true, which_alternative == 0, operands);
}
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1190 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_branch (false, which_alternative == 0, operands);
}
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1205 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_branch (true, which_alternative == 0, operands);
}
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1225 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_bit_branch (false, which_alternative == 0, operands);
}
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1243 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_bit_branch (true, which_alternative == 0, operands);
}
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1259 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  switch (GET_CODE (operands[3]))
    {
    case EQ:		return "bnone\t%0, %1, %2";
    case NE:		return "bany\t%0, %1, %2";
    default:		gcc_unreachable ();
    }
}
}

static const char *
output_36 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1280 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  switch (GET_CODE (operands[3]))
    {
    case EQ:		return "bany\t%0, %1, %2";
    case NE:		return "bnone\t%0, %1, %2";
    default:		gcc_unreachable ();
    }
}
}

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1320 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
    xtensa_emit_loop_end (insn, operands);
    return "";
}
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1391 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_movcc (which_alternative == 1, false, false, operands);
}
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1421 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_movcc ((which_alternative & 1) == 1,
			    which_alternative >= 2, false, operands);
}
}

static const char *
output_44 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1547 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_call (0, operands);
}
}

static const char *
output_45 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1575 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return xtensa_emit_call (1, operands);
}
}

static const char *
output_47 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1596 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return TARGET_WINDOWED_ABI ?
      (TARGET_DENSITY ? "retw.n" : "retw") :
      (TARGET_DENSITY ? "ret.n" : "ret");
}
}

static const char *
output_48 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1627 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  return (TARGET_DENSITY ? "nop.n" : "nop");
}
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1683 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
{
  if (frame_pointer_needed)
    return "mov\ta7, sp";
  return "";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=D,D,a,a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%d,d,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    add_operand,
    "d,O,r,J,N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    addsubx_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=C,A",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mask_operand,
    "P,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmed_operand,
    "r,U",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmed_operand,
    "r,U",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=B,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sext_operand,
    "r,U",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    extui_fldsz_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmed_operand,
    "=a,W,a,a,U",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,i,T,U,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "=D,D,D,D,R,R,a,q,a,W,a,a,U,*a,*A",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "M,D,d,R,D,d,r,r,I,i,T,U,r,*A,*r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "=D,D,a,a,a,U,*a,*A",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "M,d,r,I,U,r,*A,*r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "=D,D,a,a,a,U,*a,*A",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "M,d,r,I,U,r,*A,*r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "=f,f,U,D,D,R,a,f,a,W,a,a,U",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "f,U,f,d,R,d,r,r,f,iF,T,U,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "=a,W,a,a,U",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "r,iF,T,U,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "J,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    branch_operand,
    "K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    branch_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ubranch_operand,
    "L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ubranch_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "J,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    boolean_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    boolean_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    branch_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a,a,f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,0,f,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r,0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    branch_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    call_insn_operand,
    "nir",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "nir",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmed_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    constantpool_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constantpool_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmed_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmed_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    move_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    xtensa_cstoresi_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:144 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_1 },
#else
    { 0, output_1, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3 },
    &operand_data[1],
    3,
    3,
    0,
    5,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:159 */
  {
    "*addx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "addx%3\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    4,
    4,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:183 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3 },
    &operand_data[4],
    3,
    3,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:193 */
  {
    "*subx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subx%3\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    4,
    4,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:244 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mull\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3 },
    &operand_data[8],
    3,
    3,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:254 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhisi3 },
    &operand_data[11],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:268 */
  {
    "umulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulhisi3 },
    &operand_data[11],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:432 */
  {
    "abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_abssi2 },
    &operand_data[4],
    2,
    2,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:466 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nsau\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzsi2 },
    &operand_data[4],
    2,
    2,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:506 */
  {
    "negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsi2 },
    &operand_data[4],
    2,
    2,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:538 */
  {
    "andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3 },
    &operand_data[14],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:550 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3 },
    &operand_data[8],
    3,
    3,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:560 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3 },
    &operand_data[8],
    3,
    3,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:573 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhisi2 },
    &operand_data[17],
    2,
    2,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:584 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqisi2 },
    &operand_data[19],
    2,
    2,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:610 */
  {
    "extendhisi2_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_16 },
#else
    { 0, output_16, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2_internal },
    &operand_data[21],
    2,
    2,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:694 */
  {
    "extzv_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_17 },
#else
    { 0, 0, output_17 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzv_internal },
    &operand_data[23],
    4,
    4,
    0,
    1,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:772 */
  {
    "movdi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi_internal },
    &operand_data[27],
    2,
    2,
    0,
    5,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:802 */
  {
    "movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_19 },
#else
    { 0, output_19, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi_internal },
    &operand_data[29],
    2,
    2,
    0,
    15,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:837 */
  {
    "movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_20 },
#else
    { 0, output_20, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi_internal },
    &operand_data[31],
    2,
    2,
    0,
    8,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:865 */
  {
    "movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_21 },
#else
    { 0, output_21, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi_internal },
    &operand_data[33],
    2,
    2,
    0,
    8,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:937 */
  {
    "movsf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_22 },
#else
    { 0, output_22, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf_internal },
    &operand_data[35],
    2,
    2,
    0,
    13,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1011 */
  {
    "movdf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf_internal },
    &operand_data[37],
    2,
    2,
    0,
    5,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1056 */
  {
    "ashlsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_24 },
#else
    { 0, output_24, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3_internal },
    &operand_data[39],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1068 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_25 },
#else
    { 0, output_25, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3 },
    &operand_data[39],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1080 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_26 },
#else
    { 0, 0, output_26 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3 },
    &operand_data[39],
    3,
    3,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1099 */
  {
    "rotlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_27 },
#else
    { 0, output_27, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rotlsi3 },
    &operand_data[39],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1111 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_28 },
#else
    { 0, output_28, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rotrsi3 },
    &operand_data[39],
    3,
    3,
    0,
    2,
    2
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1152 */
  {
    "*btrue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    { 0 },
    &operand_data[42],
    4,
    4,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1167 */
  {
    "*bfalse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    { 0 },
    &operand_data[42],
    4,
    4,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1182 */
  {
    "*ubtrue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    { 0 },
    &operand_data[46],
    4,
    4,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1197 */
  {
    "*ubfalse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    { 0 },
    &operand_data[46],
    4,
    4,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1214 */
  {
    "*bittrue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    { 0 },
    &operand_data[50],
    4,
    4,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1232 */
  {
    "*bitfalse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    { 0 },
    &operand_data[50],
    4,
    4,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1250 */
  {
    "*masktrue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    { 0 },
    &operand_data[54],
    4,
    4,
    0,
    1,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1271 */
  {
    "*maskfalse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_36 },
#else
    { 0, 0, output_36 },
#endif
    { 0 },
    &operand_data[54],
    4,
    4,
    0,
    1,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1298 */
  {
    "zero_cost_loop_start",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "loopnez\t%0, %l1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_cost_loop_start },
    &operand_data[58],
    2,
    2,
    1,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1312 */
  {
    "zero_cost_loop_end",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_38 },
#else
    { 0, 0, output_38 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_cost_loop_end },
    &operand_data[44],
    1,
    1,
    0,
    0,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1383 */
  {
    "movsicc_internal0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsicc_internal0 },
    &operand_data[60],
    5,
    5,
    0,
    2,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1413 */
  {
    "movsfcc_internal0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsfcc_internal0 },
    &operand_data[65],
    5,
    5,
    0,
    4,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1461 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "j\t%l0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_jump },
    &operand_data[44],
    1,
    1,
    0,
    0,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1483 */
  {
    "indirect_jump_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jx\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump_internal },
    &operand_data[5],
    1,
    1,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1510 */
  {
    "tablejump_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jx\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump_internal },
    &operand_data[55],
    2,
    2,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1542 */
  {
    "call_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_44 },
#else
    { 0, 0, output_44 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_internal },
    &operand_data[70],
    2,
    2,
    0,
    1,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1569 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_45 },
#else
    { 0, 0, output_45 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_internal },
    &operand_data[72],
    3,
    3,
    0,
    1,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1582 */
  {
    "entry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "entry\tsp, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_entry },
    &operand_data[26],
    1,
    1,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1592 */
  {
    "return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_47 },
#else
    { 0, 0, output_47 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1624 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_48 },
#else
    { 0, 0, output_48 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1652 */
  {
    "eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_return },
    &operand_data[75],
    1,
    2,
    0,
    1,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1680 */
  {
    "set_frame_ptr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_50 },
#else
    { 0, 0, output_50 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_set_frame_ptr },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1702 */
  {
    "*unspec_nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1824 */
  {
    "*memory_barrier",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "memw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[77],
    1,
    1,
    1,
    0,
    1
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:475 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ctzsi2 },
    &operand_data[78],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:489 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ffssi2 },
    &operand_data[78],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:515 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplsi2 },
    &operand_data[78],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:598 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2 },
    &operand_data[79],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:621 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqisi2 },
    &operand_data[81],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:680 */
  {
    "extzv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzv },
    &operand_data[83],
    4,
    4,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:757 */
  {
    "movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi },
    &operand_data[87],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:772 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[89],
    0,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:793 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi },
    &operand_data[91],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:828 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi },
    &operand_data[93],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:856 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi },
    &operand_data[95],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:884 */
  {
    "reloadhi_literal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reloadhi_literal },
    &operand_data[97],
    3,
    3,
    0,
    1,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:884 */
  {
    "reloadqi_literal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_reloadqi_literal },
    &operand_data[100],
    3,
    3,
    0,
    1,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:918 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf },
    &operand_data[103],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:996 */
  {
    "movdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf },
    &operand_data[105],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1011 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[107],
    0,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1032 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movmemsi },
    &operand_data[109],
    4,
    4,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1047 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3 },
    &operand_data[113],
    3,
    3,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1128 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4 },
    &operand_data[116],
    4,
    4,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1331 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi4 },
    &operand_data[120],
    4,
    4,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1359 */
  {
    "movsicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsicc },
    &operand_data[124],
    4,
    4,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1371 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsfcc },
    &operand_data[128],
    4,
    4,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1470 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump },
    &operand_data[132],
    1,
    1,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1492 */
  {
    "tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump },
    &operand_data[133],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1523 */
  {
    "sym_PLT",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sym_PLT },
    &operand_data[135],
    1,
    1,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1528 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call },
    &operand_data[136],
    2,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1554 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value },
    &operand_data[138],
    3,
    3,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1608 */
  {
    "prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1616 */
  {
    "epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1652 */
  {
    "epilogue+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[141],
    0,
    2,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1693 */
  {
    "sym_TPOFF-1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1713 */
  {
    "sym_TPOFF",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sym_TPOFF },
    &operand_data[135],
    1,
    1,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1718 */
  {
    "sym_DTPOFF",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sym_DTPOFF },
    &operand_data[135],
    1,
    1,
    0,
    0,
    0
  },
  /* /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md:1815 */
  {
    "memory_barrier",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_memory_barrier },
    &operand_data[0],
    0,
    0,
    2,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
