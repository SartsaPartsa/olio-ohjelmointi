#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass example;
    example.startToWait();  // Kutsutaan metodia, joka emitoi signaalin

    return a.exec();  // Palautetaan sovelluksen suoritus Qt-tapahtumasilmukkaan (tässä se ei ole tarpeen, mutta yleensä käytetään)
}
