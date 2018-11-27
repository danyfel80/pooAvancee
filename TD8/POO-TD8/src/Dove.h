/*
 * Dove.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef DOVE_H_
#define DOVE_H_

#include "Bird.h"
#include "Herbivorous.h"

class Dove: public Bird, public Herbivorous {
public:
	Dove();
	virtual ~Dove();
	virtual string getDescription() const;
	virtual string getTypeMessage() const;
	virtual string getEatingHabits() const;
};

#endif /* DOVE_H_ */
