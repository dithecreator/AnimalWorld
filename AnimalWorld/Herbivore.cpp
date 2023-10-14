//
//  Herbivore.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Herbivore.hpp"
#include <iostream>
using namespace std;
Herbivore:: Herbivore(){
    name = nullptr;
    weight = 0;
}
Herbivore:: Herbivore(char* n, int w, int p, bool l){
    weight = w;
    power = p;
    life = l;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}


void Herbivore:: eatGrass()
{
    weight += 10;
}

char* Herbivore::getName()
{
    return name;
}
double Herbivore::getWeight()
{
    return weight;
}
bool Herbivore::getLife()
{
    return life;
}

void Herbivore::setName(char* n)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}
void Herbivore:: setWeight(double w)
{
    weight = w;
}
void Herbivore::setLife(bool l)
{
    life = l;
}

Herbivore:: ~Herbivore(){
    delete name;
    weight = 0;
}
