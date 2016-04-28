#include "unittest.h"
#include "ui_unittest.h"
#include <QtTest/QTest>

unittest::unittest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::unittest)
{
    ui->setupUi(this);
}

unittest::~unittest()
{
    delete ui;
}

