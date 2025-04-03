#ifndef FLIPPED_LCD_H
#define FLIPPED_LCD_H

#include <Arduino.h>
#include <LiquidCrystal.h>

extern LiquidCrystal lcd;  

void printFlipped(const char* text, const int row, const int col);
byte* getFlippedChar(char c);

#endif
