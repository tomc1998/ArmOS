#include "raise.h"
#include "log.h"
int raise (int sig) {
  print("Raising something\n");
  return sig==0?sig:0;
}

