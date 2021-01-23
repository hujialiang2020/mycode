int sensor=A0;
int sensorRead=0;
int newdata=0;

void setup() {
   Serial.begin(9600);
}

void loop() {
  sensorRead=analogRead(sensor);
  newdata=map(sensorRead,0,1023,0,255);
  Serial.println(newdata);
  analogWrite(3,newdata);
  delay(200); 
}
