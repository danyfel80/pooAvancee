#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>
using namespace std;

class Animal {
public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();
	Animal& operator=(const Animal& other);

	int getAge() const;
	void setAge(int age);
	const string& getNomDuCri() const;
	void setNomDuCri(const string& nomDuCri);

	void vieillir();
	virtual string toString() const;
	friend ostream& operator<<(ostream& out, const Animal& animal);
private:
	int age;
	string nomDuCri;
};

#endif /* ANIMAL_H_ */
