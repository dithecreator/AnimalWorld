//
//  Bison.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Bison.hpp"
#include "Herbivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
#include <iostream>
using namespace std;
Bison::Bison()
{
    weight = 0;
    life = false;
}
Bison::Bison(AnimalWorld* animal, Continent* c, char* n, double w, bool l)
{
    animal -> addHerbivore(*this);
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    continent = c;
    weight = w;
    life = l;
}
void Bison:: print()
{
    cout << "name: " << name << endl;
    cout << "weight: " << weight << endl;
    cout << "live status: " << life << endl;
    cout << "continent: " << getContinent() << endl;
}

char* Bison::getContinent()
{
    return continent;
}

Bison:: ~Bison(){
    delete name;
}
