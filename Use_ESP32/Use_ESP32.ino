#include "BluetoothSerial.h" // ESP의 블루투스 기능을 포함하고 있는 헤더
BluetoothSerial SerialBT; // 블루투스의 기능을 정의


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // 시리얼 통신속도를 115200으로 설정 (나중에 통신이 안맞으면 9600으로 통일 설정)
  SerialBT begin("SinHo"); // 블루투스의 이름임
}

void loop() {
  if ( SerialBT.avaialble()) // 블루투스로 받은 데이터가 있으면
  {
    int ch = SerialBT .read(); // ch라는 변수에 데이터를 1BYTE 저장합니다. 0또는 1만 받을 것이기 때문에
    if( ch == '0')// 데이터가 0이면
    {
      Serial.println("TURN ON THE BLOCK");//블록 켜짐
    }
    if( ch == '1')
    {
      Serial.println("TURN OFF THE BLOCK");//블록 꺼짐
    }

  }  
}