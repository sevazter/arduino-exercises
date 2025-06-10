const int ledBits[8]={2,3,4,5,6,7,8,9};
int decimal =0;


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<8;i++){
    pinMode(ledBits[i],OUTPUT);
}
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(10)==LOW){
  	decimal++;
    delay(300);
  }
  
  for(int i = 0; i < 8; i++){
    digitalWrite(ledBits[i], bitRead(decimal,i));
  }
}