#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionMudaDimensao,
            SIGNAL(triggered(bool)),
            this,
            SLOT(mudaDimensao()));
    connect(ui->actionPut_Box,
            SIGNAL(triggered(bool)),
            this,
            SLOT(put_Box()));
    connect(ui->actionPut_sphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(put_Sphere()));
    connect(ui->actionPut_Ellipsoid,
            SIGNAL(triggered(bool)),
            this,
            SLOT(put_Ellipsoid()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fecharTudo()
{
    exit(0);
}

void MainWindow::mudaDimensao()
{
    if(d.exec()==QDialog::Accepted){
        if(d.getX()!=0 && d.getY()!=0 && d.getZ()!=0){
            ui->widget->setX(d.getX());
            ui->widget->setY(d.getY());
            ui->widget->setZ(d.getZ());
            ui->horizontalSliderZ->setMaximum(d.getZ());
            ui->widget->sculptor->~Sculptor();
            ui->widget->sculptor=new Sculptor(d.getX(),d.getY(),d.getZ());
            repaint();
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}

void MainWindow::put_Box()
{
    dialog_pb.exec();
}

void MainWindow::put_Sphere()
{
    dialog_ps.exec();
}

void MainWindow::put_Ellipsoid()
{
    dialog_pe.exec();
}

