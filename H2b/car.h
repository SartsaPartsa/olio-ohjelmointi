#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car {
public:
   // Asettaa auton merkin, mallin ja vuoden
   Car(const string &brand, const string &model, int yearModel);

   // Tulostaa auton tiedot
   void printData() const;

private:
   string brand;    // Auton merkki
   string model;    // Auton malli
   int yearModel;   // Auton valmistusvuosi
};

#endif // CAR_H

