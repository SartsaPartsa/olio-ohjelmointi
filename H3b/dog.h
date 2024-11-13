#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();  // Luodaan (konstoruktio) uusi koira
    virtual ~Dog();  // Poistetaan koira ja vapautetaan muisti
    void callOut() override;  // Koira haukkuu (äänen tuottaminen määritelty uudelleen)
};

#endif // DOG_H




