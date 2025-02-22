
# BigNumbers_I2C Arduino Library
## Description
The LcdBarGraph_I2C library provides functions to display bar graphs on a LiquidCrystal display using I2C communication. 

## Installation
Download: Download the LcdBarGraph_I2C library.

Import to Arduino IDE: In the Arduino IDE, navigate to Sketch -> Include Library -> Add .ZIP Library and select the downloaded ZIP file.

Include in Sketch: Include the library in your sketch by adding #include <LcdBarGraph_I2C.h>.

## Features
This library supports printing values in the positive and negative ranges.

## Dependencies
This library depends on the LiquidCrystal_I2C library for communication with the LCD display. Make sure it is installed and correctly configured.
## Usage

### Constructor
LcdBarGraph_I2C::LcdBarGraph_I2C(LiquidCrystal_I2C *lcd, uint8_t startX, uint8_t startY)

Parameters: lcd - Pointer to a LiquidCrystal_I2C object.
            startX - starting x index.
            startY = starting y index.

### Methods
begin()

Initializes the custom characters.

void drawValue(uint16_t value, uint16_t maxValue)

draws the value from the range of 0 - maxValue

void drawValue(int16_t value, int16_t minValue, int16_t) maxValue;

draws the value from the range of minValue - maxValue

