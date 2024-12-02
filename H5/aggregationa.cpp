#include "AggregationA.h"

// Konstruktori alustaa refB:n ClassB-referenssillä
AggregationA::AggregationA(ClassB &value): refB(value) {

}

// Palauttaa ClassB-olion info
string AggregationA::getBinfo() {
    return refB.getInfo();
}

// Asettaa ClassB-olion infon
void AggregationA::setBinfo(string value) {
    refB.setInfo(value);
}

