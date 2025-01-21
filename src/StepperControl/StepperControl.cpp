#include "StepperControl.h"

void setupStepper() {
    pinMode(stepPin, OUTPUT);
    pinMode(dirPin, OUTPUT);
    pinMode(enablePin, OUTPUT);
    pinMode(switchCW, INPUT_PULLUP);
    pinMode(switchCCW, INPUT_PULLUP);

    digitalWrite(enablePin, LOW); // Enable the motor driver
}

void controlStepper() {
    int switchState1 = digitalRead(switchCW);
    int switchState2 = digitalRead(switchCCW);

    if (switchState1 == LOW) {
        digitalWrite(dirPin, HIGH);  // Set direction one way
    } 
    else if (switchState2 == LOW) {
        digitalWrite(dirPin, LOW);   // Set direction the other way
    } 
    else {
        return; // Stop if no switches are pressed
    }

    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
}