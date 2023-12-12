#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0X27,20,4); //CREO QUE LA DIRECCION ES LA JODIDA PERO EN ESTE ES EL 0X27
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("Hala Madrid ");
}

void loop() {
  lcd.setCursor(0, 1);
   // Escribimos el número de segundos trascurridos
  lcd.print(millis()/1000);
  lcd.print(" Segundos sin ti");
  lcd.setCursor(0,3);
  lcd.print("otra vez");
}

