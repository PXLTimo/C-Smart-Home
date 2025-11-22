#ifndef DEVICE_H
#define DEVICE_H


#include <QString>


class Device { // (1) class
protected:
    QString name;
public:
    Device(); // (3) default constructor
    Device(const QString &n); // (3) parameterized constructor
    Device(const Device &d); // (3) copy constructor
    virtual ~Device(); // required


    virtual QString status() const = 0; // (7) abstract function -> abstract base class


    QString getName() const;
};


#endif
