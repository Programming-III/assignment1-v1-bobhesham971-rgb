#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;


cpp/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal() : name(""), age(0), isHungry(true) {}
    Animal(string n, int a, bool h) : name(n), age(a), isHungry(h) {}
    ~Animal() {}
    void display() {
        cout << "* " << name << " (Age: " << age << ", ";
        cout << (isHungry ? "Hungry" : "Not Hungry") << ")";
    }
    void feed() {
        if (isHungry) {
            cout << name << " is being fed." << endl;
            isHungry = false;
        } else {
            cout << name << " is not hungry." << endl;
        }
    }
    string getName() const { return name; }
    int getAge() const { return age; }
    bool getIsHungry() const { return isHungry; }
};
