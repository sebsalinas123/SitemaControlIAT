#include <Arduino.h>


int ledR=13;
int ledA=12;
int ledV=11;
int ledR2=10;
int ledA2=9;
int ledV2=8;
void Frojo();
void Famarillo();
void Fverde();
void Frojo2();
void Famarillo2();
void Fverde2();
void Fcruse();

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledR2,OUTPUT);
  pinMode(ledA2,OUTPUT);
  pinMode(ledV2,OUTPUT);
}

void loop() {
  Fcruse();
}

void Fcruse(){
Frojo();
Fverde2();
delay(10000);
Famarillo();
Famarillo2();
delay(3000);
Frojo2();
Fverde();
delay(10000);
Famarillo();
Famarillo2();
delay(3000);

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
void Frojo2(){
  digitalWrite(ledR2,HIGH);
   digitalWrite(ledA2,LOW);
   digitalWrite(ledV2,LOW);
   delay(10000);
}
void Famarillo2(){
   digitalWrite(ledR2,LOW);
   digitalWrite(ledA2,HIGH);
   digitalWrite(ledV2,LOW);
   delay(2000);
}
void Fverde2(){
   digitalWrite(ledR2,LOW);
   digitalWrite(ledA2,LOW);
   digitalWrite(ledV2,HIGH);
   delay(8000);
}