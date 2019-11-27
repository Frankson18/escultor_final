#ifndef DEFINECOLORS_H
#define DEFINECOLORS_H

#include <QDialog>

/**
 * @brief The definecolors class
 * a classe responsável pela caixa de diálogo
 * que é aberta quando o usuário clica no método
 * Color onde o usuário pode definir a cor dos
 * objetos que serão desenhados pelos os outros 
 * métodos. 
 * @details 
 * getColorR() retorna o valor inteiro da cor no índice Red.
 * getColorG() retorna o valor inteiro da cor no índice Green.
 * getColorB() retorna o valor inteiro da cor no índice Blue.
 */

namespace Ui {
class definecolors;
}

class definecolors : public QDialog
{
    Q_OBJECT

public:
    explicit definecolors(QWidget *parent = nullptr);
    ~definecolors();
    int getColorR();
    int getColorG();
    int getColorB();

private:
    Ui::definecolors *ui;
};

#endif // DEFINECOLORS_H
