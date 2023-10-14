//
//  Continent.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Continent_hpp
#define Continent_hpp
#include <stdio.h>

class Continent{
    char* name;
    double temperature;
public:
    Continent();
    Continent(char* n, double t);
   virtual void print();
    char* getContinent();
    ~Continent();
};

#endif /* Continent_hpp */
