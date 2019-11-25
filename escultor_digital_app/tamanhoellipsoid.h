#ifndef TAMANHOELLIPSOID_H
#define TAMANHOELLIPSOID_H

#include <QDialog>

namespace Ui {
class tamanhoEllipsoid;
}

class tamanhoEllipsoid : public QDialog
{
    Q_OBJECT

public:
    explicit tamanhoEllipsoid(QWidget *parent = nullptr);
    ~tamanhoEllipsoid();

private:
    Ui::tamanhoEllipsoid *ui;
};

#endif // TAMANHOELLIPSOID_H
