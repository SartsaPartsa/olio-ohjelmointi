#include "myclass.h"

// Konstruktorissa yhdistetään signaali mySignal() slotiin mySlot()
MyClass::MyClass(QObject *parent) : QObject(parent) {
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot())); // Signaali yhdistetään slottiin
}

// Metodi, joka lähettää mySignal-signaalin
void MyClass::raiseMySignal()
{
    emit mySignal(); // Lähetetään mySignal
}

// Slot-metodi, joka suoritetaan, kun mySignal-signaali vastaanotetaan
void MyClass::mySlot()
{
    qDebug()<<"mySlot:ia kutsuttiin"; // Tulostaa viestin konsoliin
}

