#ifndef PEDESTRIANDETECT_H
#define PEDESTRIANDETECT_H

#include <QMainWindow>

namespace Ui {
class PedestrianDetect;
}

class PedestrianDetect : public QMainWindow
{
    Q_OBJECT

public:
    explicit PedestrianDetect(QWidget *parent = 0);
    ~PedestrianDetect();

private slots:
    void on_quitButton_clicked();

private:
    Ui::PedestrianDetect *ui;
};

#endif // PEDESTRIANDETECT_H
