#include "navigateurweb.h"
#include "ui_navigateurweb.h"

NavigateurWeb::NavigateurWeb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NavigateurWeb)
{
    ui->setupUi(this);
}

NavigateurWeb::~NavigateurWeb()
{
    delete ui;
}

void NavigateurWeb::on_lineEdit_returnPressed()
{
    ui->webView->load(ui->lineEdit->text());
}

void NavigateurWeb::on_Rechercher_clicked()
{
    ui->webView->load(ui->lineEdit->text());
}



void NavigateurWeb::on_revenir_clicked()
{
    ui->webView->back();
}

void NavigateurWeb::on_actualiser_clicked()
{
    ui->webView->reload();
}

void NavigateurWeb::on_suivant_clicked()
{
    ui->webView->forward();
}



void NavigateurWeb::on_webView_loadStarted()
{
    ui->statusbar->showMessage("Chargement en cours");
}

void NavigateurWeb::on_webView_loadFinished(bool arg1)
{
    if(arg1)
    {
        ui->statusbar->showMessage("Chargement terminé");
        ui->lineEdit->setText(ui->webView->url().toString());
    }
    else
    {
        ui->statusbar->showMessage("Erreur Chargement");
    }
}
