#ifndef NAVIGATEUR_H
#define NAVIGATEUR_H

#include <QMainWindow>

namespace Ui {
class Navigateur;
}

class Navigateur : public QMainWindow
{
    Q_OBJECT

public:
    explicit Navigateur(QWidget *parent = nullptr);
    ~Navigateur();

private slots:
    void on_Chercher_clicked();

    void on_barre_returnPressed();

    void on_urlEdit_returnPressed();

    void on_lineEdit_returnPressed();

private:
    Ui::Navigateur *ui;
};

#endif // NAVIGATEUR_H
