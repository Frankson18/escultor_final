#ifndef CORES_H
#define CORES_H

#include <QDialog>

namespace Ui {
class cores;
}

class cores : public QDialog
{
    Q_OBJECT

public:
    explicit cores(QWidget *parent = nullptr);
    ~cores();
    int getCorR();
    int getCorG();
    int getCorB();

private:
    Ui::cores *ui;
};

#endif // CORES_H
