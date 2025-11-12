#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============

int main() {
    Enclosure e;

    Mammal* lion = new Mammal("Lion", 5, true, "Golden");
    Bird* parrot = new Bird("Parrot", 2, false, 0.5f);
    Reptile* snake = new Reptile("Snake", 3, true, true);

    e.addAnimal(lion);
    e.addAnimal(parrot);
    e.addAnimal(snake);

    e.displayAnimals();

    Visitor v("Sarah Ali", 3);
    v.displayInfo();

    return 0;
}
