#include <string.h>
#include <stdio.h>
#include "num_to_ascii.h"
#include "num_to_ascii_test.h"
#include "test.h"

int num_to_ascii_test(char* name) {
  char test_str[20];
  strncpy(name, __func__, TEST_NAME_LEN);
  uitoa(1, &test_str[0]);
  if (strcmp(test_str, "1") != 0) {
    printf("ERR: uitoa failed!\n");
    return 1;
  }
  uitoa((unsigned)-1, &test_str[0]);
  if (strcmp(test_str, "4294967295") != 0) {
    printf("ERR: uitoa with boundary conditions failed!\n");
    return 1;
  }
  return 0;
}

