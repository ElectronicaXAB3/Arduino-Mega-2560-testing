int LED_PIN = 13;

void setup() {
	// nothing happens in setup
}

void loop() {
	// fade in from min to max in increments of 5 points
	for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
		analogWrite(LED_PIN, fadeValue); // sets the value (range from 0 to 255)
		delay(20); // wait for 30 milliseconds to see the dimming effect
	}

	// fade out from max to min in increments of 5 points
	for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
		analogWrite(LED_PIN, fadeValue); // sets the value (range from 0 to 255)
		delay(20); // wait for 30 milliseconds to see the dimming effect
	}
}
