void setup() {
	Serial.begin(9600); // setup serial console
}

void loop() {
	Serial.print("Hello World!"); // print our message to serial console
	Serial.println("");
	delay(500); // wait 500ms
}
