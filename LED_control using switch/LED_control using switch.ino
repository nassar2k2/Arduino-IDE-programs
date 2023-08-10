#define LED 5 // D1(gpio5)
#define BUTTON 4 //D2(gpio4)
//Let's say you have your push button on pin 4
int buttonState; // actual read value from pin4
int oldbuttonState; // last read value from pin4
int lightsOn; // is the switch on = 1 or off = 0

void setup() { 
 pinMode(BUTTON, INPUT); // push button 
 pinMode(LED, OUTPUT); // anything you want to control using a switch e.g. a Led
}
void loop() {
 buttonState = digitalRead(BUTTON); // read the pushButton State
 if (buttonState != oldbuttonState) // catch change
 {
 oldbuttonState = buttonState;
  if (buttonState == HIGH)
  {
  // toggle
  lightsOn = !lightsOn;
  }
 }
 if(lightsOn)
 {
 digitalWrite(LED, HIGH); // set the LED on
 } else {
 digitalWrite(LED, LOW); // set the LED off
 }
 }
 