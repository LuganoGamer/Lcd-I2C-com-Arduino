#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20,16,2);

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("Hello, word!");
}

void loop(){}