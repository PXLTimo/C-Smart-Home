#ifndef LIGHT_H
#define LIGHT_H

#include <QObject>
#include "device.h"

namespace smarthome {

// Vraag 5: inheritance
// Vraag 43: useful usage of signals/slots
// Vraag 42: useful Qt class (QObject)

class Light : public QObject, public Device {
    Q_OBJECT

private:
    // Vraag 31: useful bool
    bool isOn;

public:
    // Vraag 12 & 13: default + parameterized constructor
    explicit Light(const QString& n = "Light");

    // Vraag 14: copy constructor
    Light(const Light& other);

    // Vraag 15: destructor
    ~Light();

    // Vraag 18: polymorphism
    QString status() const override;

public slots:
    void turnOn();
    void turnOff();

signals:
    void stateChanged(bool on);
};

} // namespace smarthome

#endif
