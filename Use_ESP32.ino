int ARD = 8;                     // 임의 지정1

int ESP = 2;             // 임의 지정 2



void setup() {                      

pinMode(ESP, INPUT);    // BUTTON(디지털 2번)핀을 입력모드로 

pinMode(ARD, OUTPUT);     // LED(디지털 8번)핀을 출력모드로 

}



void loop() {                                

if (digitalRead() == HIGH) {   // 만약 2번핀에 HIGH가 입력된다면

digitalWrite(ARD, ON);         // 8번핀에 HIGH 신호를 출력하고,

} 

else {              // 그게 아니라면(2번핀에 HIGH가 입력되지 않는다면)

digitalWrite(ARD, LOW);    // 8번핀에 LOW 신호를 출력한다.

}

}