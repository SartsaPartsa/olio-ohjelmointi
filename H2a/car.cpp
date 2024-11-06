#include "Car.h"
#include <iostream>

// Alustaa auton merkin ja mallin tyhjiksi sekä valmistusvuoden nollaksi
Car::Car() : brand(""), model(""), yearModel(0) {}

// Tulostaa auton tiedot: merkin, mallin ja valmistusvuoden
void Car::printData() const {
    std::cout << "Brand: " << brand << std::endl;           // Tulostetaan auton merkki
    std::cout << "Model: " << model << std::endl;           // Tulostetaan auton malli
    std::cout << "Year Model: " << yearModel << std::endl;  // Tulostetaan auton valmistusvuosi
}

// Asetetaan auton merkki
void Car::setBrand(const std::string &newBrand) {
    brand = newBrand; // Tallennetaan uusi merkki
}

// Asetetaan auton malli
void Car::setModel(const std::string &newModel) {
    model = newModel; // Tallennetaan uusi malli
}  // Tämä sulku lisättiin oikein

// Asetetaan auton valmistusvuosi
void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel; // Tallennetaan uusi valmistusvuosi
}
