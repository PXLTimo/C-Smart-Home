#include "light.h"


Light::Light() : Device("Light"), isOn(false) {}
Light::Light(const QString &n) : Device(n), isOn(false) {}
Light::Light(const Light &l) : Device(l), isOn(l.isOn) {}
Light::~Light() {}


QString Light::status() const {
    return isOn ? "Light is ON" : "Light is OFF";
}


void Light::turnOn() {
    isOn = true;
}


void Light::turnOff() {
    isOn = false;
}
