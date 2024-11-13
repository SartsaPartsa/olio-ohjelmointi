#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

using namespace std;

// Chef-luokka määrittelee kokin perustoiminnot
class Chef {
public:
    // Konstruktorissa asetetaan kokin nimi ja tallennetaan se olioon
    Chef(const string &name);

     // Destruktori, joka vapauttaa mahdolliset resurssit ja huolehtii olion poistamisesta
    virtual ~Chef();

     // Metodi, jonka avulla kokki voi valmistaa salaatin
    void makeSalad();
    // Metodi, jonka avulla kokki voi valmistaa salaatin
    void makeSoup();

     // Palauttaa kokin nimen
    string getName() const;

protected:
    string name; // Kokin nimi tallennetaan tähän (tämä on suojattu alaluokkia varten)

};

#endif // CHEF_H





