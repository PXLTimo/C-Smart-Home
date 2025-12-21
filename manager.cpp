#include "manager.h"
#include <QDebug>

namespace smarthome {

DeviceManager::~DeviceManager() {
    for (Device* d : devices) {
        delete d; // Vraag 33: delete
    }
}

void DeviceManager::addDevice(Device* d) {
    if (d != nullptr) { // Vraag 37: nullptr usage
        devices.push_back(d);
    }
}

void DeviceManager::logToFile(const QString& filename) const {
    QFile file(filename);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        throw std::runtime_error("Cannot open file");
    }

    QTextStream out(&file);
    for (const Device* d : devices) {
        out << d->status() << "\n";
    }
}

void DeviceManager::asyncStatusCheck() const {
    // Vraag 40: lambda function
    // Vraag 41: thread usage
    std::thread t([this]() {
        for (const Device* d : devices) {
            qDebug() << d->status();
        }
    });
    t.detach();
}

}
