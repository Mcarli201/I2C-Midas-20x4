#include <LCD.h>
#include <LCD_C0220BiZ.h>
#include <ST7036.h>

//set the LCD address to 0x78, use i2c scanner to find out your address 
ST7036 lcd = ST7036 (2, 20, 0x78) ;

void setup() {
delay(5);
lcd.init();
}

void loop() {
for (int i = 0; i < 4; i++){
  lcd.setCursor(0, 1);
  lcd.print("Hello");
  lcd.setCursor(1, 1);
  lcd.print("World");
  lcd.setCursor(2, 1);
  lcd.print("Hello");
  lcd.setCursor(3, 1);
  lcd.print("World");
  lcd.setCursor(i,0); 
  lcd.print(">");
  delay(1000);
  lcd.clear();
      }
}
