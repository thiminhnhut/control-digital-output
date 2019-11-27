#include "ControlDigitalOutput.h"

ControlDigitalOutput::ControlDigitalOutput(uint8_t pin, uint8_t active) {
    _pin = pin;
    _active = active;
    pinMode(pin, OUTPUT);
    off();
}

void ControlDigitalOutput::on() {
    digitalWrite(_pin, _active);
}

void ControlDigitalOutput::off() {
    digitalWrite(_pin, !_active);
}
