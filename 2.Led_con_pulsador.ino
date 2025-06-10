const int ledBits[8]={2,3,4,5,6,7,8,9};
const int decimal =9;


void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<8;i++){
    pinMode(ledBits[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 8; i++){
    digitalWrite(ledBits[i], bitRead(decimal,i));
  }
}