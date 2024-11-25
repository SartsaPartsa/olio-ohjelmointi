#include "Engine.h"

// Konstruktio, joka alustaa moottorin annetulla hevosvoimalla ja tilavuudella.
Engine::Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

// Palauttaa moottorin tehot.
int Engine::getHorsepower() const {
    return horsepower;
}

// Asettaa moottorin tehot.
void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

// Palauttaa moottorin tilavuuden litroina.
double Engine::getDisplacement() const {
    return displacement;
}

// Asettaa moottorin tilavuuden litroina.
void Engine::setDisplacement(double disp) {
    displacement = disp;
}

