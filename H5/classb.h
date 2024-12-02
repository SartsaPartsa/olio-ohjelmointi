#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB {
private:
    string info;  // Tieto, jota hallitaan

public:
    // Get-metodi, palauttaa 'info' muuttujan arvon
    string getInfo() const;

    // Set-metodi, asettaa 'info' muuttujan arvon
    void setInfo(const string& value);
};

#endif
