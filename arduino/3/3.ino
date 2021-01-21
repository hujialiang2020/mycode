
int pushButton=7;
int buttonState=0;
int beforestate=0;
void setup() {  
  Serial.begin(9600);  
  pinMode(pushButton, INPUT);
}


void loop() { 
   buttonState= digitalRead(pushButton); 
   if(buttonState==1 and beforestate==0){ 
    Serial.print("hi~~");
    Serial.println(buttonState);
   }
  beforestate=buttonState; 
  delay(1);        
}
