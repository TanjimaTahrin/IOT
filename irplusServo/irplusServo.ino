#include <Servo.h>

Servo myServo;  // Create a servo object to control a servo

int servoPin = 9;     // Define the pin where the servo is connected
int irSensorPin = 2;  // Define the pin where the IR sensor is connected
int irSensorValue;    // Variable to store the IR sensor value

void setup() {
  myServo.attach(servoPin);  // Attach the servo to the specified pin
  pinMode(irSensorPin, INPUT); // Set the IR sensor pin as input
  myServo.write(0);  // Initial position of the servo (OFF state)
}

void loop() {
  irSensorValue = digitalRead(irSensorPin);  // Read the IR sensor value

  if (irSensorValue == HIGH) {  // If the IR sensor detects an object
    myServo.write(90);  // Rotate the servo to 90 degrees (ON state)
  } else {
    myServo.write(0);   // Rotate the servo back to 0 degrees (OFF state)
  }

  delay(50);  // Small delay to debounce the sensor input
}