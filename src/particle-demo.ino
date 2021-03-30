/*
 * Project particle-demo
 * Description: Testing...
 * Author: Matt
 * Date: 29-Mar-21
 */

int led = D7;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}