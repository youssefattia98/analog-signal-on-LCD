/*
  Author: Youssef Attia
  Description: reading analoge signal from potentiometer and outputting it on 2*16 LCD
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd (2, 3, 4 , 5 , 6 , 7);
#define pot A0
int value;
float volt;
void setup() {
  lcd.begin(16, 2);
  pinMode(pot, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(pot);
  volt = (value * 5) / 1023.0;
  digitalWrite(13, volt);
  delay(1000);
  Serial.print("value: ");
  Serial.println(value);
  lcd.print("value: ");
  lcd.println(value);
  Serial.print("volt: ");
  Serial.println(volt);
  lcd.print("volt: ");
  lcd.println(volt);
}
