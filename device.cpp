#include "device.h"

namespace smarthome {

// Vraag 16: member initialization list
// Vraag 29: const reference usage (QString&)
Device::Device(const QString& n, unsigned char i)
    : name(n), id(i) {}

Device::Device(const Device& other)
    : name(other.name), id(other.id) {}

Device::~Device() {}

unsigned char Device::getId() const {
    return id;
}

}
