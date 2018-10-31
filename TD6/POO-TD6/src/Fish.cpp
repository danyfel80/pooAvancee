/*
 * Fish.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#include "Fish.h"

#include <sstream>
using namespace std;

Fish::Fish(string name, bool female, int x, int y, int depth) :
		Animal(name, female, x, y) {
	cout << "Fish: default constructor" << endl;
	this->depth = depth;
}

Fish::Fish(const Fish& other) :
		Animal(other) {
	cout << "Fish: copy constructor" << endl;
	this->depth = other.depth;
}

Fish::~Fish() {
	cout << "Fish: destructor" << endl;
}

Fish& Fish::operator =(const Fish& other) {
	Animal::operator =(other);
	if (this != &other) {
		this->depth = other.depth;
	}
	return *this;
}

int Fish::getDepth() const {
	return depth;
}

void Fish::setDepth(int depth) {
	this->depth = depth;
}

void Fish::move() {
	setX(getX() + 1);
	setY(getY() + 1);
}

Fish* Fish::breed(bool female) const {
	Fish* baby = NULL;
	if (isFemale()) {
		stringstream ss;
		ss << getName() << "_" << (female? "daughter": "son");
		baby = new Fish(ss.str(), female, getX(), getY(), depth);
	}
	return baby;
}

string Fish::toString() const {
	stringstream ss;
	ss << "Fish " << Animal::toString() << ", depth = " << depth;
	return ss.str();
}
