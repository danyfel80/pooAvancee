/*
 * Dolphin.h
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#ifndef DOLPHIN_H_
#define DOLPHIN_H_

#include "Fish.h"
#include "Mammal.h"

class Dolphin: public Fish, public Mammal {
public:
	Dolphin(string name = "", bool female = false, int x = 0, int y = 0, int depth = 0, int speed = 0);
	Dolphin(const Fish& fish, int speed);
	Dolphin(const Dolphin& other);
	virtual ~Dolphin();
	Dolphin& operator =(const Dolphin& other);

	virtual void move();
	virtual Dolphin* breed(bool female) const;

	virtual string toString() const;
};

#endif /* DOLPHIN_H_ */
