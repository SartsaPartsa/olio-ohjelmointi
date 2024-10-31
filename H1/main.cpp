#include <iostream> // Tätä tarvitaan cin ja cout -olioiden käyttöön

using namespace std;

void calcSum(int a, int b);  // Tulostaa summan
void calcDiv(int a, int b);  // Tulostaa osamäärän
int retSum(int a, int b);    // Palauttaa summan
float retDiv(int a, int b);  // Palauttaa osamäärän

int main(){
// Vaihe 1:
// Määritellään kaksi muuttujaa a ja b
    int a, b;

// Kysy kokonaisluvut käyttäjältä
    cout << "Anna eka kokonaisluku (a): ";  // Kysytään käyttäjältä ensimmäinen kokonaisluku
    cin >> a; // Tallennetaan syöte muuttujaan a
    cout << "Anna toka kokonaisluku (b): "; // Kysytään käyttäjältä toinen kokonaisluku
    cin >> b; // Tallennetaan syöte muuttujaan a
    calcSum(a, b); // Kutsutaan summan laskemiseen liittyvää funktiota
    calcDiv(a, b); // Kutsutaan osamäärän laskemiseen liittyvää funktiota
    cout << "Summa2: " << retSum(a, b) << endl; // Kutsutaan summan laskemiseen liittyvää funktiota ja tulostetaan sen palauttama arvo
    cout << "Osamaara2: " << retDiv(a, b) << endl; // Kutsutaan osamäärän laskemiseen liittyvää funktiota ja tulostetaan san palauttama arvo
    return 0; // Palautetaan 0, ohjelma suoritettiin onnistuneesti
}

// Vaihe 2: Funktio summan laskemiseen ja tulostamiseen
void calcSum(int a, int b) {
    int summa = a + b; // Lasketaan a:n ja b:n summa
    cout << "Summa: " << summa << endl; // Tulostetaan summa
}

// Vaihe 2: Funktio osamäärän laskemiseen ja tulostamiseen
void calcDiv( int a, int b) {
    cout.precision(2);
    if (b != 0) { // Tarkistetaan, onko jakaja ei-nolla
        float osamaara = (float)a / (float)b; // Lasketaan osamäärä
        cout << "Osamaara: " << osamaara << endl; // Tulostetaan osamäärä
    } else {
        cout << "Virhe: Jakaja ei voi olla nolla!" << endl; // Tulostetaan virheilmoitus
    }
}

// Vaihe 3: Summan laskeminen ilman tulostusta
int retSum(int a, int b) {
    return a + b;
}

// Vaihe 3: Osamäärän laskeminen ilman tulostusta
float retDiv(int a, int b) {
    if (b != 0) { // Tarkistetaan, onko jakaja nolla
        return (float)a / (float)b; // Lasketaan osamäärä
    } else {
        cout << "Virhe: Jakaja ei voi olla nolla!" << endl; // Tulostetaan virheilmoitus
        return 0; // Palautetaan 0 virheen sattuessa
    }

}


