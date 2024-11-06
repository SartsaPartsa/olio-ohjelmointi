#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

// Määritellään Car-luokka, joka kuvaa auton tietoja
class Car {
private:
     // Auton tiedot tallennetaan näihin muuttujiin
    string brand;     // Auton merkki
    string model;     // Auton malli
    int yearModel;         // Auton valmistusvuosi

public:
    Car();  // Alustaa auton tiedot oletusarvoilla

    // Tulostaa auton tiedot
    void printData() const;

    // Määritetään auton tiedot
    void setBrand(const string &newBrand); // Asettaa auton merkin
    void setModel(const string &newModel); // Asettaa auton mallin
    void setYearModel(int newYearModel);        // Asettaa auton valmistusvuoden
};

#endif // CAR_H
