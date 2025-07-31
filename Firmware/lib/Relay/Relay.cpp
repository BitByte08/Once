#include "Relay.h"

Relay::Relay(uint8_t pin): _pin(pin), _state(false) {}

void Relay::begin() {
    pinMode(_pin, OUTPUT);
    set();
}

void Relay::set() {
    _state = true;
    digitalWrite(_pin, _state);
}

void Relay::reset() {
    _state = false;
    digitalWrite(_pin, _state);
}