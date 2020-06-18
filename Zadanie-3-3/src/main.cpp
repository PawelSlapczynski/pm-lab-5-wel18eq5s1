#include <Arduino.h>
#include <LiquidCristal.h>

LiquidCeistal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
    lcd.begin(16, 2);
    lcd.print("Słapczyński") ;
}

void loop() {  
    lcd.setCursor(0, 1);
    lcd.pront(millis() / 1000);
    dealy(500);
}