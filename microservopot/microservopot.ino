
#include <Servo.h>
Servo myservo;                                
int potpin = A0;                          
int val;                                  
void setup()
{
 myservo.attach(6);                       
 myservo.writeMicroseconds(1500);      
 Serial.begin(9600);                     
}
void loop()
{
 val = analogRead(potpin);             
 val = map(val, 0, 1023, 1000, 2000);   
 myservo.writeMicroseconds(val);        
 Serial.println(val);                     
 delay(15);                               
}
