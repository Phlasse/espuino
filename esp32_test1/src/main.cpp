#include <Arduino.h>

/*
  Simple Blink sketch
  simple-blink.cpp
  Use for PlatformIO demo

  From original Arduino Blink Sketch
  https://www.arduino.cc/en/Tutorial/Blink
  
  DroneBot Workshop 2021
  https://dronebotworkshop.com
*/

// Set LED_BUILTIN if undefined or not pin 13
int led = 2;

void setup()
{
  // Initialize LED pin as an output.
  pinMode(led, OUTPUT);
}

void loop()
{
  // Set the LED HIGH
  digitalWrite(led, HIGH);

  // Wait for a second
  delay(4000);

  // Set the LED LOW
  digitalWrite(led, LOW);

   // Wait for a second
  delay(1000);
}