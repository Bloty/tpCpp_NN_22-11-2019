#include <iostream> //input output
#include <cstdlib>
#include "CVecteur3.h"


int main()
{
	//Exercice 70
	//c) en utilisant une transmission par r�f�rence

	CVecteur3 vecteur1(1, 12, 4);
	CVecteur3 vecteur2(2, 12, 4);

	std::cout << "Vecteur 1:"<< std::endl;
	vecteur1.affichePoint();
	std::cout << "Vecteur 2:" << std::endl;
	vecteur2.affichePoint();
	
	
	std::cout << "les points coincide t'il? " << vecteur1.coincide(vecteur2)<<std::endl;

	

	system("pause");

	return 0;
}