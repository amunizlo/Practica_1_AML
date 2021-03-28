#include <Arduino.h>
#define led 2

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  Serial.println("on");
  digitalWrite(led, HIGH);
  delay(500);
  Serial.println("off");
  digitalWrite(led, LOW);
  delay(500);
}