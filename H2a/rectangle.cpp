#include "rectangle.h"

// Määrittää suorakulmion leveyden ja korkeuden
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

// Laskee suorakulmion pinta-alan
double Rectangle::getArea() const {
    return width * height;  // Pinta-ala = leveys * korkeus
}

// Laskee suorakulmion ympärysmitan
double Rectangle::getCircum() const {
    return 2 * (width + height);  // Ympärysmitta = 2 * (leveys + korkeus)
}

// Asetetaan suorakulmion leveys
void Rectangle::setWidth(double w) {
    width = w;
}

// Asetetaan suorakulmion korkeus
void Rectangle::setHeight(double h) {
    height = h;
}


