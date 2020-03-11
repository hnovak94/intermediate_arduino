
int ledpin = 13; // ledpin is 13
int interruptPin = 2;
int counter = 0; // sets counter equal to zero


void setup() {

	pinMode(ledpin, OUTPUT);
	pinMode(interruptPin, INPUT_PULLUP); // makes interruptPin state 1
	attachInterrupt(digitalPinToInterrupt(2), on, RISING); // when interruptPin1 goes from low to high the LED turns on
	attachInterrupt(digitalPinToInterrupt(3), off, FALLING); // when interruptPin goes from high 
	Serial.begin(9600); // begins code
}

void loop() {} // not using void loop 

void on() {

	digitalWrite(ledpin, HIGH); // light is on
	Serial.println(counter++); // counter goes up by 1 when it is interrupted
}

void off() {

	digitalWrite(ledpin, LOW); // light is off
}

