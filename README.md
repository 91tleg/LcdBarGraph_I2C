
# LcdBarGraph_I2C Arduino Library


## Description
An Arduino library for displaying bar graph on I2C LCD displays.


## Installation
Download: Download the LcdBarGraph_I2C library.\
Import to Arduino IDE: In the Arduino IDE, navigate to Sketch -> Include Library -> Add .ZIP Library and select the downloaded ZIP file.\
Include in Sketch: Include the library in your sketch by adding ```#include <LcdBarGraph_I2C.h>.```


## Features
Supports printing values in the positive and negative ranges.

## Usage


### Constructor
```cpp 
LcdBarGraph_I2C(LiquidCrystal_I2C *lcd, uint8_t startX, uint8_t startY);
```

### Methods
```cpp
void begin()
```
Initializes the custom characters.


```cpp
void drawValue(uint16_t value, uint16_t maxValue)
```
Draws the value from 0 to max value. Parameters must be poisitive values.


```cpp
void drawValue(int16_t value, int16_t minValue, int16_t maxValue);
```
Draws the value from the range of min - max. Vertical bar to indicate 0 position.


## Troubleshoots
* This library depends on the LiquidCrystal_I2C library for communication with the LCD display. Make sure it is installed and correctly configured.
* Make sure the custom characters are initialized in setup.