int LED = 5;
int Switch = 4;
int SwitchState = 0;
void setup() {
  // put your setup code here, to run once:
 pinMode(Switch, INPUT);
 pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  SwitchState = digitalRead(Switch);
  if(Switch == 1)
   {
     digitalWrite(LED, HIGH);
     delay(200);
   }
  if(Switch == 0)
  {
     digitalWrite(LED, LOW);
     delay(200);

  }
}

