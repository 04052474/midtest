const byte pin=A0;
int val;
float R=1087600;
float Vin=5;
float sensorVoltage, sensorValue;
void setup() {
  Serial.begin(9600);
  pinMode(14,OUTPUT);
  sensorVoltage = 0;
   sensorValue = 0;
}

void loop() {
  byte i;
  float R1,R2;
   
  for(i=0;i<=5;i++)
  sensorValue = 0.7*sensorValue+0.3*analogRead(A0);
  
  Serial.print("sensorValue=");
  Serial.print(sensorValue);
  sensorVoltage = sensorValue*5/4095;
  R1=sensorVoltage*R/Vin;
  R2 = R-R1;
  sensorVoltage = Vin * R1 / (R1+R2);
  Serial.print("  sensorVoltage=");
  Serial.print(sensorVoltage);
  Serial.println();
  delay(500);

}
