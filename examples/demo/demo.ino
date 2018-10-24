#include <Arduino.h>
#include "ControlDigitalOutput.h"

#define __LED_PIN__ 13
#define __LED_ACTIVE__ HIGH

ControlDigitalOutput ControlLed(__LED_PIN__, __LED_ACTIVE__);

void setup() {
    Serial.begin(115200);

    Serial.println("ON LED!");
    ControlLed.on();
    delay(5000);

    Serial.println("OFF LED!");
    ControlLed.off();
    delay(5000);
}

void loop() {
    // put your main code here, to run repeatedly:
}
