#include "Car.h"
#include "Rectangle.h"
#include <iostream>
#include <memory> // Käytetään smart pointeria
#include "Student.h"


int main() {
    // Luodaan Car-olio
    Car myCar;

    // Asetetaan auton merkki, malli ja valmistusvuosi
    myCar.setBrand("Toyota");        // Asetetaan merkiksi "Toyota"
    myCar.setModel("Corolla");       // Asetetaan malliksi "Corolla"
    myCar.setYearModel(2020);        // Asetetaan valmistusvuodeksi 2020

   // Näytetään auton tiedot
    myCar.printData();

    // Luodaan Rectangle-olio (heap-muistiin)
    Rectangle* rect = new Rectangle(5.0, 3.0);  // Suorakulmion leveys 5.0 ja korkeus 3.0

    // Lasketaan ja tulostetaan suorakulmion pinta-ala
    cout << "Suorakulmion pinta-ala: " << rect->getArea() << endl;

    // Lasketaan ja tulostetaan suorakulmion ympärysmitta
    cout << "Suorakulmion ymparysmitta: " << rect->getCircum() << endl;

    // Vapautetaan muistia, kun Rectangle-olio ei ole enää tarpeen
    delete rect;

    // Luodaan Student-olio smart pointerilla ja asetetaan tiedot
    unique_ptr<Student> student = make_unique<Student>("Mikko Vilkas", 12345, 7.2);

   // Tulostetaan opiskelijan tiedot
    cout << "Name: " << student->getName() << endl;
    cout << "Student Number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;


    return 0;
}

