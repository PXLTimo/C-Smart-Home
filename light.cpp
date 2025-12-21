#include "light.h"

namespace smarthome {

Light::Light(const QString& n)
    : Device(n, 1), isOn(false) {}

Light::Light(const Light& other)
    : Device(other), isOn(other.isOn) {}

Light::~Light() {}

QString Light::status() const {
    return isOn ? "Light is ON" : "Light is OFF";
}

void Light::turnOn() {
    isOn = true;
    emit stateChanged((isOn);
}

QObject::connect(livingRoom, &Light::stateChanged,
                 [](bool on) {
                     qDebug() << "Light changed to:" << on;
                 });

livingRoom->turnOn();

void Light::turnOff() {
    isOn = false;
    emit stateChanged((isOn);
}

}
