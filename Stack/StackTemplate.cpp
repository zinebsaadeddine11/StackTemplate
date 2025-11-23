// Stack.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
#include"Stack.h"

int main()
{
    cout << "=== Test de la pile  ===" << endl << endl;

    
    cout << "1. Creation d'une pile d'entiers :" << endl;
    Stack<int> pileEntiers(5);
    cout << endl;

    cout << "2. Empiler plusieurs valeurs:" << endl;
    pileEntiers.push(10);
    pileEntiers.push(5);
    pileEntiers.push(3);
    pileEntiers.push(40);
    cout << endl;

 
    cout << "3. Affichage de l'etat de la pile:" << endl;
    pileEntiers.afficher();
    cout << endl;

   
    cout << "4. Test de l'opération top():" << endl;
    cout << "Element du sommet: " << pileEntiers.top() << endl;
    cout << endl;

   
    cout << "5. Test avec une pile de chaines de caracteres :" << endl;
    Stack<string> pileChaines(4);
    cout << endl;

    pileChaines.push("Rabat");
    pileChaines.push("Casa");
    pileChaines.push("Oujda");
    pileChaines.push("Sale");
    cout << endl;

    cout << "Affichage de la pile de chaines:" << endl;
    pileChaines.afficher();
    cout << endl;

    cout << "Sommet de la pile de chaines: " << pileChaines.top() << endl;
    cout << endl;

    cout << "Depiler :" << endl;
    pileChaines.pop();
    cout << endl;

    cout << "Etat apres depilage:" << endl;
    pileChaines.afficher();
    cout << endl;

    // Test de pile vide
    cout << "Test de vide(): " << (pileChaines.vide() ? "Vide" : "Non vide") << endl;
    cout << "Test de plein(): " << (pileChaines.plein() ? "Pleine" : "Non pleine") << endl;

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
