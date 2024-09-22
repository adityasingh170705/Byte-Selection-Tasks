int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int buttonPin = 2;
int buttonState = 0;
int ledNum = 0;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(buttonPin, INPUT);
  
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
}

void loop() {
    buttonState = digitalRead(buttonPin);

    if (buttonState == LOW) {
        delay(200);

        ledNum++;
        if (ledNum > 2) {
            ledNum = 0; 
        }

        switch (ledNum) {
            case 0:
                digitalWrite(redPin, HIGH);
                digitalWrite(greenPin, LOW);
                digitalWrite(bluePin, LOW);
                break;
            case 1:
                digitalWrite(redPin, LOW);
                digitalWrite(greenPin, HIGH);
                digitalWrite(bluePin, LOW);
                break;
            case 2:
                digitalWrite(redPin, LOW);
                digitalWrite(greenPin, LOW);
                digitalWrite(bluePin, HIGH);
                break;
        }
    }
}

