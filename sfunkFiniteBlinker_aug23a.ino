//Sam Funk
//Finite LED Blinker
//Blinks an LED 10 times and say's "Done" at the end.

int count = 0;

void setup() {
  Serial.begin(9600);    //Serial.begin() will tell the computer at what rate to send data. This must correspond with the rate at which the Arduino reads data.
  pinMode(8, OUTPUT);    //pinMode selects which pin will be used (in this case, pin 8)
}

void loop() {
  if (count == 10) {              //When count reaches 10, the program "stops" and prints "Done".
    Serial.println("Done");
    delay(10000);
    count = count + 1;          //This causes count to go over 10, preventing the program from printing "Done" infinitely.
  } else if (count < 10) {       //If count is less than 10, the pin will continue to blink.
    digitalWrite(8, HIGH);       //when the pin is switched to high, it turns on the LED
    delay(250);                 //the bigger the delay, the slower the LED will blink
    digitalWrite(8, LOW);        //when the pin is switched to low, it turns off the LED
    delay(250);
    count = count + 1;          //Count goes up 1 each time the pin blinks.
    Serial.println(count);      //The program prints the number of times the pin has blinked.
  } else if (count == 11) {
    Serial.println("Already finished!");    //After ten seconds of being completed, the program will print "Already finished!".
    count++;
  }
}
