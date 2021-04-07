#ifndef ARMSTRONG_NUMBERS
#define ARMSTRONG_NUMBERS

#include <stdbool.h>
#include <limits.h>
#include <math.h>
#include <stddef.h>
#include <string.h>

char* itoa(int val, int base);
int numPlaces (int n);
bool is_armstrong_number(int candidate);

#endif
