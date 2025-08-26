#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animalInput) {
    animal = animalInput;
    numAnimals = 1;
}

void AnimalsInZoo::display() {
    cout << numAnimals << endl;
    if(numAnimals == 1) {
        animal.display();
    }
}