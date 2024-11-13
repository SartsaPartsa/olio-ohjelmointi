#include "Dog.h"

// Dog-luokan konstruktori
Dog::Dog() {
    cout << "Dog konstruktio." << endl;  // Ilmoitetaan, että Dog-olio luodaan
}

// Dog-luokan destruktori
Dog::~Dog() {
    cout << "Dog destruktori." << endl;  // Ilmoitetaan, että Dog-olio tuhotaan
}

// Dog-luokan ylikirjoitettu callOut-metodi
void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}



