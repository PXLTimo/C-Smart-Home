#include "device.h"

namespace smarthome {

Device::Device(const QString& n, unsigned char i)
    : name(n), id(i) {}

Device::Device(const Device& other)
    : name(other.name), id(other.id) {}

Device::~Device() {}

unsigned char Device::getId() const {
    return id;
}

}
