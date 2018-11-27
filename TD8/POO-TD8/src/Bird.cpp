/*
 * Bird.cpp
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#include "Bird.h"
#include <sstream>

Bird::Bird() :
		Animal() {
}

Bird::~Bird() {
}

string Bird::getTypeMessage() const {
	stringstream ss;
	ss << Animal::getTypeMessage() << " Bird";
	return ss.str();
}
