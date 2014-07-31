#include<Servo.h>
Servo servo;
int totalLugares=9;
byte valor[10]={B1111110,B0110000,B1101101,B1111001,B0110011,B1011011,B1011111,B1110000,B1111111,B1111011};


void dibujarNumero(int t){
 byte pin=8;
  for(byte mascara=0000001; mascara > 0; mascara <<= 1){
    if(valor[t] & mascara)
      digitalWrite(pin,HIGH);
    else
      digitalWrite(pin,LOW);
      pin--;
  }
}


void setup(){
  Serial.begin(9600);
  for(byte i=2 ; i<9 ;i++)
    pinMode(i,OUTPUT);
    servo.attach(9);
    dibujarNumero(totalLugares);
}
void loop(){
    int estadoBotonSalida=analogRead(A0);
    int estadoBotonEntrada=analogRead(A1);
   if(totalLugares >0 & estadoBotonEntrada > 700){     
      totalLugares--;
      Serial.println(totalLugares);
      servo.write(90);
      delay(900);
      servo.write(0);
      delay(900);
      dibujarNumero(totalLugares);
    }
    if(totalLugares <9 & estadoBotonSalida > 700){
      totalLugares++;
      Serial.println(totalLugares);
      servo.write(90);
      delay(900);
      servo.write(0);
      delay(900);
      dibujarNumero(totalLugares); 
  }
}


