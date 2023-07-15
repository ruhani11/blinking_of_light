/* 
  This program blinks LED connection to the pin number 13
*/  
int led1 = 12;
void setup()  
{  
  pinMode(led1, OUTPUT);  
}  
void loop()  
{  
 // the first LED is made to blink one time  
  digitalWrite(led1, HIGH);  
  delay(1000); // delay time in milliseconds  
  digitalWrite(led1, LOW);  
  delay(1000);  
  }  