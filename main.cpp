#include <Arduino.h>

#define LED1 12

void setup() {
  // initialize digital pin LED1 as an output.
  pinMode(LED1, OUTPUT);
  Serial.begin(9600);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("LED HIGH");
  delay(1000);               // wait for a second
  digitalWrite(LED1, LOW);   // turn the LED off by making the voltage LOW
  Serial.println("LED LOW");
  delay(1000);               // wait for a second
}