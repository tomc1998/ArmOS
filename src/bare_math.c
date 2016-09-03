/** 
 *  \file bare_math.c
 *  Implements function in bare_math.h
 */
#include "bare_math.h"

unsigned powui(unsigned a, unsigned b) {
  unsigned ii = 0;
  unsigned total = 1;
  for (; ii < b; ++ii) {
    total *= a;
  }
  return total;
}
