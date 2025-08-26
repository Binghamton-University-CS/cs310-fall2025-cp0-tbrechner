#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
    public:
        AnimalsInZoo(Animal animalInput);
        AnimalsInZoo() : numAnimals(0) {};
        void display();
        
    private:
        int numAnimals;
        Animal animal;
};
#endif