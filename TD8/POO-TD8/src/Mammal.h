/*
 * Mammal.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include "Animal.h"

class Mammal: virtual public Animal {
public:
	Mammal();
	virtual ~Mammal();
	virtual string getTypeMessage() const;
};

#endif /* MAMMAL_H_ */
