#include <SoftwareSerial.h>

int relay1=2;
int relay2=3;
int relay3=4;
char val;
void setup() {
  // put your setup code here, to run once:
pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  
Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
 {
  val=Serial.read();
  if(val=='1' || val=='2')
    {
      digitalWrite(relay1,LOW);
      delay(1000);
      digitalWrite(relay1,HIGH);
      digitalWrite(relay3,LOW);
      delay(1000);
      digitalWrite(relay3,HIGH);
      digitalWrite(relay1,LOW);
      delay(1000);
      digitalWrite(relay1,HIGH);
    }
   else if(val=='3' || val=='4')
    {
       digitalWrite(relay3,LOW);
      delay(1000);
      digitalWrite(relay3,HIGH);
      digitalWrite(relay1,LOW);
      delay(1000);
      digitalWrite(relay1,HIGH);
    }
    else if(val=='A' || val=='B' || val=='C' || val=='D')
    {
      digitalWrite(relay2,LOW);
      delay(1000);
      digitalWrite(relay2,HIGH); 
    }
    else if(val=='9')
    {
      digitalWrite(relay1,LOW);
      delay(1000);
      digitalWrite(relay1,HIGH);
      digitalWrite(relay2,LOW);
      delay(1000);
      digitalWrite(relay2,HIGH);
      digitalWrite(relay3,LOW);
      delay(1000);
      digitalWrite(relay3,HIGH);
      digitalWrite(relay1,LOW);
      delay(1000);
      digitalWrite(relay1,HIGH);
    }
    else if(val=='I')
    {
      digitalWrite(relay2,LOW);
      delay(1000);
      digitalWrite(relay2,HIGH);
      digitalWrite(relay3,LOW);
      delay(1000);
      digitalWrite(relay3,HIGH);
      digitalWrite(relay1,LOW);
      delay(1000);
      digitalWrite(relay1,HIGH);
    }
  }
}
