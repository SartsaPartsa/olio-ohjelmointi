#include "Animal.h"
#include "Dog.h"

int main() {
    // Luodaan eläin ja kutsutaan ääntä
    Animal* animal = new Animal();  // Luodaan uusi eläin
    animal->callOut();  // Kutsutaan eläimen ääntä (eläin ääntelee)

    //Luodaan koira ja kutsutaan ääntä
    Animal* dog = new Dog();  // Luodaan uusi koira
    dog->callOut();  // Kutsutaan koiran ääntä (koira haukkuu)

    // Tuhotaan luodut eläin ja koira
    delete animal;  // Poistetaan eläin ja vapautetaan muistipaikka
    delete dog;  // Poistetaan koia ja vapautetaan muistipaikka

    return 0;
}

