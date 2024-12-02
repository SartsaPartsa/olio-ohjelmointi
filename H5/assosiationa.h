#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H

#include "ClassB.h"  // Linkittää ClassB:n mukaan

class AssosiationA {
private:
    ClassB objectB;  // Sisältää ClassB-olion

public:
    // Konstruktori, joka ottaa ClassB-olion argumenttina
    AssosiationA(ClassB);

    // Hakee ClassB-olion tiedon
    string getBinfo();

    // Asettaa ClassB-olion tiedon
    void setBinfo(const string);
};

#endif
