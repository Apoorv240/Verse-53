#include "application.h"
#include "ui_application.h"

Application::Application(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Application)
{
    ui->setupUi(this);
    index = -1;
    ui->videoPlayer->setSpeed(0);
}

Application::~Application()
{
    delete ui;
}


void Application::on_pushButton_clicked()
{
    index += 1;
    ui->label->setText("# " + firstLines[index]);
    ui->label_2->setText("## " + secondLines[index]);
    if (index > 5) {
        ui->videoPlayer->incrementSpeed();
    }
}

