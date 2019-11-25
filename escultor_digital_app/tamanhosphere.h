#ifndef TAMANHOSPHERE_H
#define TAMANHOSPHERE_H

#include <QDialog>

namespace Ui {
class tamanhoSphere;
}

class tamanhoSphere : public QDialog
{
    Q_OBJECT

public:
    explicit tamanhoSphere(QWidget *parent = nullptr);
    ~tamanhoSphere();
    int getRaio();

private:
    Ui::tamanhoSphere *ui;
};

#endif // TAMANHOSPHERE_H
