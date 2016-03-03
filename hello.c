#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
  if (n > 0) {
    return n * factorial(n-1);
  }
  else {
    return 1;
  }
}

int main(int argc, char **argv) {
  if (120 != factorial(5)) {
    printf("testing failed.\n");
  }
  else {
    printf("testing passed.\n");
  }

  return 0;
}
