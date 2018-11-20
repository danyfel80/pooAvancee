#include "Queue.h"

#include<sstream>

template<class T>
Queue<T>::Queue(int capacity) :
		capacity(capacity) {
	this->q = new T[capacity];
	this->numElements = this->headIndex = this->tailIndex = 0;
}

template<class T>
Queue<T>::Queue(const Queue<T>& other) :
		capacity(other.capacity) {
	this->q = new T[capacity];
	this->numElements = other.numElements;
	this->headIndex = other.headIndex;
	this->tailIndex = other.tailIndex;
	for (int i = 0; i < numElements; i++) {
		this->q[i] = other.q[i];
	}
}

template<class T>
Queue<T>::~Queue() {
	delete[] q;
}

template<class T>
Queue<T>& Queue<T>::operator =(const Queue<T>& other) {
	if (this != &other) {
		delete[] q;

		this->capacity = other.capacity;
		this->q = new T[other.capacity];
		this->numElements = other.numElements;
		this->headIndex = other.headIndex;
		this->tailIndex = other.tailIndex;
		for (int i = 0; i < numElements; i++) {
			this->q[i] = other.q[i];
		}
	}
	return *this;
}

template<class T>
void Queue<T>::addElement(T element) {
	if (capacity > numElements) {
		this->q[tailIndex] = element;
		numElements++;
		tailIndex = (tailIndex + 1) % capacity;
	} else {
		throw "Queue is full";
	}
}

template<class T>
bool Queue<T>::isEmpty() const {
	return numElements == 0;
}

template<class T>
T Queue<T>::removeElement() {
	if (!isEmpty()) {
		T element = q[headIndex];
		numElements--;
		headIndex = (headIndex + 1) % capacity;
		return element;
	} else {
		throw "Queue is empty";
	}
}

template<class T>
string Queue<T>::toString() const {
	stringstream ss;
	ss << "Queue [";
	for (int i = 0; i < numElements; i++) {
		if (i > 0)
			ss << ", ";
		ss << q[(headIndex + i) % capacity];
	}
	ss << "]";
	return ss.str();
}
