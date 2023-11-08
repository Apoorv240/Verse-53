#ifndef VIDEODISPLAYWIDGET_H
#define VIDEODISPLAYWIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QVideoWidget>

class VideoDisplayWidget : public QWidget
{
    Q_OBJECT
public:
    explicit VideoDisplayWidget(QWidget *parent = nullptr);
    void incrementSpeed();
    void setSpeed(double speed);

private:
    QVideoWidget *videoWidget;
    QMediaPlayer *player;

signals:

};

#endif // VIDEODISPLAYWIDGET_H
