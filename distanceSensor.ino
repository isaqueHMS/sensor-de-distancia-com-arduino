#include <HCSR04.h>
HCSR04 sensorDistance(13, 12);
float distancia =0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
distancia = sensorDistance.dist();
Serial.println(distancia);
}
