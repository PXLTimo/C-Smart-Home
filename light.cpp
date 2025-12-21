#include "light.h"

namespace smarthome {

Light::Light() : Device("Light", 1), isOn(false) {}

Light::Light(const QString& n) : Device(n, 1), isOn(false) {}

Light::Light(const Light& other)
    : Device(other), isOn(other.isOn) {}

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

void toggleLight(Light& l) {
    l.isOn = !l.isOn;
}

}
