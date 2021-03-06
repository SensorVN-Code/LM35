/*
  Created by SENSORVN.COM, February 25, 2021.
  Wiring
  VCC -> 3.3V
  GND -> GND
  OUT -> A0
*/
int sensorPin = A0;

void setup()
{
   Serial.begin(115200);
}

void loop()
{
  int reading = analogRead(sensorPin);  
  float voltage = reading * 3.3 / 1024.0;
  float temp = voltage * 100.0 - 1.0;
  Serial.println(temp);
  delay(1000);
}
