int i;
int j;
const byte num[10]={B00111111, B00000110,
                    B01011011, B01001111,
                    B01100110, B01101101,
                    B01111101, B00000111,
                    B01111111, B01101111 };
const int seg[]={8,9,10,11,12,13,14};
void setup()
{
  for(i=0;i<8;i++)
  pinMode(seg[i],OUTPUT);
  }
  void loop()
  {
    for(i=0;i<10;i++)
    {
      for(j=0;j<8;j++)
      {
        if(bitRead(num[i],j))
          digitalWrite(seg[j],HIGH);
          else
            digitalWrite(seg[j],LOW);
        }
        delay(500);
    }
   }
    
