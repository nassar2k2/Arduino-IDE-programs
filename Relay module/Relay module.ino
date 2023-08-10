int relayInput = 4;
void setup() 
{
  pinMode(relayInput, OUTPUT);
 
}

void loop() 
{
  digitalWrite(relayInput, HIGH); // Turn the relay on
  delay(2000); // Wait 1 second
  digitalWrite(relayInput, LOW); // Turn the relay Off
  delay(2000); // Wait 1 second
}