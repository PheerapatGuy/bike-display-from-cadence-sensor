// LCD_WeMosD1
// Uses with LCD1602 (I2C). Must find I2C address first.
// Upload speed: 115200

// pin (WeMos : LCD1602)
// GND : GND
// 5V : VCC
// D4/D14 : SDA
// D3/D15 : SCL

#include <Wire.h>
#include <LCDI2C_Multilingual.h>

LCDI2C_Generic lcd(0x27, 16, 2);           // I2C address: 0x27; Display size: 16x2
//LCDI2C_Generic_Symbols lcd(0x27, 16, 2); // Another name of LCDI2C_Symbols class

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.print("Row 1");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("Row 2");
  delay(3000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Make full use of column 1. I can display more than 16 characters", 5);
  delay(3000);
}