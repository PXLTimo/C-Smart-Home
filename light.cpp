#include "light.h"

namespace smarthome {

// Vraag 16: member initialization list
Light::Light(const QString& n)
    : Device(n, 1), isOn(false) {}

Light::Light(const Light& other)
    : Device(other), isOn(other.isOn) {}

Light::~Light() {}

QString Light::status() const {
    return isOn ? "Light is ON" : "Light is OFF";
}

// Vraag 20: useful member function
void Light::turnOn() {
    isOn = true;
    emit stateChanged(isOn);
}

void Light::turnOff() {
    isOn = false;
    emit stateChanged(isOn);
}

}
