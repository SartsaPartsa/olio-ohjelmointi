#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

using namespace std;

// Määrittellään, mitä kokki voi tehdä
class Chef {
public:
    // Luodaan (konstruktio) uusi kokki ja annetaan nimi
    Chef(const string &name);

    // Poistetaan kokki ja vapautetaan muistia
    virtual ~Chef();

     // Nämä ovat kokin tekemät toiminnot
    void makeSalad(); // Kokki voi tehdä salaatin
    void makeSoup(); // Kokki voi tehdä keiton

     // Funktio palauttaa kokin nimen
    string getName() const;

protected:
    string name; // Tallennetaan kokin nimi (suojattu, kokki ja sen alaluokat voi käyttää sitä)

};

#endif // CHEF_H





