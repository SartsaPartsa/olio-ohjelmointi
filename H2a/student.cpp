#include "Student.h"
#include <string> // Käytetään std::stringiä nimen tallentamiseen, jos et käytä QStringiä

// Alustaa opiskelijan tiedot
Student::Student(const std::string& name, int studentNumber, double average)
    : name(name), studentNumber(studentNumber), average(average) {}

// Getterit
// Hakee opiskelijan nimen
std::string Student::getName() const {
    return name;
}
// Hakee opiskelijan opiskelijanumeron
int Student::getStudentNumber() const {
    return studentNumber;
}
// Hakee opiskelijan keskiarvon
double Student::getAverage() const {
    return average;
}

// Setterit
// Asettaa opiskelijan nimen
void Student::setName(const std::string& name) {
    this->name = name;
}
// Asettaa opiskelijan opiskelijanumeron
void Student::setStudentNumber(int studentNumber) {
    this->studentNumber = studentNumber;
}
// Asettaa opiskelijan keskiarvon
void Student::setAverage(double average) {
    this->average = average;
}

