#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); // Luo Qt-sovelluksen

    MyClass myObject;
    myObject.raiseMySignal();  // Kutsutaan metodin raiseMySignal

    return a.exec();  // Palautetaan sovelluksen suoritus Qt-tapahtumasilmukkaan (tässä se ei ole tarpeen, mutta yleensä käytetään)
}

