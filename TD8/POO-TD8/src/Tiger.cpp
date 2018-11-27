/*
 * Tiger.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Tiger.h"

Tiger::Tiger():Animal(), Mammal(), Carnivorous() {
}

Tiger::~Tiger() {
}

string Tiger::getDescription() const {
	return Carnivorous::getDescription();
}

string Tiger::getTypeMessage() const {
	return Mammal::getTypeMessage();
}

string Tiger::getEatingHabits() const {
	return Carnivorous::getEatingHabits();
}
