/*
 * Comunicación: Android-Bluetooth-Arduino
 * Coded by: Ing. Josue Emmanuel Cruz Barragan
 */
 
int Mot1 = 12;
int Mot2 = 11;
int Mot3 = 10;
int Mot4 = 9;
int estado = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Mot1,OUTPUT);
  pinMode(Mot2,OUTPUT);
  pinMode(Mot3,OUTPUT);
  pinMode(Mot4,OUTPUT);

}

void loop() {
  
  if (Serial.available()>0){
    estado = Serial.read();
  }
  /*
   * Control de Motor Uno
   */
  if (estado == '1'){digitalWrite(Mot1,HIGH);}
  if (estado == '2'){digitalWrite(Mot1,LOW);}
  /*
   * Control de Motor Dos
   */
  if (estado == '3'){digitalWrite(Mot2,HIGH);}
  if (estado == '4'){digitalWrite(Mot2,LOW);}
  /*
   * Control de Motor Tres
   */
  if (estado == '5'){digitalWrite(Mot3,HIGH);}
  if (estado == '6'){digitalWrite(Mot3,LOW);}
  /*
   * Control de Motor Cuatro
   */
  if (estado == '7'){digitalWrite(Mot4,HIGH);}
  if (estado == '8'){digitalWrite(Mot4,LOW);}
}
