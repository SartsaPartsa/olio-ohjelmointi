#include "ClassB.h"

// Palauttaa ClassB-olion tiedon
string ClassB::getInfo() const {
    return info;
}

// Asettaa ClassB-olion tiedon
void ClassB::setInfo(const string& value) {
    info = value;
}

