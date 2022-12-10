#include "HX711.h"
 
const int LOADCELL_DOUT_PIN = 4;
const int LOADCELL_SCK_PIN = 5;
 
HX711 scale;
int PLAYE = 9;

void setup(){
  Serial.begin(9600);
  pinMode(PLAYE,OUTPUT);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
}

void loop(){
  if(Serial.available()){
    String input=Serial.readString();
    if(input=="0"){
      Serial.println("TURN ON THE BLOCK");      
      if (scale.is_ready()) 
      {
        long ret = scale.read();
        if(ret >= 0){
          digitalWrite(PLAYE, HIGH);
          delay(10000);
          digitalWrite(PLAYE, LOW);      
          
        }
      } 
    }
    if(input=="1"){
       Serial.println("TURN OFF THE BLOCK");
    }
  }
}