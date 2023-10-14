//
//  AnimalWorld.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "AnimalWorld.hpp"
#include "Herbivore.hpp"
#include "Continent.hpp"
#include "Carnivore.hpp"
#include <iostream>
using namespace std;


int AnimalWorld::countHerb = 0;
int AnimalWorld::countCarn = 0;



AnimalWorld::AnimalWorld() {
    carnivore = new Carnivore * [size];
    herbivore = new Herbivore * [size];
}
void AnimalWorld::addCarnivore(Carnivore* carn) {
    if (countCarn < size) {
        carnivore[countCarn++] = carn;
    }
    else {
        cout << "error limit" << endl;
    }

}
void AnimalWorld::addHerbivore(Herbivore* herb) {
    if (countHerb < size) {
        herbivore[countHerb++] = herb;
    }
    else {
        cout << "error limit" << endl;
    }
}
void AnimalWorld::mealsHerbivore()
{
    for (int i = 0; i < countHerb; i++)
    {
        herbivore[i]->eatGrass();
    }
}
void AnimalWorld::nutritionCarnivore()
{
    if (countCarn < countHerb) {
        for (int i = 0; i < countCarn; i++)
        {
            if (herbivore[i]->getLife())
            {
                carnivore[i]->eat(herbivore[i]);
            }
        }
    }
    else {
        for (int i = 0; i < countHerb; i++)
        {
            if (herbivore[i]->getLife())
            {
                carnivore[i]->eat(herbivore[i]);
            }
        }
    }
}
AnimalWorld::~AnimalWorld() {
    delete carnivore;
    delete herbivore;
}
