/*
 * AnimalContainer.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef ANIMALCONTAINER_H_
#define ANIMALCONTAINER_H_
#include <iostream>
#include <vector>
using namespace std;
#include "Animal.h"

class AnimalContainer {
private:
	vector<Animal*> animals;
public:
	AnimalContainer();
	virtual ~AnimalContainer();
	void addAnimal(Animal* animal);
	void removeAnimal();
	string toString();
};

#endif /* ANIMALCONTAINER_H_ */
