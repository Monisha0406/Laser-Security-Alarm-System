# Laser-Security-Alarm-System
Arduino based Laser Security Alarm using LDR and Buzzer
# 🔐 Laser Security Alarm System using Arduino

## 📌 Abstract
This project implements a laser-based security alarm system using Arduino Uno. 
When the laser beam is interrupted, the LDR detects the change and triggers a buzzer alert.

## 🛠 Components Used
- Arduino Uno (ATmega328P)
- LDR Sensor
- Laser Module
- 16x2 LCD Display
- Buzzer
- Power Supply (7805 & 7812 Regulators)

## ⚙ Working Principle
A laser beam continuously falls on the LDR.
When an object interrupts the beam:
- LDR resistance changes
- Arduino detects change
- Buzzer activates
- LCD shows "Security Breach"

## 💻 Arduino Code
```cpp
// paste your Arduino code here
