#include "Animal.h"

// Animal-luokan konstruktori
Animal::Animal() {
    cout << "Animal konstruktio..." << endl;  // Ilmoitetaan, että Animal-olio luodaan
}

// Animal-luokan virtuaalinen destruktori
Animal::~Animal() {
    cout << "Animal destruktori." << endl;  // Ilmoitetaan, että Animal-olio tuhotaan
}

// Animal-luokan virtuaalinen callOut-metodi
void Animal::callOut() {
    cout << "Elain aantelee." << endl;
}




