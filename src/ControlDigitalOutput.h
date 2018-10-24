#ifndef ControlDigitalOutput_h
#define ControlDigitalOutput_h

#include <Arduino.h>

class ControlDigitalOutput {
private:
    uint8_t _pin;
    uint8_t _active;
public:
    ControlDigitalOutput(uint8_t pin, uint8_t active);
    void on();
    void off();
};
#endif
