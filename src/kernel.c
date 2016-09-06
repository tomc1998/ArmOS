#include "log.h"
#include "raise.h"
#include "num_to_ascii.h"
#include "bare_math.h"

int kernel_main(void) {
  char str[100];
  print("Hello, world!\n");
  uitoa(powui(10, 2), &str[0]);
  print(str);
  while(1);
	return 0;
}

