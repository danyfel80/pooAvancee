/*
 * Employe.h
 *
 *  Created on: Oct 17, 2018
 *      Author: daniel
 */

#ifndef EMPLOYE_H_
#define EMPLOYE_H_

#include <iostream>
using namespace std;

class Employe {

private:
	string nom;
	string prenom;
	int age;
	int anciennete;

public:
	Employe();
	Employe(const Employe& other);
	virtual ~Employe();
	Employe& operator=(const Employe& other);

	virtual double calculerBaseSalaire() const = 0;
	virtual void afficher() const;
	double calculerSalaire() const;
};

#endif /* EMPLOYE_H_ */
