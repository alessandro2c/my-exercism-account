#include "resistor_color_duo.h"
static const resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                           GREEN, BLUE, VIOLET, GREY, WHITE};

uint16_t color_code(resistor_band_t* c){

   char s1[20];
   char s2[20];
   

   snprintf(s1, sizeof (s1), "%d", bands[c[0]]);
   snprintf(s2, sizeof (s2), "%d", bands[c[1]]);

   strcat(s1, s2);
 
   uint16_t res = atoi(s1);

	return res;
}


