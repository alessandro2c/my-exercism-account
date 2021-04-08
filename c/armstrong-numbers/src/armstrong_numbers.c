#include "armstrong_numbers.h"

static int num_places (int n) {
    if (n == 0) return 1;
    return floor (log10 (abs (n))) + 1;
}

bool is_armstrong_number(int candidate)
{
   int number_of_digits = num_places(candidate);

   int length = snprintf( NULL, 0, "%d", candidate );
   char* snum = malloc( length + 1 );
   snprintf( snum, length + 1, "%d", candidate );


   int armstrong_candidate = 0;

   for (int i = 0; i < length; i++) {
   	int digit = snum[i] - '0';
   	armstrong_candidate +=  pow(digit, number_of_digits);
   }

   free(snum);

   return (candidate == armstrong_candidate);
}


