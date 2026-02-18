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
<img width="967" height="709" alt="image" src="https://github.com/user-attachments/assets/c0a13fd4-c474-40d8-9f5c-77bda8cf5eff" />


### Physical Prototype
<img width="1868" height="1404" alt="image" src="https://github.com/user-attachments/assets/6d263efd-f4a4-4b7e-b0c2-49f8639c635b" />


## System Components
* **MCU:** Arduino Uno.
* **Input:** HC-SR04 Ultrasonic Sensor.
* **Output:** 16x2 LCD, Active Buzzer, Dual 5mm LEDs.
