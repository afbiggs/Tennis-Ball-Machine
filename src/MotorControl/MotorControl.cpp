#include "MotorControl.h"

void setupMotors() {
    pinMode(motor1Dir, OUTPUT);
    pinMode(motor1PWM, OUTPUT);
    pinMode(motor2Dir, OUTPUT);
    pinMode(motor2PWM, OUTPUT);

    pinMode(pot1Pin, INPUT);
    pinMode(pot2Pin, INPUT);
}

void controlMotors(int pot1Value, int pot2Value) {
    int motor1Speed = map(pot1Value, 0, 1023, 255, 0);
    int motor2Speed = map(pot2Value, 0, 1023, 255, 0);

    digitalWrite(motor1Dir, LOW);
    digitalWrite(motor2Dir, HIGH);

    analogWrite(motor1PWM, motor1Speed);
    analogWrite(motor2PWM, motor2Speed);
}
