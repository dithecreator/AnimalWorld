//
//  Lion.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Lion_hpp
#define Lion_hpp
#include <stdio.h>
#include "Carnivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
#include <iostream>
using namespace std;

class Lion : public Carnivore{
    
    Continent* continent;
    
public:
    Lion();
    Lion(AnimalWorld* animal, Continent* c, char* n, int p);
    void print();
    virtual void eatHerbivore(Herbivore* obj);
    ~Lion();
#endif /* Lion_hpp */
