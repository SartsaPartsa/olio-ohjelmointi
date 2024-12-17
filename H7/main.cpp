#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  // Luo QApplication-olio, joka hallitsee sovelluksen elinkaarta
    MainWindow w;  // Luo MainWindow-olio (pääikkuna)
    w.show();  // Näyttää pääikkunan
    return a.exec();  // Käynnistää tapahtumasilmukan (tapahtumat käsitellään täällä)
}


