#ifndef RELAY_H
#define RELAY_H

#include <Arduino.h>

class Relay {
    public:
        Relay(uint8_t _pin);
        void begin();
        void set();
        void reset();
    private:
        uint8_t _pin;
        bool _state;
};

#endif