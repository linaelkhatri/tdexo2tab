#include "Tableau.h"
#include<iostream>
#include "TableauBorne.h"
using namespace std;

Tableau::Tableau()
{
}

Tableau::Tableau(int t)
{
	this->taille = t;
	this->Tab = new float[this->taille];
	for (int i = 0; i < this->taille; i++) {
		this->Tab[i] = 0;
	}
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->Tab = new float[T.taille];
	for (int i = 0; i < this->taille; i++) {
		this->Tab[i] = T.Tab[i];

	}
}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[]this->Tab;
		this->Tab = nullptr;
}
	this->taille = T.taille;
	this->Tab = new float[T.taille];
	for (int i = 0; i < this->taille; i++) {
		this->Tab[i] = T.Tab[i];
	}
	return *this;
}


float& Tableau::operator[](int i)
{
	if (i < this->taille && i >= 0) {
		return this->Tab[i];
	}
	else
	{ 
		exit(-1);
	}
}

const float& Tableau::operator[](int i) const
{
	if (i >= 0 && i < taille)
			return Tab[i];

		cout << "Indice invalide" << endl;
		return Tab[0];
	
	
}



Tableau::~Tableau()
{
	delete[]this->Tab;
	this->Tab = nullptr;

}
