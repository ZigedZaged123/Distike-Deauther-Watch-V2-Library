#ifndef Distike_h
#define Distike_h
#include "Arduino.h"
#include "Bounce2.h"
#include "lcdgfx.h"
#include "lcdgfx_gui.h"
#include "ESP8266WiFi.h"
#include "WiFi.h"


class Distike {

    public:

    #define OLED_SDA 5
    #define OLED_SCL 4
    #define DISTIKE_LED 15
    #define BUTTON_UP 12
    #define BUTTON_DOWN 13
    #define BUTTON_IN 14
    #define DISTIKE_LASER 16
    #define SIDE_BUTTON_1 0
    #define SIDE_BUTTON_2 RST
    
    Distike();
    void startUpScreen();
    void begin();
    void troubleShootScreen();

};

#endif
