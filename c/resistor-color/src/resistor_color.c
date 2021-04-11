#include "resistor_color.h"

uint16_t color_code(resistor_band_t c){
	return c;
}


int * colors(){

	int *res= malloc(WHITE + 1);

	for (int index = BLACK; index <= WHITE; ++index) {
	   res[index] = index; 
	}	

	return res;
}