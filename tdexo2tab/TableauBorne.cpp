#include "TableauBorne.h"
#include <iostream>
using namespace std;

TableauBorne::TableauBorne(int n, float a, float b)
    : Tableau(n) {

   this-> min = a;
    this->max = b;

    for (int i = 0; i <this-> taille; i++) {
        this->Tab[i] = this->min;
    }
}

const float& TableauBorne::operator[](int i) {
    return Tableau::operator[](i);
}

const float& TableauBorne::operator[](int i) const {
    return Tableau::operator[](i);
}

void TableauBorne::modifier(int i, float valeur) {

    if (i >= 0 && i < this->taille) {

        if (valeur >= min && valeur <= max)
            this->Tab[i] = valeur;
        else
            cout << "Valeur hors intervalle" << endl;

    }
    else
        cout << "Indice invalide" << endl;
}
