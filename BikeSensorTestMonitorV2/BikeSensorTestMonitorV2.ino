//แสดงผลจอ LCD_I2C แบบนับได้แล้ว
#include <Wire.h>
#include <LCDI2C_Multilingual.h>

LCDI2C_Generic lcd(0x27, 20, 4);  // I2C address: 0x27; Display size: 20x4

int counter = 0;  // ประกาศตัวนับ

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);     // ตั้งตำแหน่ง cursor ที่แถวที่ 1, คอลัมน์ที่ 0
  lcd.print("Counter:");   // พิมพ์ข้อความ
}

void loop() {
  lcd.setCursor(0, 1);     // ตั้งตำแหน่ง cursor ที่แถวที่ 2
  lcd.print("      ");     // ลบค่าก่อนหน้านี้ด้วยการพิมพ์ช่องว่าง
  lcd.setCursor(0, 1);     // กลับมาตั้งตำแหน่ง cursor ที่เดิม
  lcd.print(counter);      // พิมพ์ค่าของตัวนับ
  counter++;               // เพิ่มค่าตัวนับ
  delay(1000);             // หน่วงเวลา 1 วินาที 1000 เท่ากับ 1 วินาที
}
