#include "resistor_color.h"
#include <stdio.h>

static resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                           GREEN, BLUE, VIOLET, GREY, WHITE};


resistor_band_t color_code(resistor_band_t c){
	return bands[c];
}


resistor_band_t* colors(){

	return bands;
}
