#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace  std;

class MyClass : public QObject { // Luokka perii QObjectin, jotta se voi käyttää Qt:n ominaisuuksia
    Q_OBJECT // Makro, joka tarvitaan Qt:n signaali-slot-järjestelmälle

public:
    MyClass(QObject* parent = nullptr); // Konstruktorin määrittely, parentilla oletusarvo nullptr

    void raiseMySignal(); // Metodi, joka lähettää signaalin

signals:
    void mySignal(); // Signaali, joka voidaan lähettää

public slots:
    void mySlot(); // Slot-metodi, joka voi vastaanottaa signaaleja
};

#endif // MYCLASS_H
