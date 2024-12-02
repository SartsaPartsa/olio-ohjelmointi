#include "AssosiationA.h"

// Konstruktori, joka saa ClassB-olion ja asettaa sen objectB:hen
AssosiationA::AssosiationA(ClassB value) : objectB(value) {
}

// Palauttaa objectB:n tiedon
string AssosiationA::getBinfo() {
    return objectB.getInfo();
}

// Asettaa objectB:n tiedon
void AssosiationA::setBinfo(string value) {
    objectB.setInfo(value);
}
