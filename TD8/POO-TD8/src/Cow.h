/*
 * Cow.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef COW_H_
#define COW_H_

#include "Herbivorous.h"
#include "Mammal.h"

class Cow: public Mammal, public Herbivorous {
public:
	Cow();
	virtual ~Cow();
	virtual string getDescription() const;
	virtual string getTypeMessage() const;
	virtual string getEatingHabits() const;
};

#endif /* COW_H_ */
