#pragma once
class Tableau
{
protected:
	int taille;
	float *Tab;
public:
	Tableau();
	Tableau(int);
	Tableau(const Tableau& T);
	Tableau& operator=(const Tableau & );
	float& operator[](int T );
	const float& operator[](int i) const;
	~Tableau();
};




   

