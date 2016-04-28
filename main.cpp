#include "unittest.h"
#include <QApplication>
#include <QtTest/QtTest>

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
};

void TestQString::toUpper()
{
    QString str = "Hellos";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    unittest w;
    w.show();

    return a.exec();
}
