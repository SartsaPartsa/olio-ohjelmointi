#include "exampleclass.h"

ExampleClass::ExampleClass(QObject* parent) : QObject(parent)
{
    qDebug() << "Start";  // Tulostetaan konsoliin
    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot); // Yhdistetään signaali ja slotti
    qDebug() << "End";  // Tulostetaan konsoliin
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);  // Simuloidaan viivettä
    emit readyToSay();  // Lähetetään signaali
}

void ExampleClass::sayHelloSlot()
{
    qDebug() << "Terve";  // Tulostetaan viesti konsoliin
}

