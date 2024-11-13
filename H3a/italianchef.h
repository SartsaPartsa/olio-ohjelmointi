#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

// ItalianChef perii Chef-luokan taidot
class ItalianChef : public Chef {
public:
    // Luodaan uusi ItalianChef-kokki ja annetaan sille nimi
    // Luontivaiheessa kutsutaan myös alkuperäisen Chef-kokin luontia
    ItalianChef(const string& name);

    // Kertoo mitä ItalianChef voi tehdä
    // Tämä toiminto tulostaa, että ItalianChef valmistaa pastaa
    void makePasta();

    // Poistetaan ItalianChef-kokki muistista
    // Tämä tapahtuu automaattisesti, kun ItalianChef-olio ei ole enää käytössä
    ~ItalianChef(); // Tulostaa tiedon ettäItalianChef on poistettu muistista

    // Funktio kokin nimen saamiseksi
    // Paluttaa ItalianChef-kokin nimen, joka periytyy Chef-luokasta
    string getName() const;
};

#endif // ITALIANCHEF_H







