// Vraag 2: clean main (main bevat enkel setup en high-level calls)
// Vraag 3: no globals used
// Vraag 7: one complete project that compiles
// Vraag 8: fully working project
// Vraag 42: useful Qt class usage (QApplication, QMessageBox)
// Vraag 47: usage of a GUI (Qt)

#include <QApplication>
#include <QMessageBox>

#include "light.h"
#include "manager.h"
#include "utils.h"

using namespace smarthome;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    DeviceManager manager;

    // Vraag 32: dynamic memory allocation (new)
    Light* livingRoom = new Light("Living Room Light");

    // Vraag 37: useful usage of nullptr (checked inside addDevice)
    manager.addDevice(livingRoom);

    // Vraag 26: friend function usage
    toggleLight(*livingRoom);

    // Vraag 41: useful usage of threads
    manager.asyncStatusCheck();

    try {
        // Vraag 38: modern file I/O
        manager.logToFile("status.txt");
    }
    catch (const std::exception& e) {
        // Vraag 39: useful exception handling
        QMessageBox::critical(nullptr, "Error", e.what());
    }

    QMessageBox::information(nullptr,
                             "SmartHome",
                             livingRoom->status());

    return app.exec();
}
