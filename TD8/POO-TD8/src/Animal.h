/*
 * Animal.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
using namespace std;

class Animal {
public:
	Animal();
	virtual ~Animal();
	virtual string getDescription() const;
	virtual string getTypeMessage() const;
	virtual string toString() const;
};

#endif /* ANIMAL_H_ */
