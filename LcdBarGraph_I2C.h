#ifndef LCDBARGRAPH_H
#define LCDBARGRAPH_H

#include <Arduino.h>
#include <stdint.h>
#include <LiquidCrystal_I2C.h>

class LcdBarGraph_I2C
{
public:
    LcdBarGraph_I2C(LiquidCrystal_I2C *lcd, uint8_t startX, uint8_t startY);
    void begin(void);
    void drawValue(uint16_t value, uint16_t maxValue);
    void drawValue(int16_t value, int16_t minValue, int16_t maxValue);


private:
    LiquidCrystal_I2C *_lcd;
    uint8_t _startX;
    uint8_t _startY;
    int16_t _prevValue;
    uint8_t _maxBarWidth;

    uint8_t level1[8] = {
        B10000,
        B10000,
        B10000,
        B10000,
        B10000,
        B10000,
        B10000,
        B10000};

    uint8_t level2[8] = {
        B11000,
        B11000,
        B11000,
        B11000,
        B11000,
        B11000,
        B11000,
        B11000};

    uint8_t level3[8] = {
        B11100,
        B11100,
        B11100,
        B11100,
        B11100,
        B11100,
        B11100,
        B11100};

    uint8_t level4[8] = {
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110,
        B11110};
};

#endif