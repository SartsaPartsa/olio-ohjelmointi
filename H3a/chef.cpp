#include "Chef.h"
using namespace std;

// Luodaan (konstruktio) kokin nimi ja tallennetaan se muistiin
// Tulostetaan viesti, joka ilmoittaa, että kokki on luotu
Chef::Chef(const string &name) : name(name) {
    cout << "Chef " << name << " konstruktori" << endl; // Tulostaa tiedon kokin luomisesta
}
// Poistaa (estruktori) kokin käytöstä ja muistista
Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;  // Tulostaa tiedon kokin poistamisesta
}
// Metodi, joka kertoo, että kokki valmistaa salaatin
void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl; // Tulostetaan tieto salaatin valmistuksesta
}
// MEtodi, joka kertoo, että kokki valmistaa keiton
void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl; // Tulostetaan tieto keiton valmistuksesta
}
// Palauttaa kokin nimen
string Chef::getName() const {
    return name;
}






