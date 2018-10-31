/*
 * Fish.h
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#ifndef FISH_H_
#define FISH_H_

#include "Animal.h"

class Fish: public virtual Animal {
private:
	int depth;

public:
	Fish(string name = "", bool female = false, int x = 0, int y = 0, int depth =
			0);
	Fish(const Fish& other);
	virtual ~Fish();
	Fish& operator=(const Fish& other);
	int getDepth() const;

	void setDepth(int depth);

	virtual void move();
	virtual Fish* breed(bool female) const;

	virtual string toString() const;
};

#endif /* FISH_H_ */
