#include <Servo.h>  // Correctly include the Servo library

Servo pwm;  // Declare a Servo object

void setup() {
  pwm.attach(11);  // Attach the servo control to pin 11
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle += 1) {
    pwm.write(angle);  // Set the servo to the current angle
    delay(15);         // Wait for the servo to reach the position
  }

  // Sweep from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle -= 1) {
    pwm.write(angle);  // Set the servo to the current angle
    delay(15);         // Wait for the servo to reach the position
  }
}
