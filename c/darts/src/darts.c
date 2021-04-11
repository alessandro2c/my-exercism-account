#include "darts.h"

// la distanza fra un punto e il centro degli assi è la (x^2+y^2)^(1/2)

static double calculate_distance_from_0(double x, double y){
  return sqrt((pow(x,2)+pow(y,2)));
}

uint8_t score(coordinate_t landing_coords) {

  double res =calculate_distance_from_0(landing_coords.x, landing_coords.y);
  if(res <= 1){
    return 10;

  }else if(res>1 && res<=5){

    return 5;
  }else if(res>5 && res<=10){

    return 1;

  }
  
  return 0;
}