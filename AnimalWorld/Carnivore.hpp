//
//  Carnivore.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Carnivore_hpp
#define Carnivore_hpp
#include <stdio.h>
#include "Herbivore.hpp"
class Carnivore{
    int power;
    char* name;
public:
    Carnivore();
    Carnivore(char* n, int p);
        virtual void eat(Herbivore* herb) = 0;
        virtual void print() = 0;
        char* getName();
        int getPower(int p);
        void setName(char* n);
        void setPower(double p);
    ~Carnivore();
};

#endif /* Carnivore_hpp */
