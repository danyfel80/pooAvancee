/*
 * Rectangle.h
 *
 *  Created on: Sep 17, 2018
 *      Author: daniel
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {
public:
	Rectangle();
	Rectangle(int largeur, int longueur);
	virtual ~Rectangle();
	int getPerimetre();
private:
	int largeur;
	int longueur;
};

#endif /* RECTANGLE_H_ */
