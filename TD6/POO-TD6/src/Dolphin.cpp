/*
 * Dolphin.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#include "Dolphin.h"
#include <sstream>
using namespace std;

Dolphin::Dolphin(string name, bool female, int x, int y, int depth, int speed) :
		Animal(name, female, x, y), Fish(name, female, x, y, depth), Mammal(name, female, x, y, speed) {
	cout << "Dolphin: default constructor" << endl;
}

Dolphin::Dolphin(const Fish& fish, int speed) :
		Animal(fish), Fish(fish), Mammal(getName(), isFemale(), getX(), getY(), speed) {
	cout << "Dolphin: constructor from fish and speed" << endl;
}

Dolphin::Dolphin(const Dolphin& other): Animal(other), Fish(other), Mammal(other) {
	cout << "Dolphin: copy constructor" << endl;
}

Dolphin::~Dolphin() {
	cout << "Dolphin: destructor" << endl;
}

Dolphin& Dolphin::operator =(const Dolphin& other) {
	Fish::operator =(other);
	Mammal::operator =(other);
	return *this;
}

void Dolphin::move() {
	Mammal::move();
}

Dolphin* Dolphin::breed(bool female) const {
	Dolphin* baby = NULL;
	if (isFemale()) {
		Fish* temp = Fish::breed(female);
		baby = new Dolphin(*temp, getSpeed());
		delete temp;
	}
	return baby;
}

string Dolphin::toString() const {
	stringstream ss;
	ss << "Dolphin " << Animal::toString() << ", depth = " << getDepth()
			<< ", speed = " << getSpeed();
	return ss.str();
}
