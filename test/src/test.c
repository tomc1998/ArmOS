#include <stdio.h>

#include "num_to_ascii_test.h"
#include "test.h"

void do_tests() {
  int (*tests[NUM_TESTS])(char*) = {num_to_ascii_test};
  int ii = 0;
  char test_name[TEST_NAME_LEN]; 

  printf("\n\n");
  for (; ii < NUM_TESTS; ++ii) {
    if ((*tests[ii])(&test_name[0])) { /* Test failed? */
      printf("Test number %d, %s, failed\n", ii, &test_name[0]);
    }
    else {
      printf("Test number %d, %s, succeeded\n", ii, &test_name[0]);
    }
  }
  printf("\n\n");
}

