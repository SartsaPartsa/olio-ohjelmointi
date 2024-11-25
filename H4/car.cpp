#include "Car.h"
#include <iostream>

using namespace std;

// Konstruktio, joka alustaa auton mallin, merkin ja renkaat.
Car::Car(const string& mdl, const string& brnd)
    : model(mdl), brand(brnd), wheels(4) {} // Autolla on aina 4 rengasta

// Asettaa auton moottorin hevosvoimat ja tilavuuden.
void Car::setEngine(int hp, double disp) {
    engine.setHorsepower(hp);
    engine.setDisplacement(disp);
}

// Asettaa kaikille renkaiden koon ja tyypin.
void Car::setWheels(int sz, const string& tp) {
    for (auto& wheel : wheels) {
        wheel.setSize(sz);
        wheel.setType(tp);
    }
}

// Tulostaa auton tiedot (malli, merkki, moottorin tiedot ja renkaiden tiedot).
void Car::printDetails() const {
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << engine.getHorsepower() << "hp, " << engine.getDisplacement() << "L" << endl;

    for (size_t i = 0; i < wheels.size(); ++i) {
        cout << "Rengas " << i + 1 << ": " << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
    }
}


