#include "manager.h"
#include <QDebug>

namespace smarthome {

DeviceManager::~DeviceManager() {
    for (Device* d : devices)
        delete d;
}

void DeviceManager::addDevice(Device* d) {
    if (d != nullptr)
        devices.push_back(d);
}

void DeviceManager::logToFile(const QString& filename) const {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        throw std::runtime_error("Cannot open file");

    QTextStream out(&file);
    for (const Device* d : devices)
        out << d->status() << "\n";
}

void DeviceManager::asyncStatusCheck() const {
    std::thread t([this]() {
        for (const Device* d : devices)
            qDebug() << d->status();
    });
    t.detach();
}

}
