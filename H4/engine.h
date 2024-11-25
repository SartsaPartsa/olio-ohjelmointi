#ifndef ENGINE_H
#define ENGINE_H

// Luokka Engine kuvaa auton moottoria.
// Moottorilla on kaksi ominaisuutta: hevosvoimat ja tilavuus.
class Engine {
private:
    int horsepower;     // Moottorin teho hevosvoimissa
    double displacement; // Moottorin tilavuus litroina

public:
    // Konstruktio, jolla luodaan uusi moottori. Oletuksena teho on 0 ja tilavuus 0.0.
    Engine(int hp = 0, double disp = 0.0);

    // Palauttaa moottorin hevosvoimat.
    int getHorsepower() const;

    // Asettaa moottorille tietyn hevosvoiman.
    void setHorsepower(int hp);

    // Palauttaa moottorin tilavuuden.
    double getDisplacement() const;

    // Asettaa moottorille tietyn tilavuuden.
    void setDisplacement(double disp);
};

#endif // ENGINE_H

