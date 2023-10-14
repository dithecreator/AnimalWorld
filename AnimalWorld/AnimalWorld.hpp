//
//  AnimalWorld.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef AnimalWorld_hpp
#define AnimalWorld_hpp
#include <stdio.h>
#include <iostream>
#include "Herbivore.hpp"
#include "Continent.hpp"
#include "Carnivore.hpp"

using namespace std;

class AnimalWorld
{
private:
    int size = 4;
    Carnivore** carnivore;
    Herbivore** herbivore;
public:
    static int countHerb;
    static int countCarn;

    AnimalWorld();
    void addCarnivore(Carnivore* carn);
    void addHerbivore(Herbivore* herb);
    void mealsHerbivore();
    void nutritionCarnivore();
    ~AnimalWorld();
};


#endif /* AnimalWorld_hpp */
