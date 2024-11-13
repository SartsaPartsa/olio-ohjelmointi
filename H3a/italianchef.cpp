#include "ItalianChef.h"
#include <iostream>
using namespace std;

// ItalianChef-luokan konstruktori
// Vastaanottaa nimen ja kutsuu perusluokan (Chef) konstruktorin
// Tulostetaan teksti, joka ilmoittaa, että ItalianChef on luotu
ItalianChef::ItalianChef(const string& name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori" << endl; // Ilmoittaa ItalianChef-olion luomisesta
}
// Metodi, joka kertoo pastan valmistamisesta
void ItalianChef::makePasta() {
    cout << "ItalianChef " << getName() << " makes pasta" << endl; // Tulosta tiedon pastan valmistamisesta
}
// Palauttaa ItalianChef-kokin nimen
// Tämä käyttää perusluokan getName-toimintoa nimen saamiseen
string ItalianChef::getName() const {
    return Chef::getName();  // Palautetaan ItalianChef:n nimi
}

// Tuhoaa ItalianChef-olion
// Tämä poistaa ItalianChef-olion muistista ja tulostaa viestin siitä
ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << getName() << " destruktori" << endl;  // Näyttää viestin ItalianChef:n poistosta
}









