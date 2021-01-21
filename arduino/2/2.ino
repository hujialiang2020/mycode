 

int buttonOn = 0;         


void setup() {  
  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {  
  buttonOn = digitalRead(7);  
  if (buttonOn == HIGH) {    
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
}    

  
  else {    
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
  }
}
