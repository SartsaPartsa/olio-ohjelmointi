#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    Animal();  // Luodaan (konstruktio) uusi eläin
    virtual ~Animal();  // Poistetaan (destruktio) eläin ja vapautetaan muisti
    virtual void callOut();  // Eläimen äänen tuottaminen
};

#endif // ANIMAL_H



