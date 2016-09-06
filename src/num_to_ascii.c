/**
 *  \file num_to_ascii.c
 *  Implements some functions to do with num to ascii conversions.
 */

#include "num_to_ascii.h"

/** 
 * Note: This is a fairly slow implementation. Lots of divide by 10s, then
 * reverse in place. Andrei Alexandrescu did a talk about optimisation (called
 * 'writing fast code' IIRC) which would be a good reference to look at to
 * speed this up. One technique could be to start a 1 and multiply by 10 over
 * and over. Another optimisation could be to count the digits first (although
 * make sure to measure performance first!).
 */
void uitoa(unsigned num, char* str) {
  /* Calculate then reverse in place */
  unsigned a = num;
  unsigned index = 0; /* To keep track of when putting numbers into str */
  unsigned ii;        /* Loop index for reverse in place */
  char temp;          /* Used for reverse in place */

  while (a >= 10) {
    str[index] = (char) (48 + a % 10);
    a /= 10;
    ++index;
  }
  str[index] = (char) (48 + a);

  /* Reverse in place. */
  for (ii = 0; ii < index; ++ii) {
    if (index-ii < ii) { /* Nothing left to reverse */
      break;
    }
    temp = str[ii];
    str[ii] = str[index-ii];
    str[index-ii] = temp;
  }
  str[index+1] = 0;
}
