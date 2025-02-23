#include <Wire.h>
#include <LcdBarGraph_I2C.h>
#include <LiquidCrystal_I2C.h>

#define POT_PIN A0

LiquidCrystal_I2C lcd(0x27, 20, 4);
LcdBarGraph_I2C lbg( &lcd, 0 , 0);

void setup()
{

    lcd.init();
    lcd.backlight();
    lbg.begin();
    pinMode(POT_PIN, INPUT);
}

void loop()
{
    int potVal = analogRead(POT_PIN) - 1000;
    lbg.drawValue(potVal, -1025, 100);
    lcd.setCursor(0, 1);
    lcd.print(potVal);
    lcd.print("  ");
    delay(100);
}