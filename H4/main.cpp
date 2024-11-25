#include "Car.h"

int main() {
    // Luodaan uusi auto, jossa on merkki "Toyota" ja malli "Corolla".
    Car car("Corolla", "Toyota");

    // Asetetaan moottorille 150 hevosvoimaa ja 2.0 litran tilavuus.
    car.setEngine(150, 2.0);

    // Asetetaan kaikille renkaiden kooksi 17 tuumaa ja tyypiksi "kesärengas".
    car.setWheels(17, "kesarengas");

    // Tulostetaan auton tiedot.
    car.printDetails();

    return 0; // Ohjelman suoritus päättyy.
}


