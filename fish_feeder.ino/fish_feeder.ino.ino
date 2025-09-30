#include <Servo.h>

Servo myServo;

// Pin assignments
const int servoPin = 9;     // Servo PWM pin (orange wire)
const int mosfetPin = 8;    // MOSFET gate control pin

// Timing
const unsigned long interval = 28800000UL; // 6 hours in ms (6*60*60*1000)
unsigned long previousMillis = 0;

void setup() {
  myServo.attach(servoPin);

  pinMode(mosfetPin, OUTPUT);
  digitalWrite(mosfetPin, HIGH); // MOSFET OFF at startup (P-MOSFET off = gate high)

  previousMillis = millis(); // start timing
 
 // Turn ON servo power
    digitalWrite(mosfetPin, LOW);  
    delay(500);  // wait for boost & servo to power up

    // Move servo 0 -> 180 -> 0
    myServo.write(180);
    delay(1000);   // give servo time to reach position
    myServo.write(0);
    delay(1000);
    myServo.write(180);
    delay(1000);   // give servo time to reach position
    myServo.write(0);
    delay(1000);

    // Turn OFF servo power
    digitalWrite(mosfetPin, HIGH);


}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // Turn ON servo power
    digitalWrite(mosfetPin, LOW);  
    delay(500);  // wait for boost & servo to power up

    // Move servo 0 -> 180 -> 0
    myServo.write(180);
    delay(1000);   // give servo time to reach position
    myServo.write(0);
    delay(1000);
    myServo.write(180);
    delay(1000);   // give servo time to reach position
    myServo.write(0);
    delay(1000);

    // Turn OFF servo power
    digitalWrite(mosfetPin, HIGH);
  }
}

