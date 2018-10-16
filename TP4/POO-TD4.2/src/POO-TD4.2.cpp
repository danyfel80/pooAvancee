#include <iostream>
using namespace std;

#include "Chien.h"

int main() {
	Chien* c1 = new Chien();
	cout << c1->toString() << endl;
	cout << ((Animal*)c1)->toString() << endl;
	Animal* chouchou = c1;
	cout << chouchou->toString() << endl;
	cout << *(chouchou) << endl;


	delete chouchou;
	return 0;
}
