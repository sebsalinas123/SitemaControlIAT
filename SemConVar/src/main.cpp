#include <Arduino.h>

int ledR=13;
int ledA=12;
int ledV=11;
void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
}

void loop() {
   digitalWrite(ledR,HIGH);
   digitalWrite(ledA,LOW);
   digitalWrite(ledV,LOW);
   delay(10000);
   digitalWrite(ledR,LOW);
   digitalWrite(ledA,HIGH);
   digitalWrite(ledV,LOW);
   delay(3000);
   digitalWrite(ledR,LOW);
   digitalWrite(ledA,LOW);
   digitalWrite(ledV,HIGH);
   delay(10000);
   digitalWrite(ledR,LOW);
   digitalWrite(ledA,HIGH);
   digitalWrite(ledV,LOW);
   delay(1000);
   
}