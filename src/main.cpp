#include <Arduino.h>
#define led_pin 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("setup");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}