#ifndef LIGHT_H
#define LIGHT_H

#include <QObject>
#include "device.h"

namespace smarthome {

class Light : public QObject, public Device {
    Q_OBJECT

private:
    bool isOn;

public:
    explicit Light(const QString& n = "Light");
    Light(const Light& other);
    ~Light();

    QString status() const override;

public slots:
    void turnOn();
    void turnOff();

signals:
    void stateChanged(bool on);
};

} // namespace smarthome

#endif
