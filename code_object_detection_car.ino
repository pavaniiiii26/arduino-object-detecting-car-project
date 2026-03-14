#include <Servo.h>

Servo myservo;

// Ultrasonic pins
const int trigPin = 9;
const int echoPin = 10;

// Motor pins
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

// Servo pin
const int servoPin = 6;

int obstacleDistance = 25;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  myservo.attach(servoPin);
  myservo.write(90);

  Serial.begin(9600);
}

int getDistance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  return distance;
}

void forward() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void left() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void loop() {

  int front = getDistance();

  if (front > obstacleDistance) {

    forward();

  } else {

    stopCar();
    delay(200);

    backward();       // move back slightly
    delay(250);

    stopCar();
    delay(200);

    // Scan Right
    myservo.write(30);
    delay(300);
    int rightDist = getDistance();

    // Scan Left
    myservo.write(150);
    delay(300);
    int leftDist = getDistance();

    // Center servo
    myservo.write(90);

    if (rightDist > leftDist) {

      right();
      delay(200);

    } else {

      left();
      delay(200);
    }

    forward();   // move ahead after turning
    delay(300);
  }
}
