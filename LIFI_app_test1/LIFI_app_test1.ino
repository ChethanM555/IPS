#define datain 11
void setup() {
  // put your setup code here, to run once:
digitalWrite(datain,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(datain)==HIGH)
{
  readByte();
}
}
void readByte()
{
  delay(300);
  for(int i=0;i<8;i++)
  {
    Serial.print(digitalRead(datain));
    delay(100);
  } 
}
