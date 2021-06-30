#define echoPin 13
#define trigPin 12
#define motorR1 7
#define motorR2 6
#define motorRE 9
#define motorL1 4
#define motorL2 5
#define motorLE 3


long sure, uzaklik;


void setup() {
  
  pinMode(echoPin, INPUT);  
  pinMode(trigPin, OUTPUT);  
  pinMode(motorR1, OUTPUT);  
  pinMode(motorR2, OUTPUT);
  pinMode(motorRE, OUTPUT);
  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorLE, OUTPUT);


}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  uzaklik - sure / 29.1 / 2;

  if(uzaklik < 15)
 {
  geri();
   delay(500);
  sag();
  delay(500);
  
 }
  else{
    ileri();
    
  }


}




void sag(){

  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
  analogWrite(motorRE, 150); 


  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, HIGH);
  analogWrite(motorLE, 150);

}

void ileri(){

  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);
  analogWrite(motorRE, 150);  


  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  analogWrite(motorLE, 150);

}

void geri(){

  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
  analogWrite(motorRE, 150);  

  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, HIGH);
  analogWrite(motorLE, 150);
}
