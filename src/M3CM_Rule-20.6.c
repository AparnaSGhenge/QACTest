/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.6.c
 *
 * Rule-20.6: Tokens that look like a preprocessing directive shall not occur
 *            within a macro argument
 *
 * Implemented by message(s):
 *   0853   [U] Macro arguments contain a sequence of tokens that has the
 *          form of a preprocessing directive.
 *
 *
 *//* PRQA S 0853 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

int16_t s16a_2006;
int16_t s16b_2006;
int16_t s16c_2006;

#define SUM(A,B,C) ((A) + (B) + (C))

extern int16_t rule_2006 (void)
{

  s16a_2006 = SUM(5,
#ifdef SW                                                             /* expect: 0853 */
              s16b_2006,
#else                                                                 /* expect: 0853 */
              s16c_2006,
#endif                                                                /* expect: 0853 */
              0);

  return 1;
}


