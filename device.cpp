#include "device.h"


Device::Device() : name("Unnamed Device") {}
Device::Device(const QString &n) : name(n) {}
Device::Device(const Device &d) : name(d.name) {}
Device::~Device() {}


QString Device::getName() const { return name; }
