#include <Arduino.h>

void setup() {
  for(int i = 0; i <= 11; i++) {
    pinMode(i, INPUT_PULLUP);
  }
}

void loop() {
  for(int i = 0; i <= 11; i++) {
    Joystick.button(i + 1, !digitalRead(i));
  }
}