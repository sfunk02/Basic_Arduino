//Sam Funk
//helloArduino
//Blinks an LED twice per second and prints "Blink".

void setup() {
  Serial.begin(9600); //Serial.begin() will tell the computer at what rate to send data. This must correspond with the rate at which the Arduino reads data.
  pinMode(8, OUTPUT); //pinMode selects which pin will be used (in this case, pin 8)
}

void loop() {
  digitalWrite(8, HIGH); //when the pin is switched to high, it turns on the LED
  Serial.println("Blink"); //this command prints "Blink" in the module every time the LED turns on
  delay(250); //the bigger the delay, the slower the LED will blink
  digitalWrite(8, LOW); //when the pin is switched to low, it turns off the LED
  delay(250);
}
  //Credit to: http://www.circuitbasics.com/arduino-basics-controlling-led/
