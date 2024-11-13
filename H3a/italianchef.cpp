#include "ItalianChef.h"
#include <iostream>
using namespace std;

// Luodaan ItalianChef-kokki, jolle annetaan nimi, ja tallennetaan nimi
// Tulostaa viestin siitä, että ItalianChef on luotu
ItalianChef::ItalianChef(const string& name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori" << endl; // Näyttää, että ItalianChef-kokki on luotu ja hänen nimensä
}
// Kertoo että ItalianChef-kokki tekee pastaa
void ItalianChef::makePasta() {
    cout << "ItalianChef " << getName() << " makes pasta" << endl; // Tulosta tiedon pastan valmistamisesta
}
// ItalianChef-kokin nimen palauttaminen
// Tämä antaa takaisin ItalianChef-kokin nimen, joka asetettiin luotaessa
string ItalianChef::getName() const {
    return Chef::getName();  // Palautetaan ItalianChef:n nimi
}

// Poistetaan ItalianChef-kokki muistista iun sitä ei tarvita
// Näyttää viestin kokin poistamisesta
ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << getName() << " destruktori" << endl;  // Näyttää viestin ItalianChef:n poistosta
}









