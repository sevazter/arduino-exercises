void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(10)== LOW){
  	digitalWrite(2,HIGH);
    delay(200);
    digitalWrite(2,LOW);
  }
}