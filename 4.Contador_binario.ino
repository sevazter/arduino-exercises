const int ledBits[8]={2,3,4,5,6,7,8,9};
int contador = 0;


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<8;i++){
    pinMode(ledBits[i],OUTPUT);
}
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(10) == LOW) {
  	contador = contador + 1;
  }
  
  if (contador == 1){
    for(int i=0;i<8;i++){
    	digitalWrite(ledBits[i],HIGH);
      	delay(300);
        digitalWrite(ledBits[i],LOW);
    }
  }
  else if (contador == 2){
    for(int i=0;i<4;i++){
    	digitalWrite(ledBits[i],HIGH);
      	digitalWrite(ledBits[7-i],HIGH);
      	delay(300);
        digitalWrite(ledBits[i],LOW);
        digitalWrite(ledBits[7-i],LOW);
    }
  }
  else{
  	contador = 0;
    for(int i=0;i<8;i++){
    digitalWrite(ledBits[i],LOW);
    }
   delay(300);
  }
}