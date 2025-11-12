#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
 class Reptile : public Animal {
private:
    bool isVenomous;
public:
    Reptile() : Animal(), isVenomous(false) {}
    Reptile(string n, int a, bool h, bool v) : Animal(n, a, h), isVenomous(v) {}
    ~Reptile() {}
    void display() {
        Animal::display();
        if (isVenomous) cout << ", Venomous";
        cout << endl;
    }
};
