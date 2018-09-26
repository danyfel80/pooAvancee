/*
 * Vector3D.cpp
 *
 *  Created on: Sep 23, 2018
 *      Author: Daniel Gonzalez
 */

#include "Vector3D.h"

namespace poo {

Vector3D::Vector3D() :
		x(0), y(0), z(0) {
	//x, y and z already initialized to zero
}

Vector3D::~Vector3D() {
	// Nothing to destroy here
}

void Vector3D::setCoordinates(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

double Vector3D::scalarProduct(Vector3D other) {
	double result = this->x * other.x;
	result += this->y * other.y;
	result += this->z * other.z;
	return result;
}

Vector3D Vector3D::add(Vector3D other) {
	Vector3D result;
	double xAddition = this->x + other.x;
	double yAddition = this->y + other.y;
	double zAddition = this->z + other.z;
	result.setCoordinates(xAddition, yAddition, zAddition);
	return result;
}

}
