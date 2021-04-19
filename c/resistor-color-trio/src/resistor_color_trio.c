#include "resistor_color_trio.h"

static const resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                           GREEN, BLUE, VIOLET, GREY, WHITE};



resistor_value_t color_code(resistor_band_t* c){


   resistor_value_t actual;
   char s1[20];
   char s2[20];
   uint8_t numbers_of_zeros;

   actual.unit = OHMS;
   snprintf(s1, sizeof (s1), "%d", bands[c[0]]);
   
   if(bands[c[1]] != 0){
      snprintf(s2, sizeof (s2), "%d", bands[c[1]]);
      strcat(s1, s2); //2 char   
      numbers_of_zeros = bands[c[2]]; 
   }else{
      numbers_of_zeros = bands[c[2]] + 1; 
   }
   actual.value = atoi(s1);   

   if(numbers_of_zeros == 3){   
      actual.unit = KILOOHMS;      
      return actual;
   } else if(numbers_of_zeros > 3){
         numbers_of_zeros -=  3;
         actual.unit = KILOOHMS;      
   }

   for(int i = 0; i < numbers_of_zeros ; i++){
            printf("%d\n", actual.value);
            actual.value = actual.value * 10;           
         }

   printf("%d\n", actual.value);
   return actual;
}