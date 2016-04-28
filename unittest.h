#ifndef UNITTEST_H
#define UNITTEST_H

#include <QMainWindow>

namespace Ui {
class unittest;
}

class unittest : public QMainWindow
{
    Q_OBJECT

public:
    explicit unittest(QWidget *parent = 0);
    ~unittest();

private:
    Ui::unittest *ui;
};

#endif // UNITTEST_H
