#include "Arduino.h"
#include "Distike.h"
#include "lcdgfx.h"
#include "bounce2.h"
#include "ESP8266WiFi.h"
#include "WiFi.h"


Distike::Distike(){

void Distike::begin() {
  display.begin();
  pinMode(BUTTON_UP, INPUT);
  pinMode(BUTTON_DOWN, INPUT);
  pinMode(BUTTON_IN, INPUT);
  pinMode(SIDE_BUTTON_1, INPUT);
  pinMode(SIDE_BUTTON_2, INPUT);
}
  
void Distike::startUpScreen() {
  DisplaySH1106_128x64_I2C display(-1, {-1, 0x3C, OLED_SCL, OLED_SDA, -1});
}

void Distike::troubleShootScreen() {
  display.setFixedFont(ssd1306xled_font6x8);
  display.fill(0x00);
  display.clear();

  display.printFixed(0, 0, "Screen Troubleshoot Test", STYLE_NORMAL);
}
}
