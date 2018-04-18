void setup() {
 pinMode(7,OUTPUT);
 pinMode(6,INPUT);

}

void loop() {
  boolean val=digitalRead(6);
  if(val)
  {
    digitalWrite(7,HIGH);
    delay(250);
    digitalWrite(7,LOW);
    delay(250);
    }
    else
    {
     digitalWrite(7,HIGH);
    delay(500);
      digitalWrite(7,LOW);
    delay(500); 
      }

}
