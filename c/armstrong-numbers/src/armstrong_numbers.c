#include "armstrong_numbers.h"

char* itoa(int val, int base){
	
	static char buf[32] = {0};
	
	int i = 30;
	
	for(; val && i ; --i, val /= base)
	
		buf[i] = "0123456789abcdef"[val % base];
	
	return &buf[i+1];
	
}


int numPlaces (int n) {
    if (n < 0) n = (n == INT_MIN) ? INT_MAX : -n;
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    /*      2147483647 is 2^31-1 - add more ifs as needed
       and adjust this final return as well. */
    return 10;
}

// Define the function itself.
bool is_armstrong_number(int candidate)
{
   int number_digits = numPlaces(candidate);

   char* snum;

   // convert 123 to string [buf]
   snum = itoa(candidate, 10); // here 10 means decimal (2 - binary, 16 - hexadecimal)

   int snum_length = strlen(snum);
   
   int i = 0;

   int armstrong_candidate = 0;

   for (; i < snum_length; i++) {
   	// printf("%c\n", string[i]);    /* Print each character of the string. */
   	int x = snum[i] - '0';

   	armstrong_candidate = armstrong_candidate + pow(x, number_digits);

   }

   return (candidate == armstrong_candidate);
}


