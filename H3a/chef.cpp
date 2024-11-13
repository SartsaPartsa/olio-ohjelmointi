#include "Chef.h"
using namespace std;

// Luodaan kokille nimi ja tallentaa sen muistiin
Chef::Chef(const string &name) : name(name) {
    cout << "Chef " << name << " konstruktori" << endl; // Tulostetaan tieto että kokki on luotu
}
// Poistaa kokin käytöstä ja muistista
Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;  // Tulostetaan tieto, kun kokki poistetaan muistista
}
// Kertoo, että Chef-kokki tekee salaatin
void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl; // Tulostetaan tieto salaatin valmistuksesta
}
// Kertoo, että Chef-kokki tekee keiton
void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl; // Tulostetaan tieto keiton valmistuksesta
}
// Palautetaan Chef-kokin nimen
string Chef::getName() const {
    return name;
}






