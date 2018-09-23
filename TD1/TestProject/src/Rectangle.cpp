/*
 * Rectangle.cpp
 *
 *  Created on: Sep 17, 2018
 *      Author: daniel
 */

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
	this->largeur = 0;
	this->longueur = 0;
	cin >> this->largeur;
	cin >> this->longueur;
}

Rectangle::Rectangle(int largeur, int longueur) {
	this->largeur = largeur;
	this->longueur = longueur;
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

int Rectangle::getPerimetre() {
	int perimetre = this->largeur * 2 + this->longueur * 2;
	return perimetre;
}

