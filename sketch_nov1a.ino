#include <Adafruit_CircuitPlayground.h>

int valueA1;
int valueA2;
int valueA3;
int valueA4;
int valueA5;
int valueA6;
int valueA7;
int c;
int touch;
///////////////////////////////////////////////////////////////////////////////
void setup() {
CircuitPlayground.begin();
}

void loop() {
touch = 6;
//ColorSwitch
//if (CircuitPlayground.slideSwitch()){
// c = 0xfcba03;
//} else {
//c = 0x033dfc;
//}


CircuitPlayground.setBrightness(150);
//Initial location of "ball"; the "ground"
//CircuitPlayground.setPixelColor(6,c);
//A1
valueA1 = analogRead(A1);
if(valueA1 <touch){

 CircuitPlayground.setPixelColor(0,0xfcba03);
 CircuitPlayground.setPixelColor(1,0xfcba03);
  CircuitPlayground.setPixelColor(2,0xfcba03);
 CircuitPlayground.setPixelColor(3,0xfcba03);
  CircuitPlayground.setPixelColor(4,0xfcba03);
 CircuitPlayground.setPixelColor(5,0xfcba03);
  CircuitPlayground.setPixelColor(6,0xfcba03);
 CircuitPlayground.setPixelColor(7,0xfcba03);
  CircuitPlayground.setPixelColor(8,0xfcba03);
 CircuitPlayground.setPixelColor(9,0xfcba03);

//Megalovania
  CircuitPlayground.playTone(147,500/3,false);
  delay(10);
  CircuitPlayground.playTone(147,500/3,false);
  delay(10);
  CircuitPlayground.playTone(294,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,250,false);
  delay(500/5);
  CircuitPlayground.playTone(208,500/5,false);
  delay(500/5);
  CircuitPlayground.playTone(196,500/5,false);
  delay(500/5);
  CircuitPlayground.playTone(175,250,false);
  delay(10);
  CircuitPlayground.playTone(147,125,false);
  delay(10);
  CircuitPlayground.playTone(175,125,false);
  delay(10);
  CircuitPlayground.playTone(196,125,false);

  CircuitPlayground.playTone(147,500/3,false);
  delay(10);
  CircuitPlayground.playTone(147,500/3,false);
  delay(10);
  CircuitPlayground.playTone(294,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,250,false);
  delay(500/5);
  CircuitPlayground.playTone(208,500/5,false);
  delay(500/5);
  CircuitPlayground.playTone(196,500/5,false);
  delay(500/5);
  CircuitPlayground.playTone(175,250,false);
  delay(10);
  CircuitPlayground.playTone(147,125,false);
  delay(10);
  CircuitPlayground.playTone(175,125,false);
  delay(10);
  CircuitPlayground.playTone(196,125,false);
} else{
CircuitPlayground.setPixelColor(0,0,0,0);
 CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
 CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
 CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(6,0,0,0);
 CircuitPlayground.setPixelColor(7,0,0,0);
  CircuitPlayground.setPixelColor(8,0,0,0);
 CircuitPlayground.setPixelColor(9,0,0,0);
}


//A2
valueA2 = analogRead(A2);
if(valueA2 <touch){
 CircuitPlayground.setPixelColor(0,0xfcba03);
 CircuitPlayground.setPixelColor(1,0xfcba03);
  CircuitPlayground.setPixelColor(2,0xfcba03);
 CircuitPlayground.setPixelColor(3,0xfcba03);
  CircuitPlayground.setPixelColor(4,0xfcba03);
 CircuitPlayground.setPixelColor(5,0xfcba03);
  CircuitPlayground.setPixelColor(6,0xfcba03);
 CircuitPlayground.setPixelColor(7,0xfcba03);
  CircuitPlayground.setPixelColor(8,0xfcba03);
 CircuitPlayground.setPixelColor(9,0xfcba03);

CircuitPlayground.playTone(196,500,false);
  delay(10);
  CircuitPlayground.playTone(330,500,false);
  delay(10);
  CircuitPlayground.playTone(294,500,false);
  delay(10);
  CircuitPlayground.playTone(277,500,false);
  delay(10);

  CircuitPlayground.playTone(277,500,false);
  delay(10);
  CircuitPlayground.playTone(294,500,false);
  CircuitPlayground.playTone(349,1000,false);
  delay(10);
  CircuitPlayground.playTone(247,500,false);
  delay(10);

  CircuitPlayground.playTone(392,500,false);
  delay(10);
  CircuitPlayground.playTone(349,500,false);
  delay(10);
  CircuitPlayground.playTone(330,500,false);
  delay(10);
  CircuitPlayground.playTone(311,500,false);
  delay(10);

  CircuitPlayground.playTone(330,500,false);
  delay(10);
  CircuitPlayground.playTone(523,500*2,false);
  delay(10);
  CircuitPlayground.playTone(311,500,false);
  delay(10);
  CircuitPlayground.playTone(587,500,false);
  delay(10);

  CircuitPlayground.playTone(523,500,false);
  delay(10);
  CircuitPlayground.playTone(494,500,false);
  delay(10);
  CircuitPlayground.playTone(440,500,false);
  delay(10);
  CircuitPlayground.playTone(392,500,false);
  delay(10);

  CircuitPlayground.playTone(349,500,false);
  delay(10);
  CircuitPlayground.playTone(330,500,false);
  delay(10);
  CircuitPlayground.playTone(294,500,false);
  delay(10);
  CircuitPlayground.playTone(349,1000,false);
  delay(10);

  CircuitPlayground.playTone(196,1000,false);
  delay(10);
  CircuitPlayground.playTone(392,1000,false);
  delay(10);

} else{
CircuitPlayground.setPixelColor(0,0,0,0);
 CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
 CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
 CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(6,0,0,0);
 CircuitPlayground.setPixelColor(7,0,0,0);
  CircuitPlayground.setPixelColor(8,0,0,0);
 CircuitPlayground.setPixelColor(9,0,0,0);
}


// //A3
// valueA3 = analogRead(A3);
// if(valueA3 <touch){
//  CircuitPlayground.setPixelColor(0,0xfcba03);
//  CircuitPlayground.setPixelColor(1,0xfcba03);
//   CircuitPlayground.setPixelColor(2,0xfcba03);
//  CircuitPlayground.setPixelColor(3,0xfcba03);
//   CircuitPlayground.setPixelColor(4,0xfcba03);
//  CircuitPlayground.setPixelColor(5,0xfcba03);
//   CircuitPlayground.setPixelColor(6,0xfcba03);
//  CircuitPlayground.setPixelColor(7,0xfcba03);
//   CircuitPlayground.setPixelColor(8,0xfcba03);
//  CircuitPlayground.setPixelColor(9,0xfcba03);
//   CircuitPlayground.playTone(50,1000);
// } else{
// CircuitPlayground.setPixelColor(0,0,0,0);
//  CircuitPlayground.setPixelColor(1,0,0,0);
//   CircuitPlayground.setPixelColor(2,0,0,0);
//  CircuitPlayground.setPixelColor(3,0,0,0);
//   CircuitPlayground.setPixelColor(4,0,0,0);
//  CircuitPlayground.setPixelColor(5,0,0,0);
//   CircuitPlayground.setPixelColor(6,0,0,0);
//  CircuitPlayground.setPixelColor(7,0,0,0);
//   CircuitPlayground.setPixelColor(8,0,0,0);
//  CircuitPlayground.setPixelColor(9,0,0,0);
// }


// //A4
// valueA4 = analogRead(A4);
// if(valueA4 <touch){
//  CircuitPlayground.setPixelColor(0,0xfcba03);
//  CircuitPlayground.setPixelColor(1,0xfcba03);
//   CircuitPlayground.setPixelColor(2,0xfcba03);
//  CircuitPlayground.setPixelColor(3,0xfcba03);
//   CircuitPlayground.setPixelColor(4,0xfcba03);
//  CircuitPlayground.setPixelColor(5,0xfcba03);
//   CircuitPlayground.setPixelColor(6,0xfcba03);
//  CircuitPlayground.setPixelColor(7,0xfcba03);
//   CircuitPlayground.setPixelColor(8,0xfcba03);
//  CircuitPlayground.setPixelColor(9,0xfcba03);
//   CircuitPlayground.playTone(50,1000);
// } else{
// CircuitPlayground.setPixelColor(0,0,0,0);
//  CircuitPlayground.setPixelColor(1,0,0,0);
//   CircuitPlayground.setPixelColor(2,0,0,0);
//  CircuitPlayground.setPixelColor(3,0,0,0);
//   CircuitPlayground.setPixelColor(4,0,0,0);
//  CircuitPlayground.setPixelColor(5,0,0,0);
//   CircuitPlayground.setPixelColor(6,0,0,0);
//  CircuitPlayground.setPixelColor(7,0,0,0);
//   CircuitPlayground.setPixelColor(8,0,0,0);
//  CircuitPlayground.setPixelColor(9,0,0,0);
// }


// //A5
// valueA5 = analogRead(A5);
// if(valueA5 <touch){
//  CircuitPlayground.setPixelColor(0,0xfcba03);
//  CircuitPlayground.setPixelColor(1,0xfcba03);
//   CircuitPlayground.setPixelColor(2,0xfcba03);
//  CircuitPlayground.setPixelColor(3,0xfcba03);
//   CircuitPlayground.setPixelColor(4,0xfcba03);
//  CircuitPlayground.setPixelColor(5,0xfcba03);
//   CircuitPlayground.setPixelColor(6,0xfcba03);
//  CircuitPlayground.setPixelColor(7,0xfcba03);
//   CircuitPlayground.setPixelColor(8,0xfcba03);
//  CircuitPlayground.setPixelColor(9,0xfcba03);
//   CircuitPlayground.playTone(50,1000);
// } else{
// CircuitPlayground.setPixelColor(0,0,0,0);
//  CircuitPlayground.setPixelColor(1,0,0,0);
//   CircuitPlayground.setPixelColor(2,0,0,0);
//  CircuitPlayground.setPixelColor(3,0,0,0);
//   CircuitPlayground.setPixelColor(4,0,0,0);
//  CircuitPlayground.setPixelColor(5,0,0,0);
//   CircuitPlayground.setPixelColor(6,0,0,0);
//  CircuitPlayground.setPixelColor(7,0,0,0);
//   CircuitPlayground.setPixelColor(8,0,0,0);
//  CircuitPlayground.setPixelColor(9,0,0,0);
// }


// //A6
// valueA6 = analogRead(A6);
// if(valueA6 <touch){
//  CircuitPlayground.setPixelColor(0,0xfcba03);
//  CircuitPlayground.setPixelColor(1,0xfcba03);
//   CircuitPlayground.setPixelColor(2,0xfcba03);
//  CircuitPlayground.setPixelColor(3,0xfcba03);
//   CircuitPlayground.setPixelColor(4,0xfcba03);
//  CircuitPlayground.setPixelColor(5,0xfcba03);
//   CircuitPlayground.setPixelColor(6,0xfcba03);
//  CircuitPlayground.setPixelColor(7,0xfcba03);
//   CircuitPlayground.setPixelColor(8,0xfcba03);
//  CircuitPlayground.setPixelColor(9,0xfcba03);
//   CircuitPlayground.playTone(50,1000);
// } else{
// CircuitPlayground.setPixelColor(0,0,0,0);
//  CircuitPlayground.setPixelColor(1,0,0,0);
//   CircuitPlayground.setPixelColor(2,0,0,0);
//  CircuitPlayground.setPixelColor(3,0,0,0);
//   CircuitPlayground.setPixelColor(4,0,0,0);
//  CircuitPlayground.setPixelColor(5,0,0,0);
//   CircuitPlayground.setPixelColor(6,0,0,0);
//  CircuitPlayground.setPixelColor(7,0,0,0);
//   CircuitPlayground.setPixelColor(8,0,0,0);
//  CircuitPlayground.setPixelColor(9,0,0,0);
// }


// //A7
// valueA7 = analogRead(A7);
// if(valueA7 <touch){
//  CircuitPlayground.setPixelColor(0,0xfcba03);
//  CircuitPlayground.setPixelColor(1,0xfcba03);
//   CircuitPlayground.setPixelColor(2,0xfcba03);
//  CircuitPlayground.setPixelColor(3,0xfcba03);
//   CircuitPlayground.setPixelColor(4,0xfcba03);
//  CircuitPlayground.setPixelColor(5,0xfcba03);
//   CircuitPlayground.setPixelColor(6,0xfcba03);
//  CircuitPlayground.setPixelColor(7,0xfcba03);
//   CircuitPlayground.setPixelColor(8,0xfcba03);
//  CircuitPlayground.setPixelColor(9,0xfcba03);
//   CircuitPlayground.playTone(50,1000);
// } else{
// CircuitPlayground.setPixelColor(0,0,0,0);
//  CircuitPlayground.setPixelColor(1,0,0,0);
//   CircuitPlayground.setPixelColor(2,0,0,0);
//  CircuitPlayground.setPixelColor(3,0,0,0);
//   CircuitPlayground.setPixelColor(4,0,0,0);
//  CircuitPlayground.setPixelColor(5,0,0,0);
//   CircuitPlayground.setPixelColor(6,0,0,0);
//  CircuitPlayground.setPixelColor(7,0,0,0);
//   CircuitPlayground.setPixelColor(8,0,0,0);
//  CircuitPlayground.setPixelColor(9,0,0,0);
// }
}