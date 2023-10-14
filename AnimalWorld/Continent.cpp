//
//  Continent.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Continent.hpp"
#include <iostream>
using namespace std;

Continent:: Continent(){
    name = nullptr;
    temperature = 0;
}

Continent:: Continent(char* n, double t){
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    temperature = t;
}
void Continent:: print(){
    cout << "name of the continent: " << name << endl;
    cout << "temperature of the continent: " << temperature << endl;
}


char* Continent:: getContinent(){
    return name;
}


Continent:: ~Continent(){
    delete name;
    temperature = 0;
}
