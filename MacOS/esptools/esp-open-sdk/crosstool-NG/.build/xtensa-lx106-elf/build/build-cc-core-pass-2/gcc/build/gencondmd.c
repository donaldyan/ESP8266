/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 221 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_MUL32_HIGH",
    __builtin_constant_p 
#line 221 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MUL32_HIGH)
    ? (int) 
#line 221 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MUL32_HIGH)
    : -1 },
#line 1801 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_BOOLEANS",
    __builtin_constant_p 
#line 1801 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_BOOLEANS)
    ? (int) 
#line 1801 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_BOOLEANS)
    : -1 },
#line 840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "xtensa_valid_move (HImode, operands)",
    __builtin_constant_p 
#line 840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (HImode, operands))
    ? (int) 
#line 840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (HImode, operands))
    : -1 },
#line 650 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_SEXT",
    __builtin_constant_p 
#line 650 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_SEXT)
    ? (int) 
#line 650 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_SEXT)
    : -1 },
#line 1348 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 1348 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 1348 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT)
    : -1 },
#line 378 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_HARD_FLOAT_RECIP && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 378 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_RECIP && flag_unsafe_math_optimizations)
    ? (int) 
#line 378 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_RECIP && flag_unsafe_math_optimizations)
    : -1 },
#line 1695 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "reload_completed && !frame_pointer_needed",
    __builtin_constant_p 
#line 1695 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed && !frame_pointer_needed)
    ? (int) 
#line 1695 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed && !frame_pointer_needed)
    : -1 },
#line 1014 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "register_operand (operands[0], DFmode)\n\
   || register_operand (operands[1], DFmode)",
    __builtin_constant_p 
#line 1014 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(register_operand (operands[0], DFmode)
   || register_operand (operands[1], DFmode))
    ? (int) 
#line 1014 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(register_operand (operands[0], DFmode)
   || register_operand (operands[1], DFmode))
    : -1 },
#line 1639 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_WINDOWED_ABI",
    __builtin_constant_p 
#line 1639 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_WINDOWED_ABI)
    ? (int) 
#line 1639 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_WINDOWED_ABI)
    : -1 },
#line 198 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_ADDX",
    __builtin_constant_p 
#line 198 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_ADDX)
    ? (int) 
#line 198 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_ADDX)
    : -1 },
#line 401 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_DIV32",
    __builtin_constant_p 
#line 401 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_DIV32)
    ? (int) 
#line 401 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_DIV32)
    : -1 },
#line 1659 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "reload_completed",
    __builtin_constant_p 
#line 1659 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed)
    ? (int) 
#line 1659 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(reload_completed)
    : -1 },
#line 423 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_HARD_FLOAT_RSQRT && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 423 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_RSQRT && flag_unsafe_math_optimizations)
    ? (int) 
#line 423 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_RSQRT && flag_unsafe_math_optimizations)
    : -1 },
#line 302 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_MAC16",
    __builtin_constant_p 
#line 302 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MAC16)
    ? (int) 
#line 302 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MAC16)
    : -1 },
#line 868 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "xtensa_valid_move (QImode, operands)",
    __builtin_constant_p 
#line 868 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (QImode, operands))
    ? (int) 
#line 868 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (QImode, operands))
    : -1 },
#line 368 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_HARD_FLOAT_DIV",
    __builtin_constant_p 
#line 368 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_DIV)
    ? (int) 
#line 368 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_DIV)
    : -1 },
#line 1840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_RELEASE_SYNC",
    __builtin_constant_p 
#line 1840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_RELEASE_SYNC)
    ? (int) 
#line 1840 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_RELEASE_SYNC)
    : -1 },
#line 435 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_ABS",
    __builtin_constant_p 
#line 435 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_ABS)
    ? (int) 
#line 435 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_ABS)
    : -1 },
#line 1595 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "(TARGET_WINDOWED_ABI || !xtensa_current_frame_size) && reload_completed",
    __builtin_constant_p 
#line 1595 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
((TARGET_WINDOWED_ABI || !xtensa_current_frame_size) && reload_completed)
    ? (int) 
#line 1595 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
((TARGET_WINDOWED_ABI || !xtensa_current_frame_size) && reload_completed)
    : -1 },
#line 413 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_HARD_FLOAT_SQRT",
    __builtin_constant_p 
#line 413 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_SQRT)
    ? (int) 
#line 413 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_HARD_FLOAT_SQRT)
    : -1 },
#line 805 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "xtensa_valid_move (SImode, operands)",
    __builtin_constant_p 
#line 805 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (SImode, operands))
    ? (int) 
#line 805 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(xtensa_valid_move (SImode, operands))
    : -1 },
#line 1916 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_S32C1I",
    __builtin_constant_p 
#line 1916 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_S32C1I)
    ? (int) 
#line 1916 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_S32C1I)
    : -1 },
#line 1735 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_THREADPTR",
    __builtin_constant_p 
#line 1735 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_THREADPTR)
    ? (int) 
#line 1735 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_THREADPTR)
    : -1 },
#line 248 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_MUL32",
    __builtin_constant_p 
#line 248 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MUL32)
    ? (int) 
#line 248 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MUL32)
    : -1 },
#line 492 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_NSA",
    __builtin_constant_p 
#line 492 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_NSA)
    ? (int) 
#line 492 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_NSA)
    : -1 },
#line 457 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_MINMAX",
    __builtin_constant_p 
#line 457 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MINMAX)
    ? (int) 
#line 457 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MINMAX)
    : -1 },
#line 274 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_MUL16 || TARGET_MAC16",
    __builtin_constant_p 
#line 274 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MUL16 || TARGET_MAC16)
    ? (int) 
#line 274 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_MUL16 || TARGET_MAC16)
    : -1 },
#line 940 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "((register_operand (operands[0], SFmode)\n\
     || register_operand (operands[1], SFmode))\n\
    && !(FP_REG_P (xt_true_regnum (operands[0]))\n\
         && (constantpool_mem_p (operands[1]) || CONSTANT_P (operands[1]))))",
    __builtin_constant_p 
#line 940 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(((register_operand (operands[0], SFmode)
     || register_operand (operands[1], SFmode))
    && !(FP_REG_P (xt_true_regnum (operands[0]))
         && (constantpool_mem_p (operands[1]) || CONSTANT_P (operands[1])))))
    ? (int) 
#line 940 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(((register_operand (operands[0], SFmode)
     || register_operand (operands[1], SFmode))
    && !(FP_REG_P (xt_true_regnum (operands[0]))
         && (constantpool_mem_p (operands[1]) || CONSTANT_P (operands[1])))))
    : -1 },
#line 1767 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "TARGET_THREADPTR && HAVE_AS_TLS",
    __builtin_constant_p 
#line 1767 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_THREADPTR && HAVE_AS_TLS)
    ? (int) 
#line 1767 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(TARGET_THREADPTR && HAVE_AS_TLS)
    : -1 },
#line 775 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
  { "register_operand (operands[0], DImode)\n\
   || register_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 775 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode))
    ? (int) 
#line 775 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md"
(register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
