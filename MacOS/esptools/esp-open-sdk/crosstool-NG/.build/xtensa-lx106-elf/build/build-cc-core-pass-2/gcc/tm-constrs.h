/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/xtensa.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 71 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_simm12b (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 76 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_simm8 (ival)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 83 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_b4const_or_zero (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 89 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_b4constu (ival)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 95 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(ival >= -32 && ival <= 95));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 101 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_simm8x256 (ival)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 106 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(ival == -1 || (ival >= 1 && ival <= 15)));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 112 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(xtensa_mask_immediate (ival)));
}
static inline bool
satisfies_constraint_R (rtx op)
{
  return ((GET_CODE (op) == MEM) && (
#line 123 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(smalloffset_mem_p (op)))) || ((GET_CODE (op) == REG) && (
#line 125 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(reload_in_progress
			&& REGNO (op) >= FIRST_PSEUDO_REGISTER)));
}
static inline bool
satisfies_constraint_T (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 131 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(!TARGET_CONST16 && constantpool_mem_p (op)));
}
static inline bool
satisfies_constraint_U (rtx op)
{
  return ((GET_CODE (op) == MEM) && (
#line 136 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(! constantpool_mem_p (op)))) || ((GET_CODE (op) == REG) && (
#line 138 "/Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gcc-4.8.2/gcc/config/xtensa/constraints.md"
(reload_in_progress
			&& REGNO (op) >= FIRST_PSEUDO_REGISTER)));
}
#endif /* tm-constrs.h */
