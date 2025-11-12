#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

 class Mammal : public Animal {
private:
    string furColor;
public:
    Mammal() : Animal(), furColor("") {}
    Mammal(string n, int a, bool h, string f) : Animal(n, a, h), furColor(f) {}
    ~Mammal() {}
    void display() {
        Animal::display();
        cout << endl;
    }
};

#endif
