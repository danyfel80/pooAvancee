/*
 * Mammal.h
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_

#include "Animal.h"

class Mammal: public virtual Animal {
private:
	int speed;

public:
	Mammal(string name = "", bool female = false, int x = 0, int y = 0,
			int speed = 0);
	Mammal(const Mammal& other);
	virtual ~Mammal();
	Mammal& operator =(const Mammal& other);

	int getSpeed() const;
	void setSpeed(int speed);

	virtual void move();
	virtual Mammal* breed(bool female) const;

	virtual string toString() const;
};

#endif /* MAMMAL_H_ */
