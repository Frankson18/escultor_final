#ifndef TAMANHOSCULPTOR_H
#define TAMANHOSCULPTOR_H

#include <QDialog>

/**
 * @brief The TamanhoSculptor class
 * classe responsável pela caixa de diálogo
 * aberta quando o usuário clica no mudardimensão
 * onde ele pode setar o tamanho dos planos x,y,z.
 * @details
 * getX() - pega o valor inteiro do plano x fornecido pelo usuário.
 * getY() - pega o valor inteiro do plano y fornecido pelo usuário.
 * getZ() - pega o valor inteiro do plano z fornecido pelo usuário.
 */

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
