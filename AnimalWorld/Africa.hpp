//
//  Africa.hpp
//  AnimalWorld
//
//  Created by Дима on 14.10.23.
//

#ifndef Africa_hpp
#define Africa_hpp
#include <stdio.h>
#include "Continent.hpp"
#include "Herbivore.hpp"
#include "Carnivore.hpp"
class Africa: public Continent{
    Herbivore* herbivore;
    Carnivore* carnivore;
public:
    Africa() = default;
    Africa(char* n, double t);
    void print();
    ~Africa();
};

#endif /* Africa_hpp */
