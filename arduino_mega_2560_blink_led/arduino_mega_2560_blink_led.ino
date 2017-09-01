int LED_PIN = 13;

void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	digitalWrite(LED_PIN, HIGH); // turn the led on
	delay(500); // wait 500ms
	digitalWrite(LED_PIN, LOW); // turn the led off
	delay(500); // wait 500ms
}
