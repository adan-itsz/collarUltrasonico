long distancia;
long tiempo;
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, LOW);
delayMicroseconds(5);
digitalWrite(9, HIGH);//envia pulso ultrasonico
delayMicroseconds(10);
tiempo=pulseIn(8, HIGH);
distancia= int(.017 * tiempo);
if(distancia <= 20.0){
   digitalWrite(6,HIGH);
  }
  else{
   digitalWrite(6,LOW);
    }

}
