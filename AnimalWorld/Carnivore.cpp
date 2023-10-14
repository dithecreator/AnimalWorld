//
//  Carnivore.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Carnivore.hpp"
#include <iostream>
using namespace std;

Carnivore:: Carnivore(){
    name = nullptr;
    power = 0;
}

Carnivore:: Carnivore(char* n, int p){
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    power = p;
}


char* Carnivore:: getName()
{
    return name;
}

int Carnivore:: getPower() {
    return power;
}

void Carnivore:: setName(char* n)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}
int Carnivore:: getPower(int p) {
    power = p;
}

Carnivore:: ~Carnivore(){
    delete name;
    power = 0;
}
