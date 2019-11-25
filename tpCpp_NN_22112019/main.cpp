#include <iostream> //input output
#include <cstdlib>
#include "CVecteur3.h"


int main()
{
	//Exercice 69
	//c) En utilisant une seule fonction en ligne.

	CVecteur3 vecteur1(1,12,4);
	std::cout << "Vecteur 1: X = " << vecteur1.getFltX() << " Y = " << vecteur1.getFltY() << " Z = " << vecteur1.getFltZ() << std::endl;

	system("pause");

	return 0;
}