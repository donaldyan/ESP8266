/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
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



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_60 (rtx, rtx *);
extern rtx gen_split_68 (rtx, rtx *);
extern rtx gen_split_82 (rtx, rtx *);
extern rtx gen_split_83 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L369;
    case DImode:
      goto L362;
    case HImode:
      goto L364;
    case QImode:
      goto L365;
    case SFmode:
      goto L366;
    case DFmode:
      goto L367;
    default:
      break;
    }
 L138: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L271;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L302;
    }
 L335: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L336;

 L369: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG)
    goto L372;
 L361: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2;
    }
 L363: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L94;
    }
  goto L138;

 L372: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 0))
    {
    case 1L:
      goto L309;
    case 0L:
      goto L325;
    case 7L:
      goto L330;
    default:
      break;
    }
  goto L361;

 L309: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 2)
    goto L310;
  x1 = XEXP (x0, 0);
  goto L361;

 L310: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[0] = x2;
      return 46;  /* entry */
    }
  x1 = XEXP (x0, 0);
  goto L361;

 L325: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L326;
  x1 = XEXP (x0, 0);
  goto L361;

 L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L327;
    }
  x1 = XEXP (x0, 0);
  goto L361;

 L327: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 49;  /* eh_return */
    }
  x1 = XEXP (x0, 0);
  goto L361;

 L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 1)
    goto L331;
  x1 = XEXP (x0, 0);
  goto L361;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 50;  /* set_frame_ptr */
    }
  x1 = XEXP (x0, 0);
  goto L361;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L375;
  x1 = XEXP (x0, 0);
  goto L363;

 L375: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3;
    case MINUS:
      goto L15;
    case MULT:
      goto L27;
    case ABS:
      goto L46;
    case CLZ:
      goto L50;
    case NEG:
      goto L54;
    case AND:
      goto L58;
    case IOR:
      goto L63;
    case XOR:
      goto L68;
    case ZERO_EXTEND:
      goto L73;
    case SIGN_EXTEND:
      goto L81;
    case ZERO_EXTRACT:
      goto L85;
    case ASHIFT:
      goto L115;
    case ASHIFTRT:
      goto L120;
    case LSHIFTRT:
      goto L125;
    case ROTATE:
      goto L130;
    case ROTATERT:
      goto L135;
    case IF_THEN_ELSE:
      goto L252;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L363;

 L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L394;
  x1 = XEXP (x0, 0);
  goto L363;

 L394: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L9;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L9: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L10;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L10: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (addsubx_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L11;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 2;  /* *addx */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (add_operand (x2, SImode))
    {
      operands[2] = x2;
      return 1;  /* addsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L15: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L396;
  x1 = XEXP (x0, 0);
  goto L363;

 L396: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L21;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L16;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L21: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L22;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L22: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (addsubx_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L23;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 4;  /* *subx */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L16: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 3;  /* subsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L27: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L398;
  x1 = XEXP (x0, 0);
  goto L363;

 L398: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L33;
    case ZERO_EXTEND:
      goto L40;
    case REG:
    case SUBREG:
      goto L397;
    default:
      x1 = XEXP (x0, 0);
      goto L363;
   }
 L397: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L28;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L33: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L34;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L34: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L35;
  x1 = XEXP (x0, 0);
  goto L363;

 L35: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      return 6;  /* mulhisi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L40: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L41;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L41: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L42;
  x1 = XEXP (x0, 0);
  goto L363;

 L42: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      return 7;  /* umulhisi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L28: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 5;  /* mulsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L46: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 8;  /* abssi2 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L50: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 9;  /* clzsi2 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L54: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 10;  /* negsi2 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L59;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L59: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (mask_operand (x2, SImode))
    {
      operands[2] = x2;
      return 11;  /* andsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L63: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L64;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L64: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 12;  /* iorsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L68: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L69;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L69: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 13;  /* xorsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L73: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L400;
    case QImode:
      goto L401;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L400: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x2, HImode))
    {
      operands[1] = x2;
      return 14;  /* zero_extendhisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L401: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x2, QImode))
    {
      operands[1] = x2;
      return 15;  /* zero_extendqisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L81: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (sext_operand (x2, HImode))
    {
      operands[1] = x2;
      return 16;  /* extendhisi2_internal */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L85: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L86;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L86: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (extui_fldsz_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L87;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L87: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      return 17;  /* extzv_internal */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L116;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 24;  /* ashlsi3_internal */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L121;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 25;  /* ashrsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L126;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 26;  /* lshrsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L131;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 27;  /* rotlsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L136;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      return 28;  /* rotrsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (branch_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L253;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L254;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L255;
  x1 = XEXP (x0, 0);
  goto L363;

 L255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L256;
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return 39;  /* movsicc_internal0 */
    }
  x1 = XEXP (x0, 0);
  goto L363;

 L94: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L95;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L95: ATTRIBUTE_UNUSED_LABEL
  if (
#line 805 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (SImode, operands)))
    {
      return 19;  /* movsi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L362: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L90;
    }
  goto L138;

 L90: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L91;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L91: ATTRIBUTE_UNUSED_LABEL
  if (
#line 775 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode)))
    {
      return 18;  /* movdi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L364: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L98;
    }
  goto L138;

 L98: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L99;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L99: ATTRIBUTE_UNUSED_LABEL
  if (
#line 840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (HImode, operands)))
    {
      return 20;  /* movhi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L365: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L102;
    }
  goto L138;

 L102: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L103;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L103: ATTRIBUTE_UNUSED_LABEL
  if (
#line 868 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (QImode, operands)))
    {
      return 21;  /* movqi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L366: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L106;
    }
 L368: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L259;
    }
  goto L138;

 L106: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L107;
    }
  x1 = XEXP (x0, 0);
  goto L368;

 L107: ATTRIBUTE_UNUSED_LABEL
  if (
#line 940 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(((register_operand (operands[0], SFmode)
     || register_operand (operands[1], SFmode))
    && !(FP_REG_P (xt_true_regnum (operands[0]))
         && (constantpool_mem_p (operands[1]) || CONSTANT_P (operands[1]))))))
    {
      return 22;  /* movsf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L368;

 L259: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L260;
  x1 = XEXP (x0, 0);
  goto L138;

 L260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (branch_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L261;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L262;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L263;
  x1 = XEXP (x0, 0);
  goto L138;

 L263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L264;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      return 40;  /* movsfcc_internal0 */
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L367: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L110;
    }
  goto L138;

 L110: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L111;
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L111: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1014 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(register_operand (operands[0], DFmode)
   || register_operand (operands[1], DFmode)))
    {
      return 23;  /* movdf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L138;

 L271: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 42;  /* indirect_jump_internal */
    }
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L140;
    case LABEL_REF:
      goto L268;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L335;

 L140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (branch_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L141;
    }
  if (ubranch_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L159;
    }
 L176: ATTRIBUTE_UNUSED_LABEL
  if (boolean_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L177;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L142;
    }
  goto L176;

 L142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (branch_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L143;
    }
  goto L176;

 L143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L144;
    case PC:
      goto L153;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L176;

 L144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L145;

 L145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 29;  /* *btrue */
    }
  x2 = XEXP (x1, 0);
  goto L176;

 L153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L154;
  x2 = XEXP (x1, 0);
  goto L176;

 L154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 30;  /* *bfalse */

 L159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L160;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (ubranch_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L161;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L162;
    case PC:
      goto L171;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L335;

 L162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L163;

 L163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 31;  /* *ubtrue */
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L172;
  x1 = XEXP (x0, 0);
  goto L335;

 L172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 32;  /* *ubfalse */

 L177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L402;
  x1 = XEXP (x0, 0);
  goto L335;

 L402: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTRACT:
      goto L178;
    case AND:
      goto L202;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L335;

 L178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L179;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L179: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L180;
  x1 = XEXP (x0, 0);
  goto L335;

 L180: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (arith_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L181;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L182;
  x1 = XEXP (x0, 0);
  goto L335;

 L182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L183;
    case PC:
      goto L195;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L335;

 L183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L184;

 L184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 33;  /* *bittrue */
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L196;
  x1 = XEXP (x0, 0);
  goto L335;

 L196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 34;  /* *bitfalse */

 L202: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L203;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L203: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L204;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L205;
  x1 = XEXP (x0, 0);
  goto L335;

 L205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L206;
    case PC:
      goto L217;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L335;

 L206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L207;

 L207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 35;  /* *masktrue */
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L218;
  x1 = XEXP (x0, 0);
  goto L335;

 L218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  return 36;  /* *maskfalse */

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 41;  /* jump */

 L302: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L303;
  x1 = XEXP (x0, 0);
  goto L335;

 L303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM)
    goto L304;
  x1 = XEXP (x0, 0);
  goto L335;

 L304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L305;
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L306;

 L306: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 45;  /* call_value_internal */
    }
  x1 = XEXP (x0, 0);
  goto L335;

 L336: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 11)
    goto L337;
  goto ret0;

 L337: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 52;  /* *memory_barrier */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L1;
    case PARALLEL:
      goto L358;
    case CALL:
      goto L287;
    case CONST_INT:
      goto L359;
    case UNSPEC:
      goto L360;
    default:
     break;
   }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_1 (x0, insn, pnum_clobbers);

 L358: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L220;
  goto ret0;

 L220: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L318;
    case CALL:
      goto L281;
    case RETURN:
      goto L313;
    default:
     break;
   }
  goto ret0;

 L318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 0)
    goto L319;
  if (GET_CODE (x2) == PC)
    goto L275;
 L293: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L294;
    }
  goto ret0;

 L319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 6)
    goto L320;
  x2 = XEXP (x1, 0);
  goto L293;

 L320: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L321;
    }
  x2 = XEXP (x1, 0);
  goto L293;

 L321: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L322;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L293;

 L322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      return 49;  /* eh_return */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L293;

 L275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L276;
    }
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L223;
  goto ret0;

 L276: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L277;
  goto ret0;

 L277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L278;
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 43;  /* tablejump_internal */

 L223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case EQ:
      goto L224;
    case NE:
      goto L239;
    default:
     break;
   }
  goto ret0;

 L224: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L225;
    }
  goto ret0;

 L225: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L226;
  goto ret0;

 L226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L227;
  goto ret0;

 L227: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L228;

 L228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L229;
  goto ret0;

 L229: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L230;
  goto ret0;

 L230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L231;
  goto ret0;

 L231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L232;
  goto ret0;

 L232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L233;
  goto ret0;

 L233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 37;  /* zero_cost_loop_start */
    }
  goto ret0;

 L239: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 19)
    goto L240;
  goto ret0;

 L240: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L241;
  goto ret0;

 L241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L242;
  goto ret0;

 L242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  goto L243;

 L243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L244;
  goto ret0;

 L244: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L245;
  goto ret0;

 L245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L246;
  goto ret0;

 L246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L247;
  goto ret0;

 L247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 19)
    goto L248;
  goto ret0;

 L248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    {
      return 38;  /* zero_cost_loop_end */
    }
  goto ret0;

 L294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L295;
  goto ret0;

 L295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MEM)
    goto L296;
  goto ret0;

 L296: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L297;
    }
  goto ret0;

 L297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L298;

 L298: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L299;
  goto ret0;

 L299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 0)
    {
      return 45;  /* call_value_internal */
    }
  goto ret0;

 L281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM)
    goto L282;
  goto ret0;

 L282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L283;
    }
  goto ret0;

 L283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L284;

 L284: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L285;
  goto ret0;

 L285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 0)
    {
      return 44;  /* call_internal */
    }
  goto ret0;

 L313: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L314;
  goto ret0;

 L314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 0
      && 
#line 1595 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
((TARGET_WINDOWED_ABI || !xtensa_current_frame_size) && reload_completed))
    {
      return 47;  /* return */
    }
  goto ret0;

 L287: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == MEM)
    goto L288;
  goto ret0;

 L288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L289;
    }
  goto ret0;

 L289: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L290;

 L290: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 44;  /* call_internal */
    }
  goto ret0;

 L359: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0L)
    {
      return 48;  /* nop */
    }
  goto ret0;

 L360: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 2)
    goto L333;
  goto ret0;

 L333: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 51;  /* *unspec_nop */
    }
  goto ret0;
 ret0:
  return -1;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L339;
    case PARALLEL:
      goto L404;
    default:
     break;
   }
  goto ret0;

 L339: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L405;
    case DFmode:
      goto L406;
    case SImode:
      goto L407;
    default:
      break;
    }
  goto ret0;

 L405: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L340;
    }
  goto ret0;

 L340: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L341;
    }
  goto ret0;

 L341: ATTRIBUTE_UNUSED_LABEL
  if (
#line 778 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed))
    {
      return gen_split_60 (insn, operands);
    }
  goto ret0;

 L406: ATTRIBUTE_UNUSED_LABEL
  if (nonimmed_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L344;
    }
  goto ret0;

 L344: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L345;
    }
  goto ret0;

 L345: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1017 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed))
    {
      return gen_split_68 (insn, operands);
    }
  goto ret0;

 L407: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 7)
    goto L356;
  goto ret0;

 L356: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 1)
    goto L357;
  goto ret0;

 L357: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1695 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed && !frame_pointer_needed))
    {
      return gen_split_83 (insn, operands);
    }
  goto ret0;

 L404: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L347;
  goto ret0;

 L347: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L348;
  goto ret0;

 L348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 0)
    goto L349;
  goto ret0;

 L349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC_VOLATILE
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 6)
    goto L350;
  goto ret0;

 L350: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L351;
    }
  goto ret0;

 L351: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L352;
  goto ret0;

 L352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L353;
    }
  goto ret0;

 L353: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1659 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed))
    {
      return gen_split_82 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

