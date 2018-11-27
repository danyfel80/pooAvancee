/*
 * Mammal.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Mammal.h"
#include <sstream>

Mammal::Mammal() :
		Animal() {
}

Mammal::~Mammal() {
}

string Mammal::getTypeMessage() const {
	stringstream ss;
	ss << Animal::getTypeMessage() << " Mammal";
	return ss.str();
}
