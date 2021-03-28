#include <Arduino.h>
#define led 2

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  Serial.println("on");
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                // wait for a second
  Serial.println("off");
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                // wait for a second
}