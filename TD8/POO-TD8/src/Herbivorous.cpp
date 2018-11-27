/*
 * Herbivorous.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Herbivorous.h"
#include <sstream>

Herbivorous::Herbivorous():Animal() {
}

Herbivorous::~Herbivorous() {
}

string Herbivorous::getDescription() const {
	stringstream ss;
	ss << Animal::getDescription() << " herbivorous";
	return ss.str();
}

string Herbivorous::getEatingHabits() const {
	stringstream ss;
	ss << "I eat plants";
	return ss.str();
}

string Herbivorous::toString() const {
	stringstream ss;
	ss << Animal::toString() << " " << getEatingHabits();
	return ss.str();
}

