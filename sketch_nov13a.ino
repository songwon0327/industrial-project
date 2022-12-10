#include "HX711.h"

const int DOUT_PIN = 4;
const int SCK_PIN = 5;
const int PLAYE = 9;
 
HX711 scale;
float caliFactor = -51500;

void setup() 
{
  Serial.begin(9600);
  scale.begin(DOUT_PIN, SCK_PIN);
  scale.set_scale();
  scale.tare();
  pinMode(DOUT_PIN, INPUT);
  pinMode(PLAYE,OUTPUT);
}
 
void loop() 
{
  Serial.print("Reading: ");
  float curWeight = scale.get_units();
  Serial.print(curWeight, 1);
  Serial.print(" kg"); 
  Serial.print(" calibration_factor: ");
  Serial.print(caliFactor);
  Serial.println();

  if(Serial.available())
  {
    esp(Serial.readString(), curWeight);
    char temp = Serial.read();
 
    switch(temp) // 로드셀 무게 영점 조절
    {
      case 'A':
        caliFactor += 10;
        break;
      case 'B':
        caliFactor += 50;
        break;
      case 'C':
        caliFactor += 100;
        break;
      case 'D':
        caliFactor += 1000;
        break;
 
      case 'a':
        caliFactor -= 10;
        break;
      case 'b':
        caliFactor -= 50;
        break;
      case 'c':
        caliFactor -= 100;
        break;
      case 'd':
        caliFactor -= 1000;
        break;
    }
  }

  delay(1000);
}

void esp(String ch, float curWeight)
{
  if(ch == "0"){
    Serial.println("TURN ON THE BLOCK");
    speaker(curWeight);
  }
  if(ch == "1"){
    Serial.println("TURN OFF THE BLOCK");
  }
  return;
}

void speaker(float curWeight)
{
  if(curWeight >= 20)
  {
    digitalWrite(PLAYE, HIGH); 
    delay(5000);
    digitalWrite(PLAYE, LOW); 
  }
  return;
}
