#include "resistor_color.h"
#include <stdio.h>

static const resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                           GREEN, BLUE, VIOLET, GREY, WHITE};


int color_code(resistor_band_t c){
	return bands[c];
}


const resistor_band_t* colors(void){

	return bands;
}
