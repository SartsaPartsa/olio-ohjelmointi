#ifndef CAR_H
#define CAR_H

#include <string>
#include <vector>
#include "Engine.h"
#include "Wheel.h"

using namespace std;

// Luokka Car kuvaa kokonaista autoa.
// Auto koostuu moottorista, neljästä renkaasta, mallinimestä ja merkistä.
class Car {
private:
    Engine engine; // Auton moottori
    vector<Wheel> wheels; // Auton neljä rengasta
    string model; // Auton malli (esim. "Corolla")
    string brand; // Auton merkki (esim. "Toyota")

public:
    // Konstruktio, jolla luodaan uusi auto tietyn mallin ja merkin perusteella.
    Car(const string& mdl, const string& brnd);

    // Asettaa auton moottorille tietyt ominaisuudet.
    void setEngine(int hp, double disp);

    // Asettaa kaikille auton renkaille tietyt ominaisuudet.
    void setWheels(int sz, const string& tp);

    // Tulostaa auton kaikki tiedot.
    void printDetails() const;
};

#endif // CAR_H

