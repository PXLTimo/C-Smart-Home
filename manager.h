#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include <thread>
#include <QFile>
#include <QTextStream>
#include <stdexcept>

#include "device.h"

namespace smarthome {

// Vraag 36: useful container class (std::vector)

class DeviceManager {
private:
    std::vector<Device*> devices;

public:
    DeviceManager() = default;

    // Vraag 33: dynamic memory removing (delete)
    ~DeviceManager();

    void addDevice(Device* d);

    void logToFile(const QString& filename) const;

    void asyncStatusCheck() const;
};

} // namespace smarthome

#endif
