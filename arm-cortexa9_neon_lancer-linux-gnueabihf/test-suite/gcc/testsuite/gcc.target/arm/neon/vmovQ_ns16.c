/* Test the `vmovQ_ns16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vmovQ_ns16 (void)
{
  int16x8_t out_int16x8_t;
  int16_t arg0_int16_t;

  out_int16x8_t = vmovq_n_s16 (arg0_int16_t);
}

/* { dg-final { scan-assembler "vdup\.16\[ 	\]+\[qQ\]\[0-9\]+, (\[rR\]\[0-9\]+|\[dD\]\[0-9\]+\\\[\[0-9\]+\\\])!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */