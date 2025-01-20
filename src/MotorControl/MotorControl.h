#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include <Arduino.h>
#include "./pins.h"

void setupMotors();
void controlMotors(int pot1Value, int pot2Value);

#endif
