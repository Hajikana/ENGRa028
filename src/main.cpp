#include <Arduino.h>

/*int a = 0;
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
    */


/*
  int ledPin = 23;
  void setup(){
    ledcAttachPin(ledPin, 0);
    ledcSetup(0, 5000, 8);
  }

  void loop(){
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    ledcWrite(0,dutyCycle);
    delay(10);
  }
  for(int dutyCycle = 255; dutyCycle <= 0; dutyCycle--){
    ledcWrite(0,dutyCycle);
    delay(10);
  }
}
*/

   int potPin =  36;
   int ledPin1 =  23;
   int ledPin2 =  19;
   int ledPin3 =  18;
   int ledPin4 =  5;
   int ledPin5 =  17;
   int ledPin6 =  16;
   int ledPin7 =  4;
   int ledPin8 =  0;

   void setup() {
    pinMode(ledPin1,OUTPUT);
    pinMode(ledPin2,OUTPUT);
    pinMode(ledPin3,OUTPUT);
    pinMode(ledPin4,OUTPUT);
    pinMode(ledPin5,OUTPUT);
    pinMode(ledPin6,OUTPUT);
    pinMode(ledPin7,OUTPUT);
    pinMode(ledPin8,OUTPUT);
   }

   void loop() {
    int potValue = analogRead(potPin);
    if(potValue < 500){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      digitalWrite(ledPin6, LOW);
      digitalWrite(ledPin7, LOW);
      digitalWrite(ledPin8, LOW);
    } 
    else if (potValue > 501 && potValue < 1000){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      digitalWrite(ledPin6, LOW);
      digitalWrite(ledPin7, LOW);
      digitalWrite(ledPin8, LOW);
    }
    else if (potValue > 1001 && potValue < 2000){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, HIGH);
      digitalWrite(ledPin6, LOW);
      digitalWrite(ledPin7, LOW);
      digitalWrite(ledPin8, LOW);
    }
    else if (potValue > 2001){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, HIGH);
      digitalWrite(ledPin6, HIGH);
      digitalWrite(ledPin7, HIGH);
      digitalWrite(ledPin8, HIGH);
    }
   }

 