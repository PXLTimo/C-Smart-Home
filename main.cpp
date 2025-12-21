#include <QApplication>
#include <QMessageBox>

#include "light.h"
#include "manager.h"

using namespace smarthome;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    DeviceManager manager;

    Light* livingRoom = new Light("Living Room Light");
    manager.addDevice(livingRoom);

    toggleLight(*livingRoom);

    manager.asyncStatusCheck();

    try {
        manager.logToFile("status.txt");
    } catch (const std::exception& e) {
        QMessageBox::critical(nullptr, "Error", e.what());
    }

    QMessageBox::information(nullptr,
                             "SmartHome",
                             livingRoom->status());

    return app.exec();
}
