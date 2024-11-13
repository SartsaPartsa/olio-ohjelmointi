#include "Chef.h"
#include "ItalianChef.h"

int main() {
    // Luodaan Chef-luokasta kokki nimeltä "Gordon Ramsay"
    Chef chef("Gordon Ramsay");
    chef.makeSalad(); // Kertoo, että kokki tekee salaatin
    chef.makeSoup(); // Kertoo, että kokki tekee salaatin

    // Luodaan ItalianChef-luokasta kokki nimeltä "Anthony Bourdain"
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad(); // Kertoo että ItalianChef tekee salaatin (perii chef-luokasta)
    italianChef.makeSoup();  // Kertoo että ItalianChef tekee keiton (perii chef-luokasta)
    italianChef.makePasta(); // Kertoo että ItalianChef tekee pastan

    // Tulostetaan ItalianChef-kokin nimi käyttämällä toimintoa, joka palauttaa nimen
    cout << "name of the Italian Chef is " << italianChef.getName() << endl;  // Tulostaa kokin nimen

    return 0;
}






