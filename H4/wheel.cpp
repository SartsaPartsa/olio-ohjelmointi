#include "Wheel.h"

// Konstruktio, joka alustaa renkaan annetulla koolla ja tyypillä.
Wheel::Wheel(int sz, string tp) : size(sz), type(tp) {}

// Palauttaa renkaan koon tuumina.
int Wheel::getSize() const {
    return size;
}

// Asettaa renkaalle uuden koon.
void Wheel::setSize(int sz) {
    size = sz;
}

// Palauttaa renkaan tyypin (esim. "kesärengas").
string Wheel::getType() const {
    return type;
}

// Asettaa renkaalle uuden tyypin.
void Wheel::setType(const string& tp) {
    type = tp;
}

