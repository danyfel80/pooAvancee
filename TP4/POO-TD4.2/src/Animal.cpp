#include "Animal.h"
#include<sstream>

Animal::Animal() {
	age = 0;
	nomDuCri = "";
	cout << "Animal: Constructeur sans parametres..." << endl;
	cout << "Age: ";
	cin >> this->age;
	cout << "Nom du cri: ";
	cin >> this->nomDuCri;
}

Animal::Animal(const Animal& other) {
	cout << "Animal: Constructeur par copie..." << endl;
	cout << "Copying " << toString() << endl;
	this->age = other.age;
	this->nomDuCri = other.nomDuCri;
}

Animal::~Animal() {
	cout << "Destructeur Animal..." << endl;
}

Animal& Animal::operator =(const Animal& other) {
	if (this != &other) {
		this->age = other.age;
		this->nomDuCri = other.nomDuCri;
	}
	return *this;
}

int Animal::getAge() const {
	return age;
}

void Animal::setAge(int age) {
	this->age = age;
}

const string& Animal::getNomDuCri() const {
	return nomDuCri;
}

void Animal::setNomDuCri(const string& nomDuCri) {
	this->nomDuCri = nomDuCri;
}

void Animal::vieillir() {
	this->age++;
}

string Animal::toString() const {
	stringstream ss;
	ss << "Age: " << age << ", Nom du cri: " << nomDuCri;
	return ss.str();
}

ostream& operator<<(ostream& out, const Animal& animal) {
	out << animal.toString();
	return out;
}
