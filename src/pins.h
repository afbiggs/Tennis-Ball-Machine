#ifndef PINCONFIG_H
#define PINCONFIG_H
#include <Arduino.h>

// Motor control pins
const int motor1Dir = 31; 
const int motor1PWM = 8;  
const int motor2Dir = 35;
const int motor2PWM = 6;

// Analog input pins for potentiometers
const int pot1Pin = A0;   
const int pot2Pin = A2;

// Stepper motor pins (Basic Stepper)
const int stepsPerRevolution = 200;

// A4988 Stepper Motor Driver Pins
const int dirPin = 5;
const int stepPin = 7;
const int enablePin = 8;
const int switchCW = 2;
const int switchCCW = 3;

#endif
