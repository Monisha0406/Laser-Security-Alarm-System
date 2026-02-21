# Laser Security Alarm System using Arduino

## Abstract
The Laser Security Alarm System is a cost-effective and reliable security solution designed using Arduino Uno. The system detects unauthorized access by monitoring interruption of a laser beam falling on a Light Dependent Resistor (LDR). When the beam is interrupted, the Arduino activates a buzzer and displays a security alert on a 16x2 LCD screen.

---

## Objective
To design and implement a laser-based security alarm system that:
- Detects intrusion accurately
- Provides audible and visual alerts
- Is simple to install and operate
- Is affordable and scalable

---

## Components Used
- Arduino Uno (ATmega328P)
- LDR Sensor
- Laser Module
- 16x2 LCD Display
- Buzzer
- Power Supply (7805 & 7812 Regulators)
- Step-down Transformer

---

## Working Principle
1. A laser beam continuously falls on the LDR sensor.
2. Under normal conditions, the LDR maintains constant resistance.
3. When an intruder interrupts the beam:
   - LDR resistance changes.
   - Arduino detects the change.
   - Buzzer turns ON.
   - LCD displays "Security Breach".
4. When no interruption occurs:
   - LCD displays "Device Monitored".

---

## Arduino Code
(See Arduino_Code.ino file)

---

## Applications
- Home Security
- Commercial Buildings
- Warehouses
- Restricted Areas

---

## Advantages
- High Sensitivity
- Low Cost
- Easy Installation
- Reliable Operation

---

## Future Enhancements
- GSM Module for SMS Alerts
- IoT Cloud Monitoring
- Mobile App Integration
- CCTV Integration

---

## 👩‍💻 Author
Monisha S  
Electronics and Communication Engineering
