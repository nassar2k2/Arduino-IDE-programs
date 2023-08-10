     // Assign LED1 to pin GPIO2

     // Assign LED1 to pin GPIO16
void setup() 
{

  // initialize GPIO2 and GPIO16 as an output

  pinMode(D4, OUTPUT);

}

// the loop function runs forever

void loop() {

  digitalWrite(D4, LOW);    // turn the LED off
  delay(1000);
  digitalWrite(D4, HIGH);
  delay(1000);                // wait for a second

       // wait for a second

}
