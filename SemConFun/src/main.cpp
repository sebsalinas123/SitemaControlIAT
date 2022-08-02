#include <Arduino.h>

int ledR=13;
int ledA=12;
int ledV=11;
void Frojo();
void Famarillo();
void Fverde();

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
}

void loop() {
   Frojo();
   Famarillo();
   Fverde();
   Famarillo();
   
}
void Frojo(){
  digitalWrite(ledR,HIGH);
   digitalWrite(ledA,LOW);
   digitalWrite(ledV,LOW);
   delay(10000);
}
void Famarillo(){
   digitalWrite(ledR,LOW);
   digitalWrite(ledA,HIGH);
   digitalWrite(ledV,LOW);
   delay(2000);
}
void Fverde(){
   digitalWrite(ledR,LOW);
   digitalWrite(ledA,LOW);
   digitalWrite(ledV,HIGH);
   delay(8000);
}