// tdexo2tab.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"
using namespace std;

int main()
{

  

       cout << "----- Classe Tableau -----" << endl;

        Tableau T1(3);

        T1[0] = 2.5;
        T1[1] = 4.5;
        T1[2] = 6.5;

        for (int i = 0; i < 3; i++) {
            cout << T1[i] << " ";
        }

        cout << endl;

       
        Tableau T2(T1);

        cout << "Copie de T1 : " << endl;

        for (int i = 0; i < 3; i++) {
            cout << T2[i] << " ";
        }

        cout << endl;

       
        Tableau T3(2);
        T3 = T1;

        cout << "Affectation de T1 dans T3 :" << endl;

        for (int i = 0; i < 3; i++) {
            cout << T3[i] << " ";
        }

        cout << endl << endl;

       
        cout << "----- Classe TableauBorne -----" << endl;

        TableauBorne B(3, 1, 10);

        B.modifier(0, 3);
        B.modifier(1, 5);
        B.modifier(2, 8);

        for (int i = 0; i < 3; i++) {
            cout << B[i] << " ";
        }

        cout << endl;

        return 0;
    }



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
