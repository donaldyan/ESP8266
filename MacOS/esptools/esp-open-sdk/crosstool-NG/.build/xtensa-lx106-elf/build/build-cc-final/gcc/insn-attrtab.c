/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_min_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 22:  /* movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 3;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return 3;
        }
      else if (which_alternative == 9)
        {
	  return 6;
        }
      else
        {
	  return 3;
        }

    case 19:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return 3;
        }
      else if (which_alternative == 9)
        {
	  return 6;
        }
      else
        {
	  return 3;
        }

    case 21:  /* movqi_internal */
    case 20:  /* movhi_internal */
    case 1:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 51:  /* *unspec_nop */
    case 38:  /* zero_cost_loop_end */
      return 0;

    case 47:  /* return */
      return 2;

    case 28:  /* rotrsi3 */
    case 27:  /* rotlsi3 */
      return 6;

    case 26:  /* lshrsi3 */
    case 25:  /* ashrsi3 */
    case 24:  /* ashlsi3_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 49:  /* eh_return */
    case 23:  /* movdf_internal */
    case 18:  /* movdi_internal */
      return 1;

    default:
      return 3;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 22:  /* movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 3;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return 3;
        }
      else if (which_alternative == 9)
        {
	  return 6;
        }
      else
        {
	  return 3;
        }

    case 19:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return 3;
        }
      else if (which_alternative == 9)
        {
	  return 6;
        }
      else
        {
	  return 3;
        }

    case 21:  /* movqi_internal */
    case 20:  /* movhi_internal */
    case 1:  /* addsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 51:  /* *unspec_nop */
    case 38:  /* zero_cost_loop_end */
      return 0;

    case 47:  /* return */
      return 2;

    case 28:  /* rotrsi3 */
    case 27:  /* rotlsi3 */
      return 6;

    case 26:  /* lshrsi3 */
    case 25:  /* ashrsi3 */
    case 24:  /* ashlsi3_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 49:  /* eh_return */
    case 23:  /* movdf_internal */
    case 18:  /* movdi_internal */
      return 1;

    default:
      return 3;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_mode
get_attr_mode (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 22:  /* movsf_internal */
    case 40:  /* movsfcc_internal0 */
      return MODE_SF;

    case 20:  /* movhi_internal */
      return MODE_HI;

    case 21:  /* movqi_internal */
      return MODE_QI;

    case 29:  /* *btrue */
    case 30:  /* *bfalse */
    case 31:  /* *ubtrue */
    case 32:  /* *ubfalse */
    case 33:  /* *bittrue */
    case 34:  /* *bitfalse */
    case 35:  /* *masktrue */
    case 36:  /* *maskfalse */
    case 37:  /* zero_cost_loop_start */
    case 38:  /* zero_cost_loop_end */
    case 41:  /* jump */
    case 42:  /* indirect_jump_internal */
    case 43:  /* tablejump_internal */
    case 44:  /* call_internal */
    case 45:  /* call_value_internal */
    case 47:  /* return */
    case 48:  /* nop */
    case 51:  /* *unspec_nop */
    case 52:  /* *memory_barrier */
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 18:  /* movdi_internal */
    case 23:  /* movdf_internal */
    case 49:  /* eh_return */
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 22:  /* movsf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FARITH;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FSTORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return TYPE_FARITH;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 21:  /* movqi_internal */
    case 20:  /* movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_RSR;
        }
      else
        {
	  return TYPE_WSR;
        }

    case 19:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x3c0))
        {
	  return TYPE_MOVE;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_RSR;
        }
      else
        {
	  return TYPE_WSR;
        }

    case 6:  /* mulhisi3 */
    case 7:  /* umulhisi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MUL16;
        }
      else
        {
	  return TYPE_MAC16;
        }

    case 14:  /* zero_extendhisi2 */
    case 15:  /* zero_extendqisi2 */
    case 16:  /* extendhisi2_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 46:  /* entry */
      return TYPE_ENTRY;

    case 5:  /* mulsi3 */
      return TYPE_MUL32;

    case 48:  /* nop */
    case 51:  /* *unspec_nop */
      return TYPE_NOP;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 27:  /* rotlsi3 */
    case 28:  /* rotrsi3 */
      return TYPE_MULTI;

    case 39:  /* movsicc_internal0 */
    case 40:  /* movsfcc_internal0 */
    case 50:  /* set_frame_ptr */
      return TYPE_MOVE;

    case 44:  /* call_internal */
    case 45:  /* call_value_internal */
      return TYPE_CALL;

    case 29:  /* *btrue */
    case 30:  /* *bfalse */
    case 31:  /* *ubtrue */
    case 32:  /* *ubfalse */
    case 33:  /* *bittrue */
    case 34:  /* *bitfalse */
    case 35:  /* *masktrue */
    case 36:  /* *maskfalse */
    case 37:  /* zero_cost_loop_start */
    case 38:  /* zero_cost_loop_end */
    case 41:  /* jump */
    case 42:  /* indirect_jump_internal */
    case 43:  /* tablejump_internal */
    case 47:  /* return */
      return TYPE_JUMP;

    case 18:  /* movdi_internal */
    case 23:  /* movdf_internal */
    case 49:  /* eh_return */
    case 52:  /* *memory_barrier */
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

EXPORTED_CONST int length_unit_log = 0;
