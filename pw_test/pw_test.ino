#include <Servo.h>
Servo servo_eye;
Servo servo_film;
int inputPin = 8;
int i = 0;
bool changed;

void setup() {
  // put your setup code here, to run once:
  servo_eye.attach(10);
  servo_film.attach(7);
  servo_eye.write(0);
  servo_film.write(0);
  delay(1000);
  changed = false;
  pinMode(inputPin, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(inputPin);
  if (val == LOW) {
    servo_eye.write(180);
    delay(1000);
    changed = true;
  } else {
    servo_eye.write(0);
    if (changed) {
      delay(1000);
      i += 15;
      servo_film.write(i);
      changed = false;
    }
  }
  
}
