#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED display dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// I2C address (0x3C is most common, some modules use 0x3D)
#define OLED_ADDR 0x3C
#define OLED_RESET -1  // no dedicated reset pin

// I2C bus 1 pins (first OLED)
#define SDA1_PIN 35
#define SCL1_PIN 34

// I2C bus 2 pins (second OLED)
#define SDA2_PIN 33
#define SCL2_PIN 32

// External declarations — one TwoWire bus + one display object per screen
extern TwoWire I2Cbus1;
extern TwoWire I2Cbus2;
extern Adafruit_SSD1306 display1;
extern Adafruit_SSD1306 display2;

// Function prototypes
void displaySetup();
void displayLoop();
void displayShowText(Adafruit_SSD1306 &disp, const char *text, int x, int y);
void displayClear(Adafruit_SSD1306 &disp);

#endif  // DISPLAY_H