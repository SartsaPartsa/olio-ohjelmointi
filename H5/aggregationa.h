#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "ClassB.h"
#include <string>
using namespace std;

class AggregationA {
private:
    ClassB &refB;  // RefB on viittaus ClassB-olioon
public:
    AggregationA(ClassB&);  // Konstruktori, joka ottaa ClassB-referenssin
    string getBinfo();  // Palauttaa ClassB-olion info
    void setBinfo(string);  // Asettaa ClassB-olion info
};

#endif

