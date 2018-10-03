/*
 * IntegerStack.cpp
 *
 *  Created on: Oct 1, 2018
 *      Author: daniel
 */

#include "IntegerStack.h"
#include <sstream>

namespace poo {

	IntegerStack::IntegerStack(int capacity) {
		this->capacity = capacity;
		this->stack = new int[capacity];
		this->last = 0;
	}

	IntegerStack::IntegerStack(const IntegerStack& other) {
		// DEEP copy of elements of other
		this->capacity = other.capacity;
		this->stack = new int[capacity];
		this->last = other.last;
		for (int i = 0; i < other.last; i++) {
			this->stack[i] = other.stack[i];
		}
	}

	IntegerStack::~IntegerStack() {
		// Free dynamic references
		delete[] this->stack;
	}

	IntegerStack& IntegerStack::operator =(const IntegerStack& other) {
		// 1. Check different instance
		if (this != &other) {
			// 2. Free dynamic references
			delete[] this->stack;

			// 3. Copy data from other
			this->capacity = other.capacity;
			this->stack = new int[this->capacity];
			this->last = other.last;
			for (int i = 0; i < other.last; i++) {
				this->stack[i] = other.stack[i];
			}
		}

		// 4. return by reference
		return *this;
	}

	void IntegerStack::add(const int& value) {
		if (!isFull()) {
			this->stack[last] = value;
			last++;
		} else {
			throw "Stack is full";
		}
	}

	int& IntegerStack::remove() {
		if (!isEmpty()) {
			last--;
			return this->stack[last];
		} else {
			throw "Stack is empty";
		}
	}

	bool IntegerStack::isFull() const {
		return last == capacity;
	}

	bool IntegerStack::isEmpty() const {
		return last == 0;
	}

	int IntegerStack::getSize() const {
		return last;
	}

	std::string IntegerStack::toString() const {
		std::stringstream ss;
		ss << "Stack[";
		for (int i = 0; i < last; i++) {
			if (i > 0)
				ss << ", ";
			ss << stack[i];
		}
		ss << "]";
		return ss.str();
	}

	IntegerStack& IntegerStack::operator <(const int& value) {
		add(value);
		return *this;
	}

	int& IntegerStack::operator >(int& value) {
		value = remove();
		return value;
	}

} /* namespace poo */
