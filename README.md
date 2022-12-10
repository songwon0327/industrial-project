
## 해보조
<p align ="center"><img width="500" src="https://user-images.githubusercontent.com/90976911/206831014-57cb3a1d-2716-4e10-90ca-eebcbcd0a4e7.png"></p>

- 산학프로젝트 해보조팀
- 2022.9.10 ~ 2022.12.12
- 스마트점자 보도 블럭! : 기존의 점자 보도블럭의 점자 훼손에 대응하는 보도블럭
- 밟으면 무게를 측정해 주변 신호 환경에 맞추어 신호를 울려주는 아두이노 기반 보도블럭

<p align="center"><img width="700" alt="스크린샷 2022-12-10 오후 2 07 05" src="https://user-images.githubusercontent.com/90976911/206830302-3c4b7fba-db01-44f9-90e3-0a1a851a4ec5.png"></p>

## 준비사항
- 아두이노 우노(Arduino Uno)
- 3선식 로드셀(Load Cell) * 4
- 음성신호 전달을 위한 스피커 모듈
- IC 통신을 하기 위한 아두이노 ESP32(Arduino ESP32) - (Optional)

## 코드 사용 방법
1. Arduino IDE를 설치해서 2선식 로드셀이 연결된 아두이노와 컴퓨터를 연결
2. HX711 라이브러리를 아두이노 라이브러리에 추가
3. Arduino IDE를 실행시켜 맞는 보드를 선택 후, 다운받은 코드를 open
4. verify를 실행해 만약 오류가 없으면 실행완료

## 하드웨어 사용 방법
 올라가서 무게가 측정되면 ESP32의 신호에 파란불이면 음성신호가 나오지 않고 빨간불이면 음성신호가 나온다.
 
 ## 완성본
<p align="center"><img width="400" src="https://user-images.githubusercontent.com/90976911/206831277-45c1717e-b928-4a41-991a-500b00f05355.jpeg"></p>
 
 ## 실행모습
 <p align="center"><img src="https://user-images.githubusercontent.com/90976911/206831628-3110bbee-db12-41c1-a58d-e922616ad3c1.png"></p>
 
 ## 핵심기능
 - 점자블록의 점자 훼손에도 대응이 가능한 보도블럭
 - 사용자에게 음성신호를 제공하는 스피커 및 사용자를 판단하는 무게센서
 - 아두이노 우노에게 도로교통상황을 제공하는 ESP32 보드
 
 ## 프로젝트 요구사항
 <H3>공통</H3>
- 아두이노 IDE에 사용된 언어는 C++ <br/>
- 적어도 16KB이상의 메모리를 가지는 보드 사용 권장
- HX711사용 시 보정치를 최소한으로 조절해야 원하는 값이 나올 가능성이 있음
    
<H3>제약사항</H3>
<H4>소프트웨어</H4>
- 아두이노 라이브러리에는 HX711 관련 라이브러리가 추가되어 있어야 한다.

<H4>보안</H4>
- 아두이노 장치의 고장 시에는 작동을 멈추어야 한다.

<H4>정책/문화</H4>
- 사용자에게 음성신호 제공 시 도로산호 상황에 대한 정보는 완벽해야 한다.<br/>
- 시스템의 무게는 킬로그램(Kg)을 사용한다.
  
<H3>프로젝트 스케줄</H3>
