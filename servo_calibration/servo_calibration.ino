#include <Servo.h>

int  shoulderPin = 9;
int  elbowPin = 10;

Servo shoulder;
Servo elbow;

void setup() {
  
   shoulder.attach(shoulderPin);
   elbow.attach(elbowPin);
   Serial.begin(9600);

}

void loop() {
   
  //shoulder.write();
  elbow.write(180);
   
}


// 92 closed
//30 open

//full curl 140
//straught arm 35
//105

//84 - 1024
//940
