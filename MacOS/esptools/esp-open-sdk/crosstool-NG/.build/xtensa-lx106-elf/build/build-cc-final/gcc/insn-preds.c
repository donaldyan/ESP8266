/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

int
add_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_INT) && (
#line 22 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_simm8 (INTVAL (op))
			 || xtensa_simm8x256 (INTVAL (op))))) || (register_operand (op, mode));
}

int
addsubx_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 28 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(INTVAL (op) == 2
		    || INTVAL (op) == 4
		    || INTVAL (op) == 8));
}

int
arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_INT) && (
#line 34 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_simm8 (INTVAL (op))))) || (register_operand (op, mode));
}

int
nonimmed_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((memory_operand (op, mode)) && (
#line 40 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(!constantpool_mem_p (op)))) || (register_operand (op, mode));
}

int
mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 46 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(!constantpool_mem_p (op)));
}

int
constantpool_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 50 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(constantpool_mem_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
mask_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_INT) && (
#line 54 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_mask_immediate (INTVAL (op))))) || (register_operand (op, mode));
}

int
extui_fldsz_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 59 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_mask_immediate ((1 << INTVAL (op)) - 1)));
}

int
sext_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 62 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(TARGET_SEXT)) ? (nonimmed_operand (op, mode)) : (mem_operand (op, mode));
}

int
sext_fldsz_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 68 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(INTVAL (op) >= 8 && INTVAL (op) <= 23));
}

int
lsbitnum_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 72 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(BITS_BIG_ENDIAN
		    ? (INTVAL (op) == BITS_PER_WORD - 1)
		    : (INTVAL (op) == 0)));
}

int
branch_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_INT) && (
#line 78 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_b4const_or_zero (INTVAL (op))))) || (register_operand (op, mode));
}

int
ubranch_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_INT) && (
#line 83 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_b4constu (INTVAL (op))))) || (register_operand (op, mode));
}

static inline int
call_insn_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 88 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
{
  if ((GET_CODE (op) == REG)
      && (op != arg_pointer_rtx)
      && ((REGNO (op) < FRAME_POINTER_REGNUM)
	  || (REGNO (op) > LAST_VIRTUAL_REGISTER)))
    return true;

  if (CONSTANT_ADDRESS_P (op))
    {
      /* Direct calls only allowed to static functions with PIC.  */
      if (flag_pic)
	{
	  tree callee, callee_sec, caller_sec;

	  if (GET_CODE (op) != SYMBOL_REF
	      || !SYMBOL_REF_LOCAL_P (op) || SYMBOL_REF_EXTERNAL_P (op))
	    return false;

	  /* Don't attempt a direct call if the callee is known to be in
	     a different section, since there's a good chance it will be
	     out of range.  */

	  if (flag_function_sections
	      || DECL_ONE_ONLY (current_function_decl))
	    return false;
	  caller_sec = DECL_SECTION_NAME (current_function_decl);
	  callee = SYMBOL_REF_DECL (op);
	  if (callee)
	    {
	      if (DECL_ONE_ONLY (callee))
		return false;
	      callee_sec = DECL_SECTION_NAME (callee);
	      if (((caller_sec == NULL_TREE) ^ (callee_sec == NULL_TREE))
		  || (caller_sec != NULL_TREE
		      && strcmp (TREE_STRING_POINTER (caller_sec),
				 TREE_STRING_POINTER (callee_sec)) != 0))
		return false;
	    }
	  else if (caller_sec != NULL_TREE)
	    return false;
	}
      return true;
    }

  return false;
}

int
call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST:
    case SYMBOL_REF:
    case REG:
      break;
    default:
      return false;
    }
  return 
(call_insn_operand_1 (op, mode));
}

int
move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((register_operand (op, mode)) || ((memory_operand (op, mode)) && (
#line 139 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(!constantpool_mem_p (op)
			    || GET_MODE_SIZE (mode) % UNITS_PER_WORD == 0)))) || (((GET_CODE (op) == CONST_INT) && (
#line 142 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(GET_MODE_CLASS (mode) == MODE_INT
			    && xtensa_simm12b (INTVAL (op))))) || ((GET_CODE (op) == CONST_INT || GET_CODE (op) == CONST_DOUBLE || GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (
#line 145 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(TARGET_CONST16 && CONSTANT_P (op)
			    && GET_MODE_SIZE (mode) % UNITS_PER_WORD == 0))));
}

static inline int
const_float_1_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 151 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
{
  REAL_VALUE_TYPE d;
  REAL_VALUE_FROM_CONST_DOUBLE (d, op);
  return REAL_VALUES_EQUAL (d, dconst1);
}

int
const_float_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
(const_float_1_operand_1 (op, mode)));
}

int
fpmem_offset_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 159 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(xtensa_mem_offset (INTVAL (op), SFmode)));
}

int
branch_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LT:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
ubranch_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LTU:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
boolean_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
xtensa_cstoresi_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case GT:
    case GE:
    case LT:
    case LE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
tls_symbol_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 175 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/predicates.md"
(SYMBOL_REF_TLS_MODEL (op) != 0))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      return CONSTRAINT_B;
    case 'C':
      return CONSTRAINT_C;
    case 'D':
      return CONSTRAINT_D;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      return CONSTRAINT_P;
    case 'R':
      return CONSTRAINT_R;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'W':
      return CONSTRAINT_W;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'd':
      return CONSTRAINT_d;
    case 'f':
      return CONSTRAINT_f;
    case 'q':
      return CONSTRAINT_q;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_a: return TARGET_WINDOWED_ABI ? GR_REGS : AR_REGS;
    case CONSTRAINT_b: return TARGET_BOOLEANS ? BR_REGS : NO_REGS;
    case CONSTRAINT_d: return TARGET_DENSITY ? AR_REGS: NO_REGS;
    case CONSTRAINT_f: return TARGET_HARD_FLOAT ? FP_REGS : NO_REGS;
    case CONSTRAINT_q: return TARGET_WINDOWED_ABI ? SP_REG : NO_REGS;
    case CONSTRAINT_A: return TARGET_MAC16 ? ACC_REG : NO_REGS;
    case CONSTRAINT_B: return TARGET_SEXT ? GR_REGS : NO_REGS;
    case CONSTRAINT_C: return TARGET_MUL16 ? GR_REGS: NO_REGS;
    case CONSTRAINT_D: return TARGET_DENSITY ? (TARGET_WINDOWED_ABI ? GR_REGS : AR_REGS) : NO_REGS;
    case CONSTRAINT_W: return TARGET_CONST16 ? GR_REGS: NO_REGS;
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_K: return satisfies_constraint_K (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_P: return satisfies_constraint_P (op);
    case CONSTRAINT_R: return satisfies_constraint_R (op);
    case CONSTRAINT_T: return satisfies_constraint_T (op);
    case CONSTRAINT_U: return satisfies_constraint_U (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 71 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_simm12b (ival));

    case CONSTRAINT_J:
      return 
#line 76 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_simm8 (ival));

    case CONSTRAINT_K:
      return 
#line 83 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_b4const_or_zero (ival));

    case CONSTRAINT_L:
      return 
#line 89 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_b4constu (ival));

    case CONSTRAINT_M:
      return 
#line 95 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(ival >= -32 && ival <= 95);

    case CONSTRAINT_N:
      return 
#line 101 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_simm8x256 (ival));

    case CONSTRAINT_O:
      return 
#line 106 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(ival == -1 || (ival >= 1 && ival <= 15));

    case CONSTRAINT_P:
      return 
#line 112 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_mask_immediate (ival));

    default: break;
    }
  return false;
}

