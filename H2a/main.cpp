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

    // Luodaan Rectangle-olio dynaamisesti (heap-muistiin)
    Rectangle* rect = new Rectangle(5.0, 3.0);  // Suorakulmion leveys 5.0 ja korkeus 3.0

    // Lasketaan ja tulostetaan suorakulmion pinta-ala
    std::cout << "Suorakulmion pinta-ala: " << rect->getArea() << std::endl;

    // Lasketaan ja tulostetaan suorakulmion ympärysmitta
    std::cout << "Suorakulmion ympärysmitta: " << rect->getCircum() << std::endl;

    // Vapautetaan muistia, kun Rectangle-olio ei ole enää tarpeen
    delete rect;

    // Luodaan Student-olio smart pointerilla ja asetetaan tiedot
    std::unique_ptr<Student> student = std::make_unique<Student>("Matti Meikäläinen", 12345, 7.2);

    // Tulostetaan opiskelijan tiedot käyttäen get-metodeja
    std::cout << "Name: " << student->getName() << std::endl;  // std::string voidaan tulostaa suoraan
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Average: " << student->getAverage() << std::endl;


    return 0;
}

