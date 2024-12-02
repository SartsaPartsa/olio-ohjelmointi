#include <iostream>
#include "classb.h"
#include "aggregationa.h"
#include "Assosiationa.h"

using namespace std;

int main() {
    // Vaihe 1: Osoitin, referenssi ja muuttujien arvot
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    // Osoitin
    int* myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    // Vaihdetaan pointteri b:n osoitteeseen
    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    // Referenssi
    int& refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

    // Ei voi vaihtaa referenssin osoitetta: refA = b; ei ole sallittua
    // refA:n osoite pysyy samana, vaikka arvoa muutetaan.
    refA = b;  // Tämä ei muuta refA:n viittaamaa osoitetta, vain sen arvon.
    cout << "refA:n uuden arvon jälkeen refA:n osoittama muistipaikka on: " << &refA << endl;
    cout << "refA:n uuden arvon jälkeen refA:n muistipaikan arvo on: " << refA << endl;
    cout << endl;

    // Vaihe 2: Assosiaatio ja luokat
    // Luodaan ClassB-olio ja asetetaan sille arvo
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    // Luodaan AssosiationA-olio, joka ottaa ClassB-olion
    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    // Tulostetaan tiedot
    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;
    cout << endl;

    // Vaihe 3: Aggregaatio ja luokat
    // Aggregaatio esimerkki
    cout << "Aggregaatio esimerkki:" << endl;
    ClassB &refB = objB;  // Luodaan referenssi objB:hen
    AggregationA objAggr(refB);  // Luodaan AggregationA-olio, joka käyttää referenssiä
    objAggr.setBinfo("Olion Agr asettama info");  // Muutetaan objB:n info AggregationA:n kautta
    cout << "objB: " << objB.getInfo() << endl;  // Tulostetaan objB:n info
    cout << "objAggr: " << objAggr.getBinfo() << endl;  // Tulostetaan objAggr:n info
    cout << endl;

    return 0;
}

