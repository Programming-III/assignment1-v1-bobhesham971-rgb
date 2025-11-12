#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
private:
    float wingSpan;
public:
    Bird() : Animal(), wingSpan(0.0f) {}
    Bird(string n, int a, bool h, float w) : Animal(n, a, h), wingSpan(w) {}
    ~Bird() {}
    void display() {
        Animal::display();
        cout << endl;
    }
};




#endif
