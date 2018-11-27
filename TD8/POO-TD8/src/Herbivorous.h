/*
 * Herbivorous.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef HERBIVOROUS_H_
#define HERBIVOROUS_H_

#include "Animal.h"

class Herbivorous: public virtual Animal {
public:
	Herbivorous();
	virtual ~Herbivorous();
	virtual string getDescription() const;
	virtual string getEatingHabits() const;
	virtual string toString() const;
};

#endif /* HERBIVOROUS_H_ */
