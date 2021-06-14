#include "navigateur.h"
#include "ui_navigateur.h"

Navigateur::Navigateur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Navigateur)
{
    ui->setupUi(this);
}

Navigateur::~Navigateur()
{
    delete ui;
}

void Navigateur::on_Chercher_clicked()
{
    ui->webView->load(ui->urlEdit)
}



void Navigateur::on_urlEdit_returnPressed()
{
    ui->webView->load(ui->urlEdit->text());
}

void Navigateur::on_lineEdit_returnPressed()
{
    ui->webView->load(ui->lineEdit)
}
