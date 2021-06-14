#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "fenetrevideo.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    fenetreVideo = new FenetreVideo(this);
    fenetreVideo->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    note = new Note(this);
    note->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    calculator = new Calculator(this);
    calculator->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    navigateurWeb = new NavigateurWeb(this);
    navigateurWeb->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    paint = new Paint();
    paint->show();

}
