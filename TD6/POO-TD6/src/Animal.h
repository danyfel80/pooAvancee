/*
 * Animal.h
 *
 *  Created on: Oct 31, 2018
 *      Author: daniel
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
	bool female;
	int x, y;
public:
	Animal(string name = "", bool female = false, int x = 0, int y = 0);
	Animal(const Animal& other);
	virtual ~Animal();
	Animal& operator=(const Animal& other);

	bool isFemale() const;
	void setFemale(bool female);
	const string& getName() const;
	void setName(const string& name);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);

	virtual void move() = 0;
	virtual Animal* breed(bool female) const = 0;

	virtual string toString() const;
};

#endif /* ANIMAL_H_ */
