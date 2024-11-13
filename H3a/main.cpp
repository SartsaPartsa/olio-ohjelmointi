#include "Chef.h"
#include "ItalianChef.h"

int main() {
    // Luodaan Chef-luokan olio nimeltä "Gordon Ramsay"
    Chef chef("Gordon Ramsay");
    // Kutsutaan makeSalad-metodia, joka tulostaa viestin siitä mitä Gordon Ramsay tekee
    chef.makeSalad(); // Tulostaa "Gordon Ramsay makes salad"
    // Kutsutaan makeSoup-metodia, joka tulostaa viestin siitä, että Gordon Ramsay tekee keiton
    chef.makeSoup(); // Tulostaa "Gordon Ramsay makes salad"

    // Luodaan ItalianChef-luokan olio nimeltä "Anthony Bourdain"
    ItalianChef italianChef("Anthony Bourdain");
    // Kutsutaan makeSalad-metodia ItalianChef-luokasta, joka perii Chef-luokasta
    italianChef.makeSalad(); // Tulostaa "Anthony Bourdain makes salad" (koska ItalianChef perii Chef-luokan)
    // Kutsutaan makeSoup-metodia ItalianChef-luokasta, joka myös perii Chef-luokan
    italianChef.makeSoup(); // Tulostaa "Anthony Bourdain makes soup" (koska ItalianChef perii Chef-luokan)
    // Kutsutaan makePasta-metodia, joka on määritelty ItalianChef-luokassa
    italianChef.makePasta(); // Tulostaa "Anthony Bourdain makes pasta" (tämä metodi on spesifinen ItalianChef-luokalle)

   // Tulostetaan ItalianChef-kokin nimi käyttämällä getName-metodia, joka palauttaa nimen
    cout << "name of the Italian Chef is " << italianChef.getName() << endl;  // Tulostaa kokin nimen

    return 0;
}






