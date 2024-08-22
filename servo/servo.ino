#include <Servo.h>  // Corrected the include statement

Servo pwm;  // Correctly declare the Servo object

void setup() {
  pwm.attach(11);  // Attach the servo control to pin 11
}

void loop() {
  pwm.write(0);    // Move servo to 0 degrees
  delay(500);      // Wait for 500 milliseconds

  pwm.write(180);  // Move servo to 180 degrees
  delay(500);      // Wait for 500 milliseconds

  pwm.write(90);    // Move servo back to 0 degrees
  delay(500);      // Wait for 500 milliseconds
}

