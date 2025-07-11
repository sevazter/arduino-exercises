int pinPwm = 9;              
int pinPotenciometro = A0;   
int salidaPwm = 0;           

void setup() {
  pinMode(pinPwm, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lectura = analogRead(pinPotenciometro);          
  salidaPwm = map(lectura, 0, 1023, 0, 255);          
  
  analogWrite(pinPwm, salidaPwm);                      
  Serial.print("Lectura cruda: ");
  Serial.print(lectura);
  Serial.print("  -> Salida PWM: ");
  Serial.println(salidaPwm);

  delay(1000);  
}