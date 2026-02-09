#include "BluetoothSerial.h"

BluetoothSerial SerialBT;  // Objeto para comunicación Bluetooth
int emisorTrig = 15;   //Pin digital 2 para el Trigger del sensor
int receptorEcho = 17;   //Pin digital 3 para el Echo del sensor

void setup() {
  Serial.begin(115200);   // Iniciar el puerto seri
  pinMode(emisorTrig, OUTPUT); //pin como salida
  pinMode(receptorEcho, INPUT);  //pin como entrada
  digitalWrite(emisorTrig, LOW);//Inicializamos el pin con 0
  SerialBT.begin("ESP32_Chema"); // Nombre del dispositivo Bluetooth
  
}
void loop()
{

  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(emisorTrig, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(emisorTrig, LOW);

  t = pulseIn(receptorEcho, HIGH); //obtenemos el ancho del pulso

  d = t/58;             //escalamos el tiempo a una distancia en cm
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  SerialBT.print(d);         // Enviar el valor por Bluetooth
  delay(100);                          // Pequeña pausa para estabilidad
 
    if (d<100) //Si la distancia es menor a 100 cm enciende el LED del pin 13
  {
    Serial.println("Nada cerca");
  }
  else
  {
    Serial.println("Ahora si esta cerca");
  }
 }