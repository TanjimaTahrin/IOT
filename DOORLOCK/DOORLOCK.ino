#include <Servo.h>
#include <Keypad.h>

#define SERVO_PIN 11  // Pin connected to servo motor

const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {3, 4, 5, 6}; 
byte colPins[COLS] = {7, 8, 9, 10};

Servo myservo;

// Initialize Keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Declare the isLocked variable
bool isLocked = true;

void setup() {
  Serial.begin(9600);
  myservo.attach(SERVO_PIN);
  lockDoor(); // Lock the door initially
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key == '8') {  // If '8' is pressed
      unlockDoor();    // Unlock the door
    } else {
      Serial.println("Press '8' to unlock the door."); // Prompt for correct key
    }
  }

  Serial.print("Door is ");
  Serial.println(isLocked ? "Locked" : "Unlocked");

  delay(1000); 
}

void lockDoor() {
  myservo.write(0);  // Move servo to 0 degrees to lock the door
  isLocked = true;
}

void unlockDoor() {
  myservo.write(180); // Move servo to 180 degrees to unlock the door
  isLocked = false;
  delay(5000);        // Keep the door unlocked for 5 seconds
  lockDoor();         // Lock the door again
}