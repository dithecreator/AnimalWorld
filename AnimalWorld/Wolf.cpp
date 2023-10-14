//
//  Wolf.cpp
//  AnimalWorld
//
//  Created by Дима on 05.10.23.
//

#include "Wolf.hpp"
#include "Carnivore.hpp"
#include "Continent.hpp"
#include "AnimalWorld.hpp"

#include <iostream>
using namespace std;

Wolf::Wolf() {
        power = 0;
        continent = nullptr;
    }
Wolf::Wolf(AnimalWorld* animal, Continent* cont, char* n, int p) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        animal->addCarnivore(*this);
        continent = c;
        power = p;
    }
    void Wolf::Print() {
        cout << "Name: " << name << endl;
        cout << "Weight: " << power << endl;
        cout << "Continent: " << getContinent();
    }
    void Wolf::EatHerbivore(Herbivore* obj) {
        if (continent->getContinent() != obj->getContinent()) {
            cout << "different continents!!" << endl;
        }
        else {
            cout << "-1 " << obj->getName() << endl;
            cout << "wolf power: " << power << endl;
            cout << "wolf weight: " << obj->getWeight() << endl;
            if (obj->getWeight() < power){
                power += 10;
            }
            else
            {
                power -= 10;
            }
            obj->setLife(false);
        }
    }
    Wolf::~Wolf() {
        delete continent;
    }
