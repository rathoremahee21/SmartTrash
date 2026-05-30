# SmartTrash – Smart Arduino-Based Waste Segregation System

SmartTrash is an Arduino-based smart dustbin designed to automate wet and dry waste segregation using sensors and embedded systems.

The system combines ultrasonic sensing, moisture detection, servo motor automation, and microcontroller programming to create a hygienic and touchless waste disposal solution.

Instead of manually sorting waste, SmartTrash automatically identifies waste type and opens the appropriate compartment lid, promoting cleaner and more efficient waste management.

---

## Project Objective

The primary goal of this project was to design a smart waste segregation system that:

* Reduces manual contact with waste
* Automates wet and dry waste classification
* Encourages hygienic and responsible waste disposal
* Demonstrates real-world applications of embedded systems and automation
* Integrates sensors, servo motors, and microcontrollers into a practical engineering solution

---

## How SmartTrash Works

The system follows a simple automated workflow:

```text
User approaches dustbin
          │
          ▼
 Ultrasonic Sensor detects object
          │
          ▼
 Moisture Sensor analyzes waste
          │
   ┌──────┴──────┐
   ▼             ▼
 Wet Waste    Dry Waste
   │             │
   ▼             ▼
Open Wet Lid  Open Dry Lid
   │             │
   └──────┬──────┘
          ▼
 Lid closes automatically
```

---

## System Architecture

```text
User Input
    │
    ▼
HC-SR04 Ultrasonic Sensor
    │
    ▼
Arduino Uno Controller
    │
    ▼
Soil Moisture Sensor
    │
 ┌──┴──────────┐
 ▼             ▼
Servo Motor 1  Servo Motor 2
(Wet Lid)      (Dry Lid)
```

---

## Features

* Automatic wet and dry waste segregation
* Touchless lid opening mechanism
* Ultrasonic hand/object detection
* Moisture-based waste classification
* Dual servo motor-controlled compartments
* Hygienic waste disposal system
* Embedded systems implementation using Arduino

---

## Hardware Components Used

| Component                 | Purpose                      |
| ------------------------- | ---------------------------- |
| Arduino Uno               | Main microcontroller         |
| HC-SR04 Ultrasonic Sensor | Detects hand/object presence |
| Soil Moisture Sensor      | Detects wet vs dry waste     |
| SG90 Servo Motors         | Opens compartment lids       |
| 9V Battery                | Power supply                 |
| Jumper Wires & Breadboard | Circuit connections          |

---

## Software & Technologies Used

* Arduino IDE
* C/C++ Programming
* Tinkercad Circuits
* Embedded Systems Programming

---

## Circuit Connections

| Component                 | Arduino Pin |
| ------------------------- | ----------- |
| Ultrasonic Sensor Trigger | D9          |
| Ultrasonic Sensor Echo    | D10         |
| Soil Moisture Sensor      | A0          |
| Servo Motor (Wet Lid)     | D5          |
| Servo Motor (Dry Lid)     | D6          |

---

## Project Workflow

1. The ultrasonic sensor detects a nearby hand/object.
2. Arduino activates waste classification logic.
3. Moisture sensor determines whether waste is wet or dry.
4. The appropriate servo motor rotates and opens the correct lid.
5. The lid remains open for a few seconds.
6. The system automatically closes the lid.

---

## Project Images

### Prototype

```md
![Prototype](images/prototype.png)
```

### Circuit Diagram

```md
![Circuit Diagram](images/circuit-diagram.png)
```

### Tinkercad Design

```md
![Tinkercad Design](images/tinkercad-design.png)
```

---

## Applications

* Smart homes and offices
* Schools and educational institutions
* Hospitals and medical facilities
* Airports, malls, and public places
* Smart city waste management systems

---

## Challenges Solved

* Hygienic touchless waste disposal
* Automated waste segregation at source
* Reduced manual sorting effort
* Better waste management awareness

---

## Future Improvements

* IoT integration for smart monitoring
* Smart fill-level tracking using sensors
* Mobile app integration
* AI-based waste classification
* Solar-powered operation
* Cross-bin monitoring system for smart cities

---

## Learning Outcomes

Through this project, I gained hands-on experience with:

* Arduino programming
* Sensor integration
* Servo motor automation
* Embedded systems design
* Hardware-software interaction
* Real-world automation problem solving

---

## How to Run

1. Connect all components according to the circuit design.
2. Open the Arduino IDE.
3. Upload the Arduino code to the Arduino Uno board.
4. Power the system.
5. Place waste near the sensor to test classification.

---

## Author
**Anushka Lal**
**Mahee Rathore**

GitHub: rathoremahee21

