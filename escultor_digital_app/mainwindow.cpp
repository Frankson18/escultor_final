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
    connect(ui->horizontalSliderZ,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(mudaPlanoZ(int)));
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
    connect(ui->actionPut_Voxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(put_Voxel()));
    connect(ui->actionCut_Box,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cut_Box()));
    connect(ui->actionCut_Voxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cut_Voxel()));
    connect(ui->actionCut_Sphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cut_Sphere()));
    connect(ui->actionCut_Ellipsoid,
            SIGNAL(triggered(bool)),
            this,
            SLOT(cut_Ellipsoid()));
    connect(ui->actionColor,
            SIGNAL(triggered(bool)),
            this,
            SLOT(coloca_cor()));
    connect(ui->actionSalvar,
            SIGNAL(triggered(bool)),
            this,
            SLOT(salvar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fecharTudo()
{
    exit(0);
}

void MainWindow::salvar()
{
    QString qs=QFileDialog::getSaveFileName();
    qs=qs+".off";
    //qDebug()<<qs;
    ui->widget->sculptor->writeOFF(qs.toStdString().c_str());
}

void MainWindow::mudaDimensao()
{
    if(d.exec()==QDialog::Accepted){
        if(d.getX()!=0 && d.getY()!=0 && d.getZ()!=0){
            ui->widget->changeSculptor(d.getX(),d.getY(),d.getZ());
            ui->horizontalSliderZ->setMaximum(d.getZ());
            repaint();
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}

void MainWindow::mudaPlanoZ(int z)
{
    ui->widget->changePlano(z);
}

void MainWindow::put_Box()
{
    if(dialog_pb.exec()==QDialog::Accepted){
        if(dialog_pb.getBoxX()!=0 && dialog_pb.getBoxY()!=0 && dialog_pb.getBoxZ()!=0){
            ui->widget->changePutBox(dialog_pb.getBoxX(),dialog_pb.getBoxY(),dialog_pb.getBoxZ());
            ui->widget->goPutBox();
            repaint();
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}

void MainWindow::put_Sphere()
{
    if(dialog_ps.exec()==QDialog::Accepted){
        if(dialog_ps.getRaio()!=0){
            ui->widget->changePutSphere(dialog_ps.getRaio());
            ui->widget->goPutSphere();
            repaint();
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}

void MainWindow::put_Ellipsoid()
{
    if(dialog_pe.exec()==QDialog::Accepted){
        if(dialog_pe.getRaioX()!=0 && dialog_pe.getRaioY()!=0 && dialog_pe.getRaioZ()!=0){
            ui->widget->changePutEllipsoid(dialog_pe.getRaioX(),dialog_pe.getRaioY(),dialog_pe.getRaioZ());
            ui->widget->goPutEllipsoid();
            repaint();
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}
void MainWindow::put_Voxel()
{
    ui->widget->goPutVoxel();
}
void MainWindow::cut_Box()
{
    ui->widget->goCutBox();
}
void MainWindow::cut_Sphere()
{
    ui->widget->goCutSphere();
}
void MainWindow::cut_Ellipsoid()
{
    ui->widget->goCutEllipsoid();
}

void MainWindow::coloca_cor()
{
    if(dialog_pc.exec()==QDialog::Accepted){
        if(dialog_pc.getColorR()>=0 && dialog_pc.getColorR()<=255 && dialog_pc.getColorG()>=0 && dialog_pc.getColorG()<=255 && dialog_pc.getColorB()>=0 && dialog_pc.getColorB()<=255){
            ui->widget->changeColors(dialog_pc.getColorR(),dialog_pc.getColorG(),dialog_pc.getColorB());
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}
void MainWindow::cut_Voxel()
{
    ui->widget->goCutVoxel();
}
