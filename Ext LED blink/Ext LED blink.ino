
void setup()
{
  pinMode(D1, OUTPUT);
}
void loop()
{
  digitalWrite(D1, LOW);
  delay(10000);
  digitalWrite(D1, HIGH);
  delay(1000);
}

