#include "videodisplaywidget.h"

#include <QHBoxLayout>

VideoDisplayWidget::VideoDisplayWidget(QWidget *parent)
    : QWidget{parent}
{
    QHBoxLayout *layout = new QHBoxLayout(this);

    player = new QMediaPlayer();
    player->setSource(QUrl::fromLocalFile("C:\\Users\\Apoorv\\Videos\\Bird Recording Clipped.mp4"));

    videoWidget = new QVideoWidget();
    player->setVideoOutput(videoWidget);

    player->setLoops(QMediaPlayer::Infinite);

    layout->addWidget(videoWidget);

    videoWidget->show();
    player->play();
}

void VideoDisplayWidget::incrementSpeed() {
    this->player->setPlaybackRate(this->player->playbackRate() + 0.25);
}

void VideoDisplayWidget::setSpeed(double speed) {
    this->player->setPlaybackRate(speed);
}
