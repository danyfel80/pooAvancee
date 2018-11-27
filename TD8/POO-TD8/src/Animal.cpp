#include "Animal.h"
#include <sstream>

Animal::Animal() {

}

Animal::~Animal() {
}

string Animal::getDescription() const {
	return "I'm a";
}

string Animal::getTypeMessage() const {
	return "I'm an animal of type";
}

string Animal::toString() const {
	stringstream ss;
	ss << getDescription() << " " << getTypeMessage();
	return ss.str();
}
