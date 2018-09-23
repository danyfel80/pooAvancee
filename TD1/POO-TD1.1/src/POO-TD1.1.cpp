//============================================================================
// Name        : 1.cpp
// Author      : Daniel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int squared(int n) {
	return n*n;
}

int timesTwo(int n) {
	return n*2;
}

int main() {
	cout << "Numbers: ";
	for (int i = 0; i < 20; ++i) {
		cout << (i+1) << " ";
	}
	cout << endl;

	cout << "Squares: ";
	for (int i = 0; i < 20; i++) {
		cout << squared(i) << " ";
	}
	cout << endl;


	cout << "Powers of two: ";
	int result = 1;
	for (int i = 0; i < 20; ++i) {
		result = timesTwo(result);
		cout << result << " ";
	}
	cout << endl;
	return 0;
}
