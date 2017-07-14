#include "TempController.h"

int analogPin = 0;
float Vcounts = 0.0;
float currentTemp = 0.0;

TempController tempController = TempController();  // temperature control module

bool tempDebug = true;

void setup() 
{
  Serial.begin(9600);  // begin serial communication
  
}

void loop() 
{
  
  Vcounts = analogRead(analogPin);    // read the input pin

  // get temp in f
  currentTemp = tempController.convertInputToTemp_f(Vcounts);
  Serial.print("currentTemp (F) = ");
  Serial.println(currentTemp);
  
  delay(1000);
  
  
}
