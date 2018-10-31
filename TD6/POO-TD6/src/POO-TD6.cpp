//============================================================================
// Name        : POO-TD6.cpp
// Author      : Daniel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Dolphin.h"
#include <iostream>
using namespace std;

int main() {
	Dolphin flipper("Flipper", true, 1, 2, 12, 25);
	cout << flipper.toString() << endl;
	Dolphin* littleFlipper = flipper.breed(flipper.isFemale());
	cout << littleFlipper->toString() << endl;
	delete littleFlipper;
	return 0;
}
