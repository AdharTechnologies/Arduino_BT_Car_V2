#include "nanoConfig.h"

#define IN1A 5
#define IN1B 6
#define IN2A 9
#define IN2B 10

int delay_time = 5;
char currentCommand = ' ';

unsigned long previousMillis = 0;
const long interval = 1; // Interval between speed changes

void setup() {
  // Begin serial communication
  Serial.begin(9600);
  
  // Begin serial communication with Arduino and HC-05
  mySerial.begin(9600);

  pinMode(IN1A,OUTPUT);
  pinMode(IN1B,OUTPUT);
  pinMode(IN2A,OUTPUT);
  pinMode(IN2B,OUTPUT);

  delay(1000);
  Serial.println("Started");
}

void loop() {
  if (mySerial.available()) {
    currentCommand = mySerial.read();
    Serial.print("Data = "); 
    Serial.println(currentCommand); // Print received data
  }

  unsigned long currentMillis = millis();

  //Will execute until next command is not received  
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    controlMotors();
  }
}

void controlMotors() {
  switch (currentCommand) {
    case 'F':
      moveForward();
      break;
    case 'B':
      moveBackward();
      break;
    case 'R':
      turnRight();
      break;
    case 'L':
      turnLeft();
      break;
    default:
      stopMotors();
      break;
  }
}

void moveForward() {

  digitalWrite(IN1A,HIGH); 
  digitalWrite(IN1B,LOW);
  digitalWrite(IN2A,HIGH); 
  digitalWrite(IN2B,LOW);

}

void moveBackward() {

  digitalWrite(IN1A,LOW); 
  digitalWrite(IN1B,HIGH);
  digitalWrite(IN2A,LOW); 
  digitalWrite(IN2B,HIGH);

}

void turnRight() {

  digitalWrite(IN1A,LOW); 
  digitalWrite(IN1B,HIGH);
  digitalWrite(IN2A,HIGH); 
  digitalWrite(IN2B,LOW);

}

void turnLeft() {

  digitalWrite(IN1A,HIGH); 
  digitalWrite(IN1B,LOW);
  digitalWrite(IN2A,LOW); 
  digitalWrite(IN2B,HIGH);

}

void stopMotors() {

  digitalWrite(IN1A,LOW); 
  digitalWrite(IN1B,LOW);
  digitalWrite(IN2A,LOW); 
  digitalWrite(IN2B,LOW);

}


