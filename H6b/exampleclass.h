#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QThread>
#include <QCoreApplication>
#include <QDebug>

// Määritellään ExampleClass, joka perii QObjectin
class ExampleClass : public QObject
{
    Q_OBJECT // Qt:n signaali-slot-järjestelmän vaatima makro

public:
    explicit ExampleClass(QObject* parent = nullptr); // Konstruktorin määrittely, parentilla oletusarvo nullptr

    void startToWait(); // Julkinen metodi, joka käynnistää jonkin toiminnon (toiminto ei näy tässä koodissa)


signals:
    void readyToSay(); // Signaali, joka voidaan lähettää, kun toiminto on valmis

public slots:
    void sayHelloSlot(); // Slot-metodi, joka suoritetaan, kun siihen yhdistetty signaali vastaanotetaan
};

#endif // EXAMPLECLASS_H

