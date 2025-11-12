#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;


 class Animal{
        private:
        string name;
        int age;
        bool isHungry;
        
    }
    public Animal (string name, int age, bool isHungry){
        this -> name = name;
          this -> age = age;
            this -> isHungry = isHungry;
    }
    void display(){
        cout << "name"<< name << "age"<< age << "The animal is:" << isHungry << endl;
    }
    void feed(){
        if (isHungry == "Hungry"}{
            cout << isHungry << endl;
            
        }
        else { cout << " Not Hungry"<< endl;}
        
    }
