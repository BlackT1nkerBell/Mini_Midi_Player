#include <Adafruit_CircuitPlayground.h>

//Holders for capacitive A1 through A7
int valueA1;
int valueA2;
int valueA3;
int valueA4;
int valueA5;
int valueA6;
int valueA7;
int c;
//Holds 
int touch;
int iSpeed;
int speedUp;
int speedDown;
int left;
int right;
int sw;
///////////////////////////////////////////////////////////////////////////////
void setup() {
CircuitPlayground.begin();
}

void loop() {
touch = 6;
iSpeed = 1;
speedUp = 1.5;
speedDown = 0.50;
left = CircuitPlayground.leftButton();
right = CircuitPlayground.rightButton();
sw = CircuitPlayground.slideSwitch();


CircuitPlayground.setBrightness(50);

if (sw){
c = 0xfcba03;
iSpeed = iSpeed + speedUp;
} else {
c = 0x6df5f7;
iSpeed = iSpeed - speedDown;
}

//A1
valueA1 = analogRead(A1);
if(valueA1 <touch){

 CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

//Megalovania
  CircuitPlayground.playTone(147,500/3*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(147,500/3*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(294,500/3*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(220,250*iSpeed,false);
  delay(500/5);
  CircuitPlayground.playTone(208,500/5*iSpeed,false);
  delay(500/5);
  CircuitPlayground.playTone(196,500/5*iSpeed,false);
  delay(500/5);
  CircuitPlayground.playTone(175,250*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(147,125*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(175,125*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(196,125*iSpeed,false);

  CircuitPlayground.playTone(147,500/3*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(147,500/3*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(294,500/3*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(220,250*iSpeed,false);
  delay(500/5);
  CircuitPlayground.playTone(208,500/5*iSpeed,false);
  delay(500/5);
  CircuitPlayground.playTone(196,500/5*iSpeed,false);
  delay(500/5);
  CircuitPlayground.playTone(175,250*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(147,125*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(175,125*iSpeed,false);
  delay(10);
  CircuitPlayground.playTone(196,125*iSpeed,false);
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
 CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

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


//A3
valueA3 = analogRead(A3);
if(valueA3 <touch){
 CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5,false);
  delay(10);
  CircuitPlayground.playTone(294,428.5,false);
  delay(10);

  CircuitPlayground.playTone(294,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);

  CircuitPlayground.playTone(196,428.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);

  CircuitPlayground.playTone(247,428.5*1.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5*2,false);
  delay(10);

  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5,false);
  delay(10);
  CircuitPlayground.playTone(294,428.5,false);
  delay(10);

  CircuitPlayground.playTone(294,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);

  CircuitPlayground.playTone(196,428.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);

  CircuitPlayground.playTone(247,428.5*1.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5*2,false);
  delay(10);

  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5,false);
  delay(10);

  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5,false);
  delay(10);

  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);

  CircuitPlayground.playTone(196,428.5+428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5+428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(147,428.5+428.5/2,false);
  delay(10);

  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5,false);
  delay(10);
  CircuitPlayground.playTone(294,428.5,false);
  delay(10);

  CircuitPlayground.playTone(294,428.5,false);
  delay(10);
  CircuitPlayground.playTone(262,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);

  CircuitPlayground.playTone(196,428.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5,false);
  delay(10);
  CircuitPlayground.playTone(220,428.5,false);
  delay(10);
  CircuitPlayground.playTone(247,428.5,false);
  delay(10);

  CircuitPlayground.playTone(220,428.5*1.5,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5/2,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5*2,false);
  delay(10);
  CircuitPlayground.playTone(196,428.5*4,false);
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


//A4
valueA4 = analogRead(A4);
if(valueA4 <touch){
 CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

  CircuitPlayground.playTone(220,461.5*2,false);
  delay(461.5/2);
  CircuitPlayground.playTone(220,461.5/2,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/2,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);

  CircuitPlayground.playTone(220,461.5/2,false);
  delay(10);
  CircuitPlayground.playTone(196,461.5/4,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5,false);
  delay(461.5/2);
  CircuitPlayground.playTone(220,461.5/4,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);

  CircuitPlayground.playTone(220,461.5/2,false);
  delay(10);
  CircuitPlayground.playTone(196,461.5/4,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5,false);
  delay(461.5/2);
  CircuitPlayground.playTone(220,461.5/4,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);

  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/3.5,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/3.5,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(165,4461.5/3.5,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/3.5,false);
  delay(10);
  CircuitPlayground.playTone(220,461.5/3,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/3.5,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/3.5,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/2,false);
  delay(10);
  CircuitPlayground.playTone(165,461.5/2,false);
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


//A5
valueA5 = analogRead(A5);
if(valueA5 <touch){
 CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

  CircuitPlayground.playTone(175,500/3,false);
  delay(10);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);

  CircuitPlayground.playTone(233,500/2,false);
  delay(1500);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);
  CircuitPlayground.playTone(247,500/3,false);
  delay(10);

  CircuitPlayground.playTone(262,500/2,false);
  delay(1500);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);
  CircuitPlayground.playTone(247,500/3,false);
  delay(10);

  CircuitPlayground.playTone(262,500/2,false);
  delay(500/2);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);
  CircuitPlayground.playTone(247,500/3,false);
  delay(10);
  CircuitPlayground.playTone(262,500/2,false);
  delay(500/2);
  CircuitPlayground.playTone(175,500/3,false);
  delay(10);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);

  CircuitPlayground.playTone(233,500/2,false);
  delay(1500);
  CircuitPlayground.playTone(175,500/3,false);
  delay(10);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);
  
  CircuitPlayground.playTone(233,500/2,false);
  delay(1500);
  CircuitPlayground.playTone(175,500/3,false);
  delay(10);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(247,500/3,false);
  delay(10);

  CircuitPlayground.playTone(262,500/2,false);
  delay(1500);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);
  CircuitPlayground.playTone(247,500/3,false);
  delay(10);

  CircuitPlayground.playTone(262,500/2,false);
  delay(500/2);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);
  CircuitPlayground.playTone(247,500/3,false);
  delay(10);
  CircuitPlayground.playTone(262,500/2,false);
  delay(500/2);
  CircuitPlayground.playTone(175,500/3,false);
  delay(10);
  CircuitPlayground.playTone(196,500/3,false);
  delay(10);
  CircuitPlayground.playTone(220,500/3,false);
  delay(10);

  CircuitPlayground.playTone(233,500/2,false);
  delay(750);
    CircuitPlayground.playTone(175,2000,false);
    delay(10);
  CircuitPlayground.playTone(349,250,false);


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


//A6
valueA6 = analogRead(A6);
if(valueA6 <touch){
 CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

  CircuitPlayground.playTone(659,333/2,false);
  delay(10);
  CircuitPlayground.playTone(659,333/2,false);
  delay(333/2);
  CircuitPlayground.playTone(659,333/2,false);
  delay(333/2);
  CircuitPlayground.playTone(523,333/2,false);
  delay(10);
  CircuitPlayground.playTone(659,333,false);
  delay(10);

  CircuitPlayground.playTone(659,333/2,false);
  delay(10);
  CircuitPlayground.playTone(659,333/2,false);
  delay(333/2);
  CircuitPlayground.playTone(659,333/2,false);
  delay(333/2);
  CircuitPlayground.playTone(523,333/2,false);
  delay(10);
  CircuitPlayground.playTone(659,333,false);
  delay(10);

  CircuitPlayground.playTone(784,333,false);
  delay(333);
  CircuitPlayground.playTone(392,333,false);
  delay(333);

  CircuitPlayground.playTone(165,333,false);
  delay(333/2);
  CircuitPlayground.playTone(196,333,false);
  delay(10);
  CircuitPlayground.playTone(165,333,false);
  delay(333/2);

  CircuitPlayground.playTone(220,333,false);
  delay(10);
  CircuitPlayground.playTone(247,333,false);
  delay(10);
  CircuitPlayground.playTone(466,333/2,false);
  delay(10);
  CircuitPlayground.playTone(220,333,false);
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


//A7
valueA7 = analogRead(A7);
if(valueA7 <touch){
  CircuitPlayground.setPixelColor(0,c);
 CircuitPlayground.setPixelColor(1,c);
  CircuitPlayground.setPixelColor(2,c);
 CircuitPlayground.setPixelColor(3,c);
  CircuitPlayground.setPixelColor(4,c);
 CircuitPlayground.setPixelColor(5,c);
  CircuitPlayground.setPixelColor(6,c);
 CircuitPlayground.setPixelColor(7,c);
  CircuitPlayground.setPixelColor(8,c);
 CircuitPlayground.setPixelColor(9,c);

  CircuitPlayground.playTone(659,200,false);
  delay(10);
  CircuitPlayground.playTone(622,200,false);
  delay(10);
  CircuitPlayground.playTone(659,200,false);
  delay(10);
  CircuitPlayground.playTone(622,200,false);
  delay(10);
  CircuitPlayground.playTone(659,200,false);
  delay(10);
  CircuitPlayground.playTone(330,200,false);
  delay(10);
  CircuitPlayground.playTone(587,200,false);
  delay(10);
  CircuitPlayground.playTone(523,200,false);
  delay(10);

  CircuitPlayground.playTone(440,250,false);
  delay(10);
  CircuitPlayground.playTone(330,125,false);
  delay(10);
  CircuitPlayground.playTone(330,125,false);
  delay(10);
  CircuitPlayground.playTone(349,250,false);
  delay(10);
  CircuitPlayground.playTone(330,250,false);
  delay(250);
  CircuitPlayground.playTone(415,250,false);
  delay(10);
  CircuitPlayground.playTone(440,250,false);
  delay(250);
  CircuitPlayground.playTone(220,250,false);

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


}