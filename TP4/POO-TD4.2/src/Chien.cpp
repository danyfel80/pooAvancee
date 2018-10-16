#include "Chien.h"
#include <sstream>

Chien::Chien():Animal() {
	cout << "Constructeur Chien sans parametres..." << endl;
	cout << "Cri: ";
	cin >> this->cri;
}

Chien::Chien(const Chien& other):Animal(other) {
	cout << "Constructeur Chien par copie..." << endl;
	cout << "Copying Chien: " << toString();
	cri = other.cri;
}

Chien::~Chien() {
	cout << "Destructeur de Chien..." << endl;
}

Chien& Chien::operator =(const Chien& other) {
	Animal::operator =(other);
	if (this != &other) {
		this->cri = other.cri;
	}
	return *this;
}

const string& Chien::getCri() const {
	return cri;
}

void Chien::setCri(const string& cri) {
	this->cri = cri;
}

string Chien::toString()const {
	stringstream ss;
	ss << Animal::toString() << ", Cri: "<< cri;
	return ss.str();
}
