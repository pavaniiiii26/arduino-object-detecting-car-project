# arduino-object-detecting-car-project
An Arduino-based autonomous obstacle detection car that uses an ultrasonic sensor mounted on a servo motor to scan its surroundings and automatically change direction to avoid obstacles.

# 🚗 Arduino Object Detecting Smart Car

An autonomous smart car built using Arduino that can detect and avoid obstacles automatically.  
The system uses an ultrasonic sensor mounted on a servo motor to scan the surrounding environment and determine the safest direction for movement.

This project demonstrates the integration of sensors, actuators, and basic decision-making logic in robotics.

---

## 📌 Project Overview
The car continuously moves forward while monitoring the distance to nearby objects using an ultrasonic sensor.  
When an obstacle is detected within a predefined range, the car stops and scans both the left and right directions using a servo motor.

Based on the measured distances, the car selects the direction with more free space and turns accordingly to avoid the obstacle.

---

## 🛠 Hardware Components
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Servo Motor
- L298N Motor Driver Module
- DC Motors
- Robot Chassis with Wheels
- Battery Pack
- Jumper Wires

---

## ⚙️ Features
- Real-time obstacle detection  
- Automatic obstacle avoidance  
- Servo-based environmental scanning  
- Autonomous navigation  

---

## 🔧 How It Works
1. The ultrasonic sensor measures the distance to objects in front of the car.
2. If an obstacle is detected within a set distance, the car stops.
3. The servo motor rotates the sensor to check the **left and right directions**.
4. The system compares the available space in both directions.
5. The car turns toward the direction with **more free space** and continues moving.

---

## 📂 Project Structure

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
## 🎥 Demo
Watch the smart car detecting and avoiding obstacles.

---

## 📚 Learning Outcomes
Through this project I learned:
- Arduino programming basics
- Sensor integration
- Motor control using motor drivers
- Basic robotics navigation logic

---

## 🚀 Future Improvements

- Add camera-based object detection
- Implement AI-based navigation
- Improve obstacle detection accuracy
- Add mobile app control

---

## 👩‍💻 Author
**Pavani Patel**  

---

⭐ If you found this project interesting, feel free to star the repository!
