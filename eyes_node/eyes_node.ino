#include <Servo.h>
Servo servo_eye;
char inChar;
#define LED_PIN SS

void setup() {
  pinMode(LED_PIN, OUTPUT); // Инициализация светодиода
  Serial.begin(115200); // Инициализация Serial - порта
  servo_eye.attach(10);
  servo_eye.write(0);
}

void loop() {
  if (Serial.available() > 0)
  {
    inChar = Serial.read();
    if (inChar == 'o') // e - Enable - включить
    {
      servo_eye.write(180);
    }
    else if (inChar == 'c') // d - Disable - выключить
    {
      servo_eye.write(0);
    }

    else if (inChar == 's') // b - Blink - выключить режим мигания
    {
      if (servo_eye.read() == 180) {
        Serial.print("opened\n");
      }
      else {
          Serial.print("closed\n");
        }
    }
  }
}
