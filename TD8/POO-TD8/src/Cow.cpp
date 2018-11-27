/*
 * Cow.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Cow.h"

Cow::Cow() :
		Animal(), Mammal(), Herbivorous() {
}

Cow::~Cow() {
}

string Cow::getDescription() const {
	return Herbivorous::getDescription();
}

string Cow::getTypeMessage() const {
	return Mammal::getTypeMessage();
}

string Cow::getEatingHabits() const {
	return Herbivorous::getEatingHabits();
}
