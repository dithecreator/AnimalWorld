//
//  Wilderbeest.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Wilderbeest_hpp
#define Wilderbeest_hpp
#include <stdio.h>
#include "Herbivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
class Wilderbeest: public Herbivore{
    Continent* continent;
public:
    Wilderbeest();
    Wilderbeest(AnimalWorld* animal, Continent* c, char* n, double w, bool l);
    void print();
    char* getContinent();
    ~Wilderbeest();
};

#endif /* Wilderbeest_hpp */
