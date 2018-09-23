//============================================================================
// Name        : TestProject.cpp
// Author      : Daniel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Rectangle.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Rectangle rect = Rectangle(3,4);
	cout << rect.getPerimetre();
	Rectangle rect1 = Rectangle();
	cout << rect1.getPerimetre();
	return 0;
}
