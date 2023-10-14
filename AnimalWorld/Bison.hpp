//
//  Bison.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Bison_hpp
#define Bison_hpp
#include <stdio.h>
#include "Herbivore.hpp"
#include "Continent.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"
class Bison: public Herbivore{
    Continent* continent;
public:
    Bison();
    Bison(AnimalWorld* animal, Continent* c, char* n, double w, bool l);
    void print();
    char* getContinent();
    ~Bison();
};
#endif /* Bison_hpp */
