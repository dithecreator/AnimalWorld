//
//  Lion.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Lion.hpp"
#include "Carnivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
#include <iostream>
using namespace std;

Lion::Lion()
{
    power = 0;
    continent = nullptr;
}
Lion::Lion(AnimalWorld* animal, Continent* c, char* n, int p)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    animal->AddCarnivore(*this);
    continent = c;
    power = p;
}
void Lion::print()
{
    cout << "Name: " << name << endl;
    cout << "Weight: " << power << endl;
    cout << "Continent: " << continent->getContinent();
}
void Lion::eatHerbivore(Herbivore* obj)
{
    if (continent->getContinent() != obj->getContinent())
    {
        cout << "different continents" << endl;
    }
    else{
        cout << "-1 to: " << obj->getName() << endl;
        cout << "lion power: " << power << endl;
        cout << "lion weight: " << obj->getWeight() << endl;
        if (obj->getWeight() < power)
        {
            power += 10;
        }
        else
        {
            power -= 10;
        }
        obj->setLife(false);
    }
}
Lion::~Lion() {
    delete continent;
}
