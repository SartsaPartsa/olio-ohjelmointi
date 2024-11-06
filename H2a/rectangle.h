#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
   double width;   // Suorakulmion leveys
   double height;  // Suorakulmion korkeus

public:
   // Konstruktorin määrittely
   Rectangle(double w, double h);  // Alustaa suorakulmion mitat

   // Palauttaa suorakulmion pinta-alan
   double getArea() const;

   // Palauttaa suorakulmion ympärysmitan
   double getCircum() const;

   // Asettaa suorakulmion leveyden
   void setWidth(double w);

   // Asettaa suorakulmion korkeuden
   void setHeight(double h);
};

#endif




