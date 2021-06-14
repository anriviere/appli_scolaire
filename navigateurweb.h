#ifndef NAVIGATEURWEB_H
#define NAVIGATEURWEB_H

#include <QMainWindow>

namespace Ui {
class NavigateurWeb;
}

class NavigateurWeb : public QMainWindow
{
    Q_OBJECT

public:
    explicit NavigateurWeb(QWidget *parent = nullptr);
    ~NavigateurWeb();

private slots:
    void on_lineEdit_returnPressed();

    void on_Rechercher_clicked();

    void on_revenir_clicked();

    void on_actualiser_clicked();

    void on_suivant_clicked();

    void on_webView_loadStarted();

    void on_webView_loadFinished(bool arg1);

private:
    Ui::NavigateurWeb *ui;
};

#endif // NAVIGATEURWEB_H
