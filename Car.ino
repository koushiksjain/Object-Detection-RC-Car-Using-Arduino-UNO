#include<Arduino.h>
// Motor A connections
const int motorAPin1 = 2; // Motor A Pin 1 connected to digital pin 2
const int motorAPin2 = 3; // Motor A Pin 2 connected to digital pin 3

// Motor B connections
const int motorBPin1 = 4; // Motor B Pin 1 connected to digital pin 4
const int motorBPin2 = 5; // Motor B Pin 2 connected to digital pin 5

void setup() {
  // Initialize motor pins as output
  pinMode(motorAPin1, OUTPUT);
  pinMode(motorAPin2, OUTPUT);
  pinMode(motorBPin1, OUTPUT);
  pinMode(motorBPin2, OUTPUT);
}

void loop() {
  // Move motors A and B forward
  moveMotorsForward();

  delay(2000); // Delay for 2 seconds

  // Stop motors A and B
  stopMotors();

  delay(1000); // Delay for 1 second

  // Move motors A and B backward
  moveMotorsBackward();

  delay(2000); // Delay for 2 seconds

  // Stop motors A and B
  stopMotors();

  delay(1000); // Delay for 1 second
}

void moveMotorsForward() {
  // Motor A
  digitalWrite(motorAPin1, HIGH);
  digitalWrite(motorAPin2, LOW);

  // Motor B
  digitalWrite(motorBPin1, HIGH);
  digitalWrite(motorBPin2, LOW);
}

void moveMotorsBackward() {
  // Motor A
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, HIGH);

  // Motor B
  digitalWrite(motorBPin1, LOW);
  digitalWrite(motorBPin2, HIGH);
}

void stopMotors() {
  // Motor A
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);

  // Motor B
  digitalWrite(motorBPin1, LOW);
  digitalWrite(motorBPin2, LOW);
}
