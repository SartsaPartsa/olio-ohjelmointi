#include "car.h"

// Asettaa auton tiedot
Car::Car(const string &brand, const string &model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel) {}

// Tulostaa auton tiedot
void Car::printData() const {
    cout << "Brand: " << brand
              << ", Model: " << model
              << ", Year: " << yearModel << endl;
}

