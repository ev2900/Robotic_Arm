// Shoulder Servo on digital pin 9
// Shoulder Elbow on digital pin 10

#include <Servo.h>

Servo shoulder;
Servo elbow;

int nextServo = 0;
int servoAngles[] = {0,0};

void setup() {
  
  shoulder.attach(9);
  elbow.attach(10);
  Serial.begin(9600);
   
}

void loop() {
 
  if(Serial.available()) {
    
    int servoAngle = Serial.read();
    
    servoAngles[nextServo] = servoAngle;
    nextServo++;
    
    if(nextServo > 1) {
      nextServo = 0;
    }
    
    int a = (servoAngles[0]-180);
    
    shoulder.write(a);  
    elbow.write(servoAngles[1]);
  }
}
