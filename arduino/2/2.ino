 

int buttonOn = 0;         


void setup() {  
  pinMode(12, OUTPUT);  
  pinMode(7, INPUT);
}

void loop() {  
  buttonOn = digitalRead(7);  
  if (buttonOn == HIGH) {    
    digitalWrite(12, HIGH);
  } else {    
    digitalWrite(12, LOW);
  }
}
