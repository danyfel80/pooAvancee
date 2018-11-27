/*
 * Carnivorous.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef CARNIVOROUS_H_
#define CARNIVOROUS_H_

#include "Animal.h"

class Carnivorous: public virtual Animal {
public:
	Carnivorous();
	virtual ~Carnivorous();
	virtual string getDescription() const;
	virtual string getEatingHabits() const;
	virtual string toString() const;
};

#endif /* CARNIVOROUS_H_ */
