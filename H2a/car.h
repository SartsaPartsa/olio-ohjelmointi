#ifndef CAR_H
#define CAR_H
#include <string> // Käytetään std::stringiä nimen tallentamiseen, jos et käytä QStringiä


// Määritellään Car-luokka, joka kuvaa auton tietoja
class Car {
private:
     // Auton tiedot tallennetaan näihin muuttujiin
    std::string brand;     // Auton merkki
    std::string model;     // Auton malli
    int yearModel;         // Auton valmistusvuosi

public:
    Car();  // Alustaa auton tiedot oletusarvoilla

    // Tulostaa auton tiedot
    void printData() const;

    // Määritetään auton tiedot
    void setBrand(const std::string &newBrand); // Asettaa auton merkin
    void setModel(const std::string &newModel); // Asettaa auton mallin
    void setYearModel(int newYearModel);        // Asettaa auton valmistusvuoden
};

#endif // CAR_H
