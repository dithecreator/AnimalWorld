//
//  NorthAmerica.hpp
//  AnimalWorld
//
//  Created by Дима on 14.10.23.
//

#ifndef NorthAmerica_hpp
#define NorthAmerica_hpp
#include <stdio.h>
#include "Continent.hpp"
#include "Herbivore.hpp"
#include "Carnivore.hpp"
class NorthAmerica: public Continent{
    Herbivore* herbivore;
    Carnivore* carnivore;
    public:
    NorthAmerica() = default;
    NorthAmerica(char* n, double t);
    virtual void print();
    char* getContinent();
    ~NorthAmerica();
};

#endif /* NorthAmerica_hpp */
