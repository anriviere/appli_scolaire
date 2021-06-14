#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fenetrevideo.h"
#include "note.h"
#include "calculator.h"
#include "navigateurweb.h"
#include "paint.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    FenetreVideo *fenetreVideo;
    Note *note;
    Calculator *calculator;
    NavigateurWeb *navigateurWeb;
    Paint *paint;


};
#endif // MAINWINDOW_H
