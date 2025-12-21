#ifndef DEVICE_H
#define DEVICE_H

#include <QString>

// Vraag 27: everything in a self-made namespace
namespace smarthome {

// Vraag 12: default constructor
// Vraag 13: parameterized constructor
// Vraag 14: copy constructor
// Vraag 15: destructor
// Vraag 18: dynamic polymorphism (abstract base class)

class Device {
protected:
    // Vraag 22: useful member variables
    QString name;

    // Vraag 28: memory efficient type (unsigned char)
    unsigned char id;

public:
    // Vraag 21: default values in function definition
    explicit Device(const QString& n = "Unnamed Device", unsigned char i = 0);

    Device(const Device& other);

    virtual ~Device();

    // Vraag 24: correct usage of inline function
    // Vraag 30: const member function
    inline QString getName() const { return name; }

    unsigned char getId() const;

    // Vraag 18: useful proven dynamic polymorphism
    virtual QString status() const = 0;
};

} // namespace smarthome

#endif
