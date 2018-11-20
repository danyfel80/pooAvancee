//============================================================================
// Name        : Templates workshop
// Author      : Daniel Gonzalez
// Version     : 1
// Description : A simple queue implemented using templates.
//============================================================================

#include <iostream>
using namespace std;

#include "Queue.cpp" // <--- Special attention to this line

int main() {
	Queue<int> q1(100);
	cout << "Queue containing integers" << endl;
	for (int i = 0; i < 21; ++i) {
		q1.addElement(i);
	}
	cout << q1.toString() << endl;

	cout << "removing 2 elements: ";
	cout << q1.removeElement() << " and " << q1.removeElement() << endl;

	cout << q1.toString() << endl;

	Queue<float> q2;
	cout << "Queue containing floats" << endl;
	for (int i = 0; i < 5; i++) {
		try {
			q2.addElement(i);
		} catch (const char* msg) {
			cerr << msg << " inserting " << i << endl;
		}
	}
	cout << q2.toString() << endl;
	cout << "removing 1 element: ";
	cout << q2.removeElement() << endl;

	cout << q2.toString() << endl;
	cout << "adding 1 element: ";
	q2.addElement(8.4);
	cout << q2.toString() << endl;
	return 0;
}
