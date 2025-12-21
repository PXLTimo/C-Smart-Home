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

    }
};

QTEST_MAIN(TestLight)
#include "test_light.moc"
