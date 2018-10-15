#include <NewPing.h>

#include <MotorDriver.h>

int Distance;

NewPing sonar_A0(A0,A1);

MotorDriver m;
void setup()
{
  pinMode(A2,OUTPUT);
}


void loop()
{
  Distance = sonar_A0.ping_cm();
  
  if(Distance<= 20 && Distance>=2){
  m.motor(1,BACKWARD,75);
  m.motor(4,FORWARD,90);
  analogWrite(A2,255);
  delay(200);
  }
  else {
  analogWrite(A2,0);
  m.motor(1,FORWARD,75);
  m.motor(4,FORWARD,90);
    }
}
