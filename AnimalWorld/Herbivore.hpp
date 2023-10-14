//
//  Herbivore.hpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#ifndef Herbivore_hpp
#define Herbivore_hpp
#include <stdio.h>
class Herbivore{
    int power;
    int weight;
    char* name;
    bool life;
public:
    Herbivore();
    Herbivore(char* n, int w, int p, bool l);
    virtual void eatGrass();
    virtual void print() = 0;

    char* getName();
    double getWeight();
    bool getLife();
    virtual char* getContinent() const = 0;

    void setName(char* n);
    void setWeight(double w);
    void setLife(bool l);
    ~Herbivore();
};

#endif /* Herbivore_hpp */
