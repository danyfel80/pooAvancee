/*
 * IntegerStack.h
 *
 *      Author: Daniel Felipe Gonzalez Obando
 */

#ifndef INTEGERSTACK_H_
#define INTEGERSTACK_H_
#include <iostream>

namespace poo {

	class IntegerStack {
	public:
		IntegerStack(int capacity = 10);
		IntegerStack(const IntegerStack& other);
		virtual ~IntegerStack();
		IntegerStack& operator =(const IntegerStack& other);

		void add(const int& value);
		int& remove();
		bool isFull() const;
		bool isEmpty() const;
		int getSize() const;
		std::string toString() const;

		IntegerStack& operator <(const int& value);
		int& operator >(int& value);

	private:
		int* stack;
		int capacity;
		int last;
	};

}

#endif
