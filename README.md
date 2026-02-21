# Laser Security Alarm System using Arduino

## Project Description
This project implements a Laser Security Alarm System using Arduino Uno, LDR sensor, Laser module, LCD display, and Buzzer.  
The system detects unauthorized access when the laser beam is interrupted.

---

## Components Used
- Arduino Uno (ATmega328P)
- LDR (Light Dependent Resistor)
- Laser Module
- 16x2 LCD Display
- Buzzer
- Power Supply (7805 & 7812 Regulators)
- Step-down Transformer

---

## Working Principle
A laser beam continuously falls on the LDR sensor.  
When an intruder interrupts the beam:

- LDR resistance changes
- Arduino detects the change
- Buzzer turns ON
- LCD displays "Security Breach"

If no interruption:
- LCD shows "Device Monitored"

---

## Arduino Code

```cpp
#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

void setup()
{ 
  lcd.begin(16,2); 
  pinMode(3,INPUT);
  pinMode(7,OUTPUT);
  lcd.setCursor(0,0);
  lcd.print(" Laser Security  ");
  lcd.setCursor(0,1);
  lcd.print("  Alarm System   ");
  delay(1000);
  lcd.clear();   
}      

void loop()
{  
 int IR1 = digitalRead(3); 

 if (IR1 == 1) 
 {
  digitalWrite(7,HIGH);
  lcd.setCursor(0,0);
  lcd.print("Security Breach ");
 }
 else
 {
  digitalWrite(7,LOW);
  lcd.setCursor(0,0);
  lcd.print("Device Monitored");
 }
}
