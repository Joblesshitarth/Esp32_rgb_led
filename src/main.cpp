#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN 48
#define NUM_PIXELS 1

Adafruit_NeoPixel strip(NUM_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  Serial.println("RGB LED Initialized on GPIO 48");
}

void loop() {
  // Red
  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.show();
  delay(1000);

  // Green
  strip.setPixelColor(0, strip.Color(0, 255, 0));
  strip.show();
  delay(1000);

  // Blue
  strip.setPixelColor(0, strip.Color(0, 0, 255));
  strip.show();
  delay(1000);
}