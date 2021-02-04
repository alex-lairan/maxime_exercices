#include "armstrong_numbers.h"

#include <math.h>
#include <stdlib.h>

bool is_armstrong_number(unsigned int n) {
  unsigned int p = digit_count(n) ;
  unsigned int* array = number_to_digits(n, p);

  array_power_item(array, p, p);

  unsigned int sum = array_sum(array, p);

  free(array);
  return sum == n;
}

unsigned int* number_to_digits(unsigned int n, unsigned int p) {
  unsigned int* tableau = malloc(p * sizeof(int));

   for (unsigned int i = 0; i < p; ++i) {
    tableau[i]= (unsigned int)(n / pow(10, i)) % 10;
   }

   return tableau; 
}

void array_power_item(unsigned int* array, unsigned int size, unsigned int power) {
  for(unsigned int i = 0; i < size; i++) {
    array[i] = pow(array[i],power);
  }
}

unsigned int array_sum(unsigned int* array, unsigned int size) {
  unsigned int sum = 0;
  for(unsigned int i = 0; i < size; i++) {
    sum=sum+array[i];
  }
  return sum;
}

unsigned int digit_count(unsigned int n) {
  int i = 0;
  
  while(n >= 1) {
    n = n / 10;
    ++i;
  }

  return i;
}
