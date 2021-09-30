#include "virtual-sensor.h"
#include <stdlib.h>

float random_value(float min, float max)
{
    float scale = rand()/(float)RAND_MAX;
    return min + scale * (max - min);
}

float read_temperature()
{
   return random_value(0,35);
}

float read_humidity()
{
  return random_value(25,85);
}
