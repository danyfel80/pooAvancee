//============================================================================
// Name        : POO-TD3.1.cpp
// Author      : Daniel Felipe Gonzalez Obando
// Description : TD3 Exercise 1 - The Canonic Class Form.
//============================================================================

#include <iostream>
using namespace std;
#include "IntegerStack.h"
using namespace poo;

int main() {
	try {
		IntegerStack s(3);
		s.add(3);
		s.add(4);
		IntegerStack s1(s);
		s1.add(6);

		cout << s.toString() << endl;
		cout << s1.toString() << endl;

		s < 8 ;
		cout << s.toString() << endl;
	} catch (const char* err) {
		cerr << err << endl;
		return 1;
	}
	return 0;
}
