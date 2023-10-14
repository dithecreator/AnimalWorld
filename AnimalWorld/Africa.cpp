//
//  Africa.cpp
//  AnimalWorld
//
//  Created by Дима on 14.10.23.
//

#include "Africa.hpp"
#include "Continent.hpp"
#include <iostream>
using namespace std;

Africa:: Africa(char* n, double t): Continent(n, t){};


void Africa:: print(){
    cout << "continent: " << name << endl;
    cout << "temperature: " << temperature << endl;
}

Africa:: ~Africa() {
    delete herbivore;
    delete carnivore;
}
