
#include <Servo.h>

Servo myservo;  
int sensor=0;
int argle=0;
void setup() {
  myservo.attach(9); 
}

void loop() {
  sensor=analogRead(A0);
  argle=map(sensor,0,1023,0,180);
  myservo.write(argle-);                  
  delay(15);                           
}
