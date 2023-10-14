//
//  Wolf.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Wolf_hpp
#define Wolf_hpp
#include <stdio.h>
#include "Carnivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
class Wolf : public Carnivore{
    Continent* continent;
public:
    Wolf();
    Wolf(AnimalWorld* animal, Continent* c, char* n, int p);
    void Print();
    virtual void EatHerbivore(Herbivore* herb);
    ~Wolf();
};

#endif /* Wolf_hpp */
