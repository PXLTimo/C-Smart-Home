#ifndef LIGHT_H
#define LIGHT_H


#include "device.h"


class Light : public Device { // (5) inheritance
private:
    bool isOn; // (4) encapsulation via private
public:
    Light();
    Light(const QString &n);
    Light(const Light &l);
    ~Light();


    QString status() const override; // (5) polymorphism


    void turnOn();
    void turnOff();
};


#endif
