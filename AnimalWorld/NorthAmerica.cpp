//
//  NorthAmerica.cpp
//  AnimalWorld
//
//  Created by Дима on 14.10.23.
//

#include "NorthAmerica.hpp"
#include <iostream>
using namespace std;


NorthAmerica:: NorthAmerica(char* n, double t): Continent(n, t){};

void NorthAmerica:: print() {
    cout << "continent: " << name << endl;
    cout << "temperature: " << temperature << endl;
}
char* NorthAmerica::getContinent() {
    return name;
}
NorthAmerica::~ NorthAmerica() {
    delete herbivore;
    delete carnivore;
}
