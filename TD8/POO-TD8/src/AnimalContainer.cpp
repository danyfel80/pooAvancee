#include "AnimalContainer.h"
#include <sstream>

AnimalContainer::AnimalContainer() {
}

AnimalContainer::~AnimalContainer() {
}

void AnimalContainer::addAnimal(Animal* animal) {
	animals.push_back(animal);
}

void AnimalContainer::removeAnimal() {
	animals.pop_back();
}

string AnimalContainer::toString() {
	stringstream ss;
	ss << "[";
	for (uint i = 0; i < animals.size(); ++i) {
		if (i>0)
			ss << "," << endl;
		ss << animals[i]->toString();
	}
	ss << "]";
	return ss.str();
}
