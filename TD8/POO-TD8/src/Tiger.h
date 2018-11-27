/*
 * Tiger.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef TIGER_H_
#define TIGER_H_

#include "Carnivorous.h"
#include "Mammal.h"

class Tiger: public Mammal, public Carnivorous {
public:
	Tiger();
	virtual ~Tiger();
	virtual string getDescription() const;
	virtual string getTypeMessage() const;
	virtual string getEatingHabits() const;
};

#endif /* TIGER_H_ */
