//Sam Funk
//LED Button Blinker
//When the button is pressed, the LED will blink on and off at a rate of 5 times per second. It will also print "Blink" in the serial monitor each time it comes on.

int ledPin = 2;                 //All variables will be used later as a substitution for a number. The variable names are easier to remember than the numbers.
int buttonPin = 12;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);         //buttonState is the state of the buttonPin (High, or Low)
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Blink");
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);                  //This turns off the LED when the button isn't being pressed.
  }
  
  }
