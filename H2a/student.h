#ifndef STUDENT_H
#define STUDENT_H
#include <string>  // Käytetään std::stringiä nimen tallentamiseen, jos et käytä QStringiä

class Student
{
public:
    // Alustaa opiskelijan tiedot
    Student(const std::string& name, int studentNumber, double average);

    // Palauttaa opiskelijan nimen
    std::string getName() const;

    // Palauttaa opiskelijanumeron
    int getStudentNumber() const;

    // Palauttaa opiskelijan keskiarvon
    double getAverage() const;

    // Asettaa opiskelijan nimen
    void setName(const std::string& name);

    // Asettaa opiskelijanumeron
    void setStudentNumber(int studentNumber);

    // Asettaa opiskelijan keskiarvon
    void setAverage(double average);

private:
    std::string name;      // Opiskelijan nimi
    int studentNumber;     // Opiskelijanumero
    double average;        // Opiskelijan keskiarvo
};

#endif // STUDENT_H

