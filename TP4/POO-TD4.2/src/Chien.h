#ifndef CHIEN_H_
#define CHIEN_H_

#include "Animal.h"

class Chien: public Animal {
public:
	Chien();
	Chien(const Chien& other);
	virtual ~Chien();
	Chien& operator =(const Chien& other);

	const string& getCri() const;
	void setCri(const string& cri);

	string toString() const;
private:
	string cri;
};

#endif /* CHIEN_H_ */
