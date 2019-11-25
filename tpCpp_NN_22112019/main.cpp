#include <iostream> //input output
#include <cstdlib>
#include "CVecteur3.h"


int main()
{
	//Exercice 69
	//a) en utilisant des fonctions membre surdéfinies
	//sans arguments
	CVecteur3 vecteur1 = CVecteur3();
	std::cout << "Vecteur 1: X = " << vecteur1.getFltX() << " Y = "<< vecteur1.getFltY() << " Z = " << vecteur1.getFltY() << std::endl;
	//avec arguments

	CVecteur3 vecteur2(1,1,1);
	std::cout << "Vecteur 2: X = " << vecteur2.getFltX() << " Y = " << vecteur2.getFltY() << " Z = " << vecteur2.getFltY() << std::endl;

	system("pause");

	return 0;
}