/*
 * Animal.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#include "Animal.h"

#include <sstream>
using namespace std;

Animal::Animal(string name, bool female, int x, int y) {
	cout << "Animal: default constructor" << endl;
	this->name = name;
	this->female = female;
	this->x = x;
	this->y = y;
}

Animal::Animal(const Animal& other) {
	cout << "Animal: copy constructor" << endl;
	this->name = other.name;
	this->female = other.female;
	this->x = other.x;
	this->y = other.y;
}

Animal::~Animal() {
	cout << "Animal: destructor" << endl;
}

Animal& Animal::operator =(const Animal& other) {
	if (this != &other) {
		this->name = other.name;
		this->female = other.female;
		this->x = other.x;
		this->y = other.y;
	}
	return *this;
}

bool Animal::isFemale() const {
	return female;
}

void Animal::setFemale(bool female) {
	this->female = female;
}

const string& Animal::getName() const {
	return name;
}

void Animal::setName(const string& name) {
	this->name = name;
}

int Animal::getX() const {
	return x;
}

void Animal::setX(int x) {
	this->x = x;
}

int Animal::getY() const {
	return y;
}

void Animal::setY(int y) {
	this->y = y;
}

string Animal::toString() const {
	stringstream ss;
	ss << "Animal: " << name << ", " << female << ", <" << x << ", " << y << ">";
	return ss.str();
}
