#include <Arduino.h>

int a = 0;
int Button = 15;
int ledPins[] = {23, 19, 18, 0, 4, 16};

void setup() {
  pinMode(Button, INPUT_PULLDOWN);
  for (int i = 0; i < 6; i++){
    pinMode(ledPins[i],OUTPUT);
  }
  
}
void loop() {
  while (a == 0){

    digitalWrite(ledPins[0],HIGH);
    digitalWrite(ledPins[1],LOW);
    digitalWrite(ledPins[2],LOW);
  
    digitalWrite(ledPins[3],LOW);
    digitalWrite(ledPins[4],LOW);
    digitalWrite(ledPins[5],HIGH);
    delay(1000);

  
    digitalWrite(ledPins[0],HIGH);
    digitalWrite(ledPins[1],LOW);
    digitalWrite(ledPins[2],LOW);
  
    digitalWrite(ledPins[3],LOW);
    digitalWrite(ledPins[4],HIGH);
    digitalWrite(ledPins[5],LOW);
    delay(1000);


    digitalWrite(ledPins[0],LOW);
    digitalWrite(ledPins[1],LOW);
    digitalWrite(ledPins[2],HIGH);
  
    digitalWrite(ledPins[3],HIGH);
    digitalWrite(ledPins[4],LOW);
    digitalWrite(ledPins[5],LOW);
    delay(1000);


    digitalWrite(ledPins[0],LOW);
    digitalWrite(ledPins[1],HIGH);
    digitalWrite(ledPins[2],LOW);
  
    digitalWrite(ledPins[3],HIGH);
    digitalWrite(ledPins[4],LOW);
    digitalWrite(ledPins[5],LOW);
    delay(1000);

    while(digitalRead(Button) == HIGH) a = 1;
   }

    while (a == 1){
      digitalWrite(ledPins[0],LOW);
      digitalWrite(ledPins[1],LOW);
      digitalWrite(ledPins[2],LOW);
  
      digitalWrite(ledPins[3],LOW);
      digitalWrite(ledPins[4],LOW);
      digitalWrite(ledPins[5],LOW);
      delay(1000);


      digitalWrite(ledPins[0],HIGH);
      digitalWrite(ledPins[1],HIGH);
      digitalWrite(ledPins[2],HIGH);
  
      digitalWrite(ledPins[3],HIGH);
      digitalWrite(ledPins[4],HIGH);
      digitalWrite(ledPins[5],HIGH);
      delay(1000);
      while(digitalRead(Button) == HIGH) a = 0;
    }
    }
  