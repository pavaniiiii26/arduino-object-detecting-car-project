# Arduino Object Detecting Smart Car

<p align="center">
  <img src="images/car_setup.jpg" alt="Arduino Smart Car" width="700">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-Uno-blue?logo=arduino" />
  <img src="https://img.shields.io/badge/Language-C%2B%2B-orange?logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Platform-Arduino-green" />
  <img src="https://img.shields.io/badge/Category-Robotics-red" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen" />
</p>

An Arduino-based autonomous robotic car capable of detecting obstacles and navigating around them using an ultrasonic sensor mounted on a servo motor. The system scans its surroundings and automatically selects the safest direction to move.

This project demonstrates how a simple robotics platform can perform autonomous navigation using distance sensing and motor control.

---

## Overview

The smart car moves forward continuously while monitoring the distance to nearby objects using an ultrasonic sensor.

If an obstacle is detected in front of the vehicle, the system stops and rotates the sensor using a servo motor to scan the left and right directions. The available space in each direction is measured and compared, allowing the vehicle to choose the safest path before continuing forward.

---

## Hardware Requirements

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Servo Motor
* L298N Motor Driver Module
* DC Motors
* Robot Chassis with Wheels
* Battery Pack
* Jumper Wires

---

## Project Structure

```
arduino-object-detecting-car
│
├── code
│   └── code_object_detection_car.ino
│
├── images
│   ├── car_setup.jpg
│   └── car_setup2.jpg
│
├── circuit
│   └── circuit_diagram_and_connections.png
│
└── README.md
```

---

## Working Principle

1. The ultrasonic sensor continuously measures the distance to objects in front of the vehicle.
2. If an object is detected within a predefined range, the car stops.
3. The servo motor rotates the ultrasonic sensor to scan the environment.
4. Distances to the left and right are measured.
5. The vehicle compares both distances and turns toward the direction with more available space.
6. The car continues moving forward.

---

## Features

* Real-time obstacle detection
* Automatic obstacle avoidance
* Servo motor-based environment scanning
* Fully autonomous navigation

---

## How to Run the Project

1. Assemble the robot chassis and attach the DC motors.
2. Connect the motors to the L298N motor driver module.
3. Connect the ultrasonic sensor and servo motor to the Arduino Uno.
4. Upload `code_object_detection_car.ino` using the Arduino IDE.
5. Power the system with a battery pack.
6. Place the car on a flat surface and allow it to navigate autonomously.

---

## Circuit Diagram

Refer to the circuit diagram inside the `circuit` folder for wiring details.

---

## Future Improvements

* Camera-based object detection
* AI-assisted navigation
* Improved obstacle detection accuracy
* Mobile application control

---

## Author

**Pavani Patel**

---

## License

This project is intended for educational purposes. You are free to modify and use the code for personal or academic projects.
