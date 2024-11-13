#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

// ItalianChef-luokka perii Chef-luokan toiminnot
class ItalianChef : public Chef {
public:
    // Konstruktorissa asetetaan ItalianChef-olion nimi ja kutsutaan Chef-luokan konstruktoria
    // Tämä luo ItalianChef-olion, joka perii Chef-luokan ominaisuudet
    ItalianChef(const string& name);

    // Kertoo, että ItalianChef valmistaa pastaa
    void makePasta();

    // Destruktori, joka tuhoaa ItalianChef-olion ja vapauttaa sen käyttämän muistin
    // Tulostaa viestin, että ItalianChef on poistettu muistista
    ~ItalianChef();

    // Tämä funktio palauttaa ItalianChef-olion nimen
    // Nimi periytyy Chef-luokasta
    string getName() const;
};

#endif // ITALIANCHEF_H







