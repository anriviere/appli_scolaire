#ifndef FENETREVIDEO_H
#define FENETREVIDEO_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

namespace Ui {
class FenetreVideo;
}

class FenetreVideo : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetreVideo(QWidget *parent = nullptr);
    ~FenetreVideo();

private slots:
    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

private:
    Ui::FenetreVideo *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QProgressBar* bar;
    QSlider* slider;
};

#endif // FENETREVIDEO_H
