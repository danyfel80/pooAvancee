/*
 * Bird.h
 *
 *  Created on: Nov 20, 2018
 *      Author: daniel
 */

#ifndef BIRD_H_
#define BIRD_H_

#include "Animal.h"

class Bird: virtual public Animal {
public:
	Bird();
	virtual ~Bird();
	virtual string getTypeMessage() const;
};

#endif /* BIRD_H_ */
