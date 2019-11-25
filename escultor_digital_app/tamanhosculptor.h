#ifndef TAMANHOSCULPTOR_H
#define TAMANHOSCULPTOR_H

#include <QDialog>

namespace Ui {
class TamanhoSculptor;
}

class TamanhoSculptor : public QDialog
{
    Q_OBJECT

public:
    explicit TamanhoSculptor(QWidget *parent = nullptr);
    ~TamanhoSculptor();
    int getX();
    int getY();
    int getZ();

private:
    Ui::TamanhoSculptor *ui;
};

#endif // TAMANHOSCULPTOR_H
