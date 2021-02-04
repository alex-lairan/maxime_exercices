#include "fibonacci.h"

#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci(unsigned int n) {
  if (n == 0) { return 0; }
  if (n == 1) { return 1; }

  return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(int argc, char** argv) {
  if(argc != 2) { return 1; }

  int number = atoi(argv[1]);
  printf("fib(%d) => %u\n", number, fibonacci(number));

  return 0;
}
