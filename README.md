# Arduino Object Detecting Smart Car


<p align="center">
  <img src="https://img.shields.io/badge/Arduino-Uno-blue?logo=arduino" />
  <img src="https://img.shields.io/badge/Language-C%2B%2B-orange?logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Platform-Arduino-green" />
  <img src="https://img.shields.io/badge/Category-Robotics-red" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen" />
 <img src="https://img.shields.io/badge/Purpose-Educational-blue" />
</p>

An Arduino-based autonomous obstacle detecting car that uses an ultrasonic sensor mounted on a servo motor to scan its surroundings and automatically change direction to avoid obstacles.

This project demonstrates the integration of sensors, actuators, and simple decision-making logic to create a basic autonomous robotic vehicle.

---

## Project Overview

The smart car continuously moves forward while monitoring the distance to nearby objects using an ultrasonic sensor. When an obstacle is detected within a predefined range, the car stops and scans both the left and right directions using a servo motor.

Based on the measured distances, the system determines which direction has more available space and turns accordingly to avoid the obstacle before continuing forward.

---

## Hardware Components

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Servo Motor
* L298N Motor Driver Module
* DC Motors
* Robot Chassis with Wheels
* Battery Pack
* Jumper Wires

---

## Features

* Real-time obstacle detection
* Automatic obstacle avoidance
* Servo-based environmental scanning
* Autonomous navigation

---

## Working Principle

1. The ultrasonic sensor measures the distance to objects in front of the vehicle.
2. If an obstacle is detected within a predefined threshold distance, the car stops.
3. The servo motor rotates the ultrasonic sensor to scan the left and right directions.
4. Distances in both directions are measured and compared.
5. The car turns toward the direction with greater free space.
6. The vehicle resumes forward movement.

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

## Setup and Running the Project

1. Assemble the robot chassis and mount the DC motors.
2. Connect the motors to the L298N motor driver module.
3. Connect the ultrasonic sensor and servo motor to the Arduino Uno.
4. Upload `code_object_detection_car.ino` using the Arduino IDE.
5. Power the system using the battery pack.
6. Place the robot on a flat surface and allow it to navigate autonomously.

---

## Demonstration

After uploading the code and powering the robot, the car will begin moving forward. When an obstacle is detected, the vehicle stops, scans the surroundings, and chooses the direction with more available space before continuing.

---

## Learning Outcomes

Through this project, the following concepts were explored:

* Arduino programming fundamentals
* Interfacing sensors with microcontrollers
* Distance measurement using ultrasonic sensors
* Motor control using the L298N motor driver
* Servo motor control for directional scanning
* Basic robotics navigation and decision-making logic

---

## Future Improvements

Potential extensions for this project include:

* Camera-based object detection
* AI-based navigation and path planning
* Improved obstacle detection accuracy
* Mobile application control
* Integration with wireless communication modules

---

## Important Notes

* Ensure the power supply can provide sufficient current for the motors.
* Loose wiring can cause unstable movement or incorrect sensor readings.
* Ultrasonic sensors may give inaccurate readings on soft or angled surfaces.

---

## Author

Pavani Patel

---

## License
This project is intended for educational purposes. You are free to modify and use the code for personal or academic projects.


---

If you find this project useful or interesting, consider starring the repository.
