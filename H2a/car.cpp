#include "Car.h"

// Alustaa auton merkin ja mallin tyhjiksi sekä valmistusvuoden nollaksi
Car::Car() : brand(""), model(""), yearModel(0) {}

// Tulostaa auton tiedot: merkin, mallin ja valmistusvuoden
void Car::printData() const {
    cout << "Brand: " << brand << endl;           // Tulostetaan auton merkki
    cout << "Model: " << model << endl;           // Tulostetaan auton malli
    cout << "Year Model: " << yearModel << endl;  // Tulostetaan auton valmistusvuosi
}

// Asetetaan auton merkki
void Car::setBrand(const string &newBrand) {
    brand = newBrand; // Tallennetaan uusi merkki
}

// Asetetaan auton malli
void Car::setModel(const string &newModel) {
    model = newModel; // Tallennetaan uusi malli
}  // Tämä sulku lisättiin oikein

// Asetetaan auton valmistusvuosi
void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel; // Tallennetaan uusi valmistusvuosi
}
