
int stepPin1 = 5;
int dirPin1  = 6;
int  enPin1  = 7;
int stepPin2 = 8;
int dirPin2  = 9;
int  enPin2  = 10;
int stepPin3 = 11;
int dirPin3  = 12;
int  enPin3  = 13;
 
int numstep1 = 25;
int numstep2 = 50;
int numstep3 = 11;

void setup() {
  // put your setup code here, to run once:
    
     pinMode(stepPin1, OUTPUT);
     pinMode(dirPin1, OUTPUT);
     pinMode(enPin1, OUTPUT);
     pinMode(stepPin2, OUTPUT);
     pinMode(dirPin2, OUTPUT);
     pinMode(enPin2, OUTPUT);
     pinMode(stepPin3, OUTPUT);
     pinMode(dirPin3, OUTPUT);
     pinMode(enPin3, OUTPUT);

     digitalWrite(enPin1, LOW);
     digitalWrite(enPin2, LOW);
     digitalWrite(enPin3, LOW);
}

void loop() {
  // move the first motor counterclockwise for 45 degree
  digitalWrite(dirPin1, LOW);
  for(int x = 0; x <= numstep1; x++) {
           digitalWrite(stepPin1,HIGH);
       }
  digitalWrite(stepPin1,LOW);
  delay(1000);

  // move the second motor clockwise for 90 degree
  digitalWrite(dirPin2, HIGH);
  for(int x = 0; x <= numstep2; x++) {
           digitalWrite(stepPin2,HIGH);
       }
   digitalWrite(stepPin2,LOW);
   delay(1000);

  // move the third motor clockwise for 20 degree
  digitalWrite(dirPin3, HIGH);
  for(int x = 0; x <= numstep3; x++) {
           digitalWrite(stepPin3,HIGH);
       }
   digitalWrite(stepPin3,LOW);
   delay(1000);
    
}
