#include <QtTest>
#include "light.h"

using namespace smarthome;

class TestLight : public QObject {
    Q_OBJECT

private slots:
    void testTurnOn() {
        Light l("TestLight");
        l.turnOn();
        QVERIFY(l.status() == "Light is ON");
    }

    void testTurnOff() {
        Light l("TestLight");
        l.turnOff();
        QVERIFY(l.status() == "Light is OFF");
    }
};

QTEST_MAIN(TestLight)
#include "test_light.moc"
