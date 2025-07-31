#include <Arduino.h>
#include <Relay.h>

Relay relay(D0);
void setup() {
    relay.begin();
}

void loop() {
    relay.set();
    delay(1000);
    relay.reset();
    delay(1000);
}