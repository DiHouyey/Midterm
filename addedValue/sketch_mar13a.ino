//motorA
int motorA1 = 3; 
int motorA2 = 4; 
int enablePin1 = 5; 
//motorB
int motorB1 = 2; 
int motorB2 = 6; 
int enablePin2 = 7; 
int num;
int show=0;    
 
void setup() {

    Serial.begin(9600);
    //setup motorA
    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(enablePin1, OUTPUT);
    //setup motorB
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);
    pinMode(enablePin2, OUTPUT);
 
    digitalWrite(enablePin1, HIGH);
    digitalWrite(enablePin2, HIGH);

    
}
 
void loop() {

    if(Serial.available() > 0){     
      num = Serial.read();   
      show=0;
    }   
    if (num == '1') {
        digitalWrite(motorA1, LOW); 
        digitalWrite(motorA2, HIGH); 
        if(show == 0){
          Serial.println("Motor1: right");
          show=1;
        }
    }

    else if (num == '2') {
        digitalWrite(motorA1, HIGH); 
        digitalWrite(motorA2, LOW); 
        if(show == 0){
          Serial.println("Motor1: left");
          show=1;
        }
    }
      else  if (num == '3') {
        digitalWrite(motorA1, LOW); 
        digitalWrite(motorA2, LOW); 
        if(show == 0){
          Serial.println("Motor1: off");
          show=1;
        }
    }
    else if (num == '4') {
        digitalWrite(motorB1, LOW); 
        digitalWrite(motorB2, HIGH); 
        if(show == 0){
          Serial.println("Motor2: right");
          show=1;
        }
    }
 
    else if (num == '5') {
        digitalWrite(motorB1, HIGH); 
        digitalWrite(motorB2, LOW); 
        if(show == 0){
          Serial.println("Motor2: left");
          show=1;
        }
    }
     if (num == '6') {
        digitalWrite(motorB1, LOW);
        digitalWrite(motorB2, LOW); 
        if(show == 0){
          Serial.println("Motor2: off");
          show=1;
        }
    }
}
