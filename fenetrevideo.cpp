#include "fenetrevideo.h"
#include "ui_fenetrevideo.h"

FenetreVideo::FenetreVideo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetreVideo)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    vw = new QVideoWidget(this);
    player->setVideoOutput(vw);
    this->setCentralWidget(vw);

    slider = new QSlider(this);
    bar = new QProgressBar(this);

    slider->setOrientation(Qt::Horizontal);


    ui->statusbar->addPermanentWidget(slider);
    ui->statusbar->addPermanentWidget(bar);

    connect(player, &QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
    connect(player, &QMediaPlayer::positionChanged,slider,&QSlider::setValue);
    connect(slider, &QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    connect(player, &QMediaPlayer::durationChanged,bar,&QProgressBar::setMaximum);
    connect(player, &QMediaPlayer::positionChanged,bar,&QProgressBar::setValue);




}

FenetreVideo::~FenetreVideo()
{
    delete ui;
}

void FenetreVideo::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open a file", "","Video File (*.*)");
    on_actionStop_triggered();

    player->setMedia(QUrl::fromLocalFile(filename));
    on_actionPlay_triggered();

}

void FenetreVideo::on_actionPlay_triggered()
{
    player->play();

}

void FenetreVideo::on_actionPause_triggered()
{
    player->pause();

}

void FenetreVideo::on_actionStop_triggered()
{
    player->stop();
}
