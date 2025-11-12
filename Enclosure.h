#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

 
  class Enclosure {
private:
    Animal** animals;
    int capacity;
    int currentCount;
public:
    Enclosure(int cap = 10) : capacity(cap), currentCount(0) {
        animals = new Animal*[capacity];
    }
    ~Enclosure() {
        for (int i = 0; i < currentCount; ++i) {
            delete animals[i];
        }
        delete[] animals;
    }
    void addAnimal(Animal* a) {
        if (currentCount < capacity) {
            animals[currentCount++] = a;
        }
    }
    void displayAnimals() {
        cout << "Enclosure 1 Animals:" << endl;
        for (int i = 0; i < currentCount; ++i) {
            animals[i]->display();
        }
    }
};
    
