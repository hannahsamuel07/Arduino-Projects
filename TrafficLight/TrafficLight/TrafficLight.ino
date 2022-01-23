void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(7, HIGH);
  Serial.println("RED Light: Stop!");
  delay(1000); // Wait for 1000 millisecond(s)
 digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(6, HIGH);
  Serial.println("YELLOW Light: Slow!");
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);
  digitalWrite(5,HIGH);
   Serial.println("GREEN Light: GO!");
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
}
