#include "car.h"
#include <vector>


int main() {
    // Luo kolme Car-oliota
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Ford", "Mustang", 2021);
    Car car3("Tesla", "Model S", 2022);

    // Luo vektori autoille
    vector<Car> carList;

    // Lisää autot listaan (vektoriin)
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    // Tulosta toisen auton tiedot (alkion)
    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();

    // Tulosta kaikkien autojen tiedot
    cout << "\nKaikkien autojen tiedot:" << endl;
    for (const auto &car : carList) {
        car.printData();
    }

    return 0;
}

