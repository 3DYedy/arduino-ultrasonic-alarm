# Adaptive Ultrasonic Security System

## Project Overview
An Arduino-based proximity monitoring system designed to detect objects in real-time and provide multi-layered feedback. The project demonstrates the integration of ultrasonic sensing with **Human-Machine Interface (HMI)** elements and adaptive control logic.

## Key Features
* **Real-time Proximity Sensing:** Accurate distance measurement using the **HC-SR04** ultrasonic sensor.
* **Adaptive Alert Logic:** Frequency of audio-visual alerts (Buzzer & Red LED) increases automatically as objects approach the sensor.
* **Flicker-Free HMI:** Integrated **16x2 LCD** with optimized refresh logic to prevent character "ghosting".
* **System Status Indicators:** Visual "Safe" (Green) and "Alert" (Red) state management.

## Hardware Design & Implementation
The project follows a complete design flow, from the initial circuit schematic to the final physical prototype on a breadboard.

### Circuit Schematic
Designed to ensure correct interfacing between the MCU and high-current peripherals (Buzzer/LCD).


### Physical Prototype
The final assembly demonstrating real-time hardware-software synchronization.


## System Components
* **MCU:** Arduino Uno.
* **Input:** HC-SR04 Ultrasonic Sensor.
* **Output:** 16x2 LCD, Active Buzzer, Dual 5mm LEDs.
