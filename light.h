#ifndef LIGHT_H
#define LIGHT_H

#include "device.h"

namespace smarthome {

class Light : public Device {
private:
    bool isOn;

public:
    Light();
    Light(const QString& n);
    Light(const Light& other);
    ~Light();

    QString status() const override;

    void turnOn();
    void turnOff();

    friend void toggleLight(Light& l);   // friend function
};

void toggleLight(Light& l);

} // namespace smarthome

#endif
