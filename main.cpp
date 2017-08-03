#include "pedestriandetect.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PedestrianDetect w;
    w.show();

    return a.exec();
}
