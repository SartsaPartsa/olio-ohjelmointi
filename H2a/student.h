#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
public:
    // Alustaa opiskelijan tiedot
    Student(const string& name, int studentNumber, double average);

    // Palauttaa opiskelijan nimen
    string getName() const;

    // Palauttaa opiskelijanumeron
    int getStudentNumber() const;

    // Palauttaa opiskelijan keskiarvon
    double getAverage() const;

    // Asettaa opiskelijan nimen
    void setName(const string& name);

    // Asettaa opiskelijanumeron
    void setStudentNumber(int studentNumber);

    // Asettaa opiskelijan keskiarvon
    void setAverage(double average);

private:
    string name;      // Opiskelijan nimi
    int studentNumber;     // Opiskelijanumero
    double average;        // Opiskelijan keskiarvo
};

#endif // STUDENT_H

