#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

// Luokka Wheel kuvaa auton rengasta.
// Renkaalla on kaksi ominaisuutta: koko (esim. tuumina) ja tyyppi (kesä-/talvirengas).
class Wheel {
private:
    int size;           // Renkaan koko tuumina
    string type;        // Renkaan tyyppi, esim. "kesärengas"

public:
    // Konstruktio, jolla luodaan uusi rengas. Oletuksena koko on 0 ja tyyppi tyhjä.
    Wheel(int sz = 0, string tp = "");

    // Palauttaa renkaan koon.
    int getSize() const;

    // Asettaa renkaalle tietyn koon.
    void setSize(int sz);

    // Palauttaa renkaan tyypin.
    string getType() const;

    // Asettaa renkaalle tietyn tyypin.
    void setType(const string& tp);
};

#endif // WHEEL_H



