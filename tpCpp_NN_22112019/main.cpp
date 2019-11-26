#include <iostream> //input output
#include <cstdlib>
#include "CVecteur3.h"


int main()
{
	//Exercice 73
	//le nombre de points existant à un instant donné

	CVecteur3 vecteur1(1, 2, 4);
	CVecteur3::compte();
	CVecteur3 vecteur2(2, 12, 4);
	CVecteur3::compte();
	system("pause");

	return 0;
}