#include <Arduino.h>

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
   digitalWrite(13,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(11,LOW);
   delay(10000);
   digitalWrite(13,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(11,LOW);
   delay(3000);
   digitalWrite(13,LOW);
   digitalWrite(12,LOW);
   digitalWrite(11,HIGH);
   delay(10000);
   digitalWrite(13,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(11,LOW);
   delay(1000);
   
}