//the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 6 as an output.
  pinMode(6, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(3500);              // wait for a second
  digitalWrite(6, LOW);   // turn the LED off by making the voltage Low
  delay(3500);              // wait for a second
}
