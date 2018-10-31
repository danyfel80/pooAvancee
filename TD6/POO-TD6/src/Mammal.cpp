/*
 * Mammal.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#include "Mammal.h"
#include <sstream>
using namespace std;

Mammal::Mammal(string name, bool female, int x, int y, int speed) :
		Animal(name, female, x, y) {
	cout << "Mammal: default constructor" << endl;
	this->speed = speed;
}

Mammal::Mammal(const Mammal& other):Animal(other) {
	cout << "Mammal: copy constructor" << endl;
	this->speed = other.speed;
}

Mammal::~Mammal() {
	cout << "Mammal: destructor" << endl;
}

Mammal& Mammal::operator =(const Mammal& other) {
	Animal::operator =(other);
	if (this != &other) {
		this->speed = other.speed;
	}
	return *this;
}

int Mammal::getSpeed() const {
	return speed;
}

void Mammal::setSpeed(int speed) {
	this->speed = speed;
}

void Mammal::move() {
	setX(getX() + speed);
	setY(getY() + speed);
}

Mammal* Mammal::breed(bool female) const {
	Mammal* baby = NULL;
	if (isFemale()) {
		stringstream ss;
		ss << getName() << "_" << (female? "daughter": "son");
		baby = new Mammal(ss.str(), female, getX(), getY(), speed);
	}
	return baby;
}

string Mammal::toString() const {
	stringstream ss;
	ss << "Mammal " << Animal::toString() << ", speed = " << speed;
	return ss.str();
}
