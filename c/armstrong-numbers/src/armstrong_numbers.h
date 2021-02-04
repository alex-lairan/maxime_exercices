#ifndef ARMSTRONG_NUMBERS
#define ARMSTRONG_NUMBERS

#include <stdbool.h>

bool is_armstrong_number(unsigned int candidate);
unsigned int digit_count(unsigned int n);
unsigned int array_sum(unsigned int* array, unsigned int size);
void array_power_item(unsigned int* array, unsigned int size, unsigned int power);
unsigned int* number_to_digits(unsigned int n, unsigned int p);

#endif
