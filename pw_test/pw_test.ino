#include <Servo.h>
Servo servo_eye;
#define dirPin 5
#define stepPin 4
#define stepsPerRevolution 10
int inputPin = 8;
bool changed;

void setup() {
  // put your setup code here, to run once:
  servo_eye.attach(10);
  servo_eye.write(0);
  delay(1000);
  changed = false;
  pinMode(inputPin, INPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void move_stepper() {
    for (int i = 0; i < stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(2000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int lips_status = digitalRead(inputPin);
  if (lips_status == LOW) {
    servo_eye.write(180);
    delay(1000);
    changed = true;
  } else {
    servo_eye.write(0);
    if (changed) {
      delay(1000);
      move_stepper();
      changed = false;
    }
  }
}
