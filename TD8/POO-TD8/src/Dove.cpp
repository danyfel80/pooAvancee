/*
 * Dove.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Dove.h"

Dove::Dove():Animal(), Bird(), Herbivorous() {
}

Dove::~Dove() {
}

string Dove::getDescription() const {
	return Herbivorous::getDescription();
}

string Dove::getTypeMessage() const {
	return Bird::getTypeMessage();
}
string Dove::getEatingHabits() const {
	return Herbivorous::getEatingHabits();
}
