#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
private:
    float min;
    float max;


public:

    TableauBorne(int n, float a, float b);
    const float& operator[](int i);
    const float& operator[](int i) const;
    void modifier(int i, float valeur);

};



   



