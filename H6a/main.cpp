#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass myObject;
    myObject.raiseMySignal();  // Kutsutaan metodin raiseMySignal

    return a.exec();  // Suoritetaan Qt-tapahtumasilmukka (ei tarpeen tässä yksinkertaisessa esimerkissä)
}

