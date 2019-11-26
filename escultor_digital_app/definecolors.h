#ifndef DEFINECOLORS_H
#define DEFINECOLORS_H

#include <QDialog>

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
