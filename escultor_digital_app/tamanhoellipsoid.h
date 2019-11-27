#ifndef TAMANHOELLIPSOID_H
#define TAMANHOELLIPSOID_H

#include <QDialog>

/**
 * @brief The tamanhoEllipsoid class
 * responsável pela caixa de diálogo aberta
 * quando o usuário clica no putellipsoid e o
 * usuário fornece os parâmetros do elipsoide
 * as coordenadas x,y,z e o raio.
 * @details
 * getRaioX - pega o raio do elipsóide no eixo x.
 * getRaioY - pega o raio do elipsóide no eixo y.
 * getRaioZ - pega o raio do elipsóide no eixo z.
 * getRaioE - tamanho do raio geral da elipsóide.
 */


namespace Ui {
class tamanhoEllipsoid;
}

class tamanhoEllipsoid : public QDialog
{
    Q_OBJECT

public:
    explicit tamanhoEllipsoid(QWidget *parent = nullptr);
    ~tamanhoEllipsoid();
    int getRaioX();
    int getRaioY();
    int getRaioZ();
    int getRaioE();

private:
    Ui::tamanhoEllipsoid *ui;
};

#endif // TAMANHOELLIPSOID_H
