//============================================================================
// Name        : POO-TD8.cpp
// Author      : Daniel Gonzalez
// Description : Animal container test
//============================================================================

#include <iostream>
using namespace std;
#include "AnimalContainer.h"
#include "Dove.h"
#include "Cow.h"
#include "Tiger.h"

int main() {

	AnimalContainer container;
	container.addAnimal(new Dove());
	container.addAnimal(new Cow());
	container.addAnimal(new Tiger());

	cout << container.toString() << endl;
	return 0;
}
