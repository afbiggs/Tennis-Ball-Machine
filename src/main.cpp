#include <Arduino.h>
#include "./MotorControl/MotorControl.h"
#include "./StepperControl/StepperControl.h"

void setup() {
    Serial.begin(9600);
    setupMotors();
    setupStepper();
}

void loop() {
    int pot1Value = analogRead(pot1Pin);
    int pot2Value = analogRead(pot2Pin);

    controlMotors(pot1Value, pot2Value);
    delay(100);

    controlStepper();
}
