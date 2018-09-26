/*
 * Vector3D.h
 *
 *  Created on: Sep 23, 2018
 *      Author: Daniel Gonzalez
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_

#include<iostream>
#include<sstream>

namespace poo {

class Vector3D {

private:
	// Coordinates
	double x, y, z;

public:
	Vector3D(); // Default constructor
	virtual ~Vector3D(); // Destructor

	// Sets the coordinates of the vector
	void setCoordinates(double x, double y, double z);

	// Performs the scalar product of the vector
	double scalarProduct(Vector3D other);

	// Adds this vector to another and returns the result as a new vector
	Vector3D add(Vector3D other);

	// Creates a string with the description of the vector
	inline std::string toString(){
		std::stringstream ss;
		ss << "Vector3D(x:" << x << ", y: " << y << ", z: " << z << ")";
		return ss.str();
	};
};

}
#endif
