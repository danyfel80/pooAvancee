//============================================================================
// Name        : TD2
// Author      : Daniel Gonzalez
// Version     : 1
// Copyright   :
// Description : Notions of a Class and an Object
//============================================================================

#include <iostream>
using namespace std;
#include "Vector3D.h"
using namespace poo;

int main() {
	Vector3D v1, v2, v3;
	v1.setCoordinates(0, 0, 0);
	v2.setCoordinates(12.5, 3.8, 4.5);
	v3.setCoordinates(13.7, 5, 0);

	cout << "v1: " << v1.toString() << endl;
	cout << "v2: " << v2.toString() << endl;
	cout << "v3: " << v3.toString() << endl;

	cout << "v1.v2: " << v1.scalarProduct(v2) << endl;
	cout << "v2.v1: " << v2.scalarProduct(v1) << endl;
	cout << "v2.v3: " << v2.scalarProduct(v3) << endl;
	cout << "v3.v2: " << v3.scalarProduct(v2) << endl;

	cout << "v1+v2: " << v1.add(v2).toString() << endl;
	cout << "v1+v3: " << v1.add(v3).toString() << endl;
	cout << "v2+v3: " << v2.add(v3).toString() << endl;

	return 0;
}
