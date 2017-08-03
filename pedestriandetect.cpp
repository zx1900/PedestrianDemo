#include "pedestriandetect.h"
#include "ui_pedestriandetect.h"

PedestrianDetect::PedestrianDetect(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PedestrianDetect)
{
    ui->setupUi(this);
}

PedestrianDetect::~PedestrianDetect()
{
    delete ui;
}

void PedestrianDetect::on_quitButton_clicked()
{
    QCoreApplication::quit();
}
