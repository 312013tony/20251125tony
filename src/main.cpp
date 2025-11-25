#include <Arduino.h>

// LED pin and blink interval (ms)
const uint8_t LED_PIN = 22;
const unsigned long BLINK_DELAY = 500;

void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	digitalWrite(LED_PIN, HIGH);
	delay(BLINK_DELAY);
	digitalWrite(LED_PIN, LOW);
	delay(BLINK_DELAY);
}

