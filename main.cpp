#include <QApplication>
#include <QMessageBox>
#include "light.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    Light l("Living Room Light"); // simple test
    QMessageBox::information(nullptr, "SmartHome", l.status());


    return app.exec();
}
