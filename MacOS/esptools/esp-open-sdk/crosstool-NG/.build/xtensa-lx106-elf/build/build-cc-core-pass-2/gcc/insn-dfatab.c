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
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 22:  /* movsf_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xc12))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 21:  /* movqi_internal */
    case 20:  /* movhi_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x50))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 19:  /* movsi_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x2c08))
        {
	  return 0;
        }
      else if (((1 << which_alternative) & 0xc08))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 16:  /* extendhisi2_internal */
    case 15:  /* zero_extendqisi2 */
    case 14:  /* zero_extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 7:  /* umulhisi3 */
    case 6:  /* mulhisi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 5:  /* mulsi3 */
      return 4;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (! (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || ((cached_type == TYPE_FLOAD) || ((cached_type == TYPE_RSR) || ((cached_type == TYPE_MUL16) || ((cached_type == TYPE_MUL32) || ((cached_type == TYPE_FMADD) || (cached_type == TYPE_FCONV))))))))
        {
	  return 0;
        }
      else if (((cached_type = get_attr_type (insn)) == TYPE_LOAD) || (cached_type == TYPE_FLOAD))
        {
	  return 1;
        }
      else if (cached_type == TYPE_RSR)
        {
	  return 2;
        }
      else if (cached_type == TYPE_MUL16)
        {
	  return 3;
        }
      else if (cached_type == TYPE_MUL32)
        {
	  return 4;
        }
      else if (cached_type == TYPE_FMADD)
        {
	  return 5;
        }
      else if (cached_type == TYPE_FCONV)
        {
	  return 6;
        }
      else
        {
	  return 8;
        }

    default:
      return 0;

    }
}

