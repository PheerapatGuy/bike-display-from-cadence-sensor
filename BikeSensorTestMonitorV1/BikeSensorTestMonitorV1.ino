//แสดงผลจอ LCD_I2C แบบไม่สมบูรณ์ นับไม่ได้
#include <Wire.h>
#include <LCDI2C_Multilingual.h>

LCDI2C_Generic lcd(0x27, 20, 4);  // I2C address: 0x27; Display size: 20x4

void setup() {
  lcd.init();
  //int counter=1;
  lcd.backlight();
  lcd.setCursor(0, 0);     // ตั้งตำแหน่ง cursor ที่แถวที่ 1, คอลัมน์ที่ 0
  lcd.print("Counter:");   // พิมพ์ข้อความ
}

void loop() {
  lcd.setCursor(0, 1);     // ตั้งตำแหน่ง cursor ที่แถวที่ 2
  //lcd.print(counter);      // พิมพ์ค่าของตัวนับ
  lcd.print("1234");
  //counter++;               // เพิ่มค่าตัวนับ
  delay(1000);             // หน่วงเวลา 1 วินาที
}
