#ifndef DEVICE_H
#define DEVICE_H

#include <QString>

namespace smarthome {

class Device {
protected:
    QString name;
    unsigned char id;

public:
    explicit Device(const QString& n = "Unnamed Device", unsigned char i = 0);
    Device(const Device& other);
    virtual ~Device();

    inline QString getName() const { return name; }
    unsigned char getId() const;

    virtual QString status() const = 0;
};

} // namespace smarthome

#endif
