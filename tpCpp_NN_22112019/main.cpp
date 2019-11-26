#include <iostream> //input output
#include <cstdlib>
#include "CVecteur3.h"


int main()
{
	//Exercice 71
	//c) . le résultat est renvoyé par adresse, l’argument (explicite) étant également transmis par adresse.

	CVecteur3 vecteur1(4, 12, 4);
	CVecteur3 vecteur2(2, 12, 4);

	std::cout << "Vecteur 1:"<< std::endl;
	vecteur1.affichePoint();
	std::cout << "Vecteur 2:" << std::endl;
	vecteur2.affichePoint();

	CVecteur3 vecteurNormeMax = *vecteur1.norMax(&vecteur2);
	
	vecteurNormeMax.affichePoint();

	system("pause");

	return 0;
}