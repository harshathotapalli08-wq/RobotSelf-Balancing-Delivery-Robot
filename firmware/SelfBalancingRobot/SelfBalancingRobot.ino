
/*
  Project: Self-Balancing Delivery Robot
  Platform: Arduino IDE

  This is a starter sketch for testing the project setup.
  It does not control the motors or balance the robot yet.
*/

void setup() {
  Serial.begin(115200);
  delay(500);

  Serial.println();
  Serial.println("Self-Balancing Delivery Robot");
  Serial.println("Firmware started successfully.");
  Serial.println("Hardware configuration pending.");
}

void loop() {
  Serial.println("Robot firmware is running.");
  delay(1000);
}

