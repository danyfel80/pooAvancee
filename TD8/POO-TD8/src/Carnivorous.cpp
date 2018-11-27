/*
 * Carnivorous.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Carnivorous.h"
#include <sstream>

Carnivorous::Carnivorous() {
}

Carnivorous::~Carnivorous() {
}

string Carnivorous::getDescription() const {
	stringstream ss;
	ss << Animal::getDescription() << " Carnivorous";
	return ss.str();
}

string Carnivorous::getEatingHabits() const {
	stringstream ss;
	ss << "I eat meat";
	return ss.str();
}

string Carnivorous::toString() const {
	stringstream ss;
	ss << Animal::toString() << " " << getEatingHabits();
	return ss.str();
}
