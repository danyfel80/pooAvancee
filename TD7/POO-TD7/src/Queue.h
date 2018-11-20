#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
using namespace std;

template<class T>
class Queue {
private:
	T* q;
	int headIndex;
	int tailIndex;
	int capacity;
	int numElements;

public:
	Queue(int capacity = 3);
	Queue(const Queue<T>& other);
	virtual ~Queue();
	Queue<T>& operator =(const Queue<T>& other);

	void addElement(T element);
	T removeElement();
	bool isEmpty() const;

	string toString() const;
};

#endif /* QUEUE_H_ */
