#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8); // RS,E,D4,D5,D6,D7

void setup()
{ 
  lcd.begin(16,2); 
  pinMode(3,INPUT);   // LDR input
  pinMode(7,OUTPUT);  // Buzzer output
  Serial.begin(9600);

  lcd.setCursor(0,0);
  lcd.print(" Laser Security ");
  lcd.setCursor(0,1);
  lcd.print("  Alarm System  ");
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
 delay(200);
}
