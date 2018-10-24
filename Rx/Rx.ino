#include <SoftwareSerial.h>

SoftwareSerial GSerial(11,12); 
char rec=0;

void setup()
{
  Serial.begin(9600);
  GSerial.begin(400);
}

void loop()
{
  if(GSerial.available() != 0)
  {    
    rec = GSerial.read();
    if(rec=='^')
    {
      Serial.print("    ");
    }
    else if(rec=='&')
    {
      Serial.print("Nothing");
    }
    
    else
    {
      Serial.print(rec);
    }
  }
}
