//Sam Funk
//Two Button LED Blinker
//Two buttons are connected separately to two LEDs. When a button is pressed, the corresponding LED blinks.

int ledPin = 2;                 //All variables will be used later as a substitution for a number. The variable names are easier to remember than the numbers.
int buttonPin = 12;
int buttonPin2 = 13;
int ledPin2 = 4;
int buttonState = 0;
int buttonState2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);          //Sets the pins to either be input (for buttons) or output (for LEDs)
  pinMode(buttonPin, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);         //buttonState is the state of the buttonPin (High, or Low)
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Blink");
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  } else if (buttonState == LOW) {
    digitalWrite(ledPin, LOW);                  //This turns off the LED when the button isn't being pressed.
  }
  
  if (buttonState2 == HIGH) {
    digitalWrite(ledPin2, HIGH);
    Serial.println("Blink2");
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
  } else if (buttonState2 == LOW) {
    digitalWrite(ledPin2, LOW);                  //This turns off the LED when the button isn't being pressed.
  }
  }



  
