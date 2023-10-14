//
//  Wilderbeest.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Wilderbeest.hpp"
#include "Herbivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
#include <iostream>
using namespace std;
Wilderbeest::Wilderbeest()
{
    weight = 0;
    life = false;
}
Wilderbeest::Wilderbeest(AnimalWorld* animal, Continent* c, char* n, double w, bool l)
{
    animal -> addHerbivore(*this);
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    continent = c;
    weight = w;
    life = l;
}
void Wilderbeest:: print()
{
    cout << "name: " << name << endl;
    cout << "weight: " << weight << endl;
    cout << "live status: " << life << endl;
    cout << "continent: " << getContinent();
}

char* Wildbeest::getContinent()
{
    return continent;
}

Wilderbeest:: ~Wilderbeest(){
    delete continent;
}
