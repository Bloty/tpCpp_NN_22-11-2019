#include <iostream> //input output
#include <cstdlib>
#include "CVecteur3.h"


int main()
{
	//Exercice 72

	CVecteur3 vecteur1(1, 2, 4);
	CVecteur3 vecteur2(2, 12, 4);

	std::cout << "Vecteur 1 :"<< std::endl;
	vecteur1.affichePoint();
	std::cout << "Vecteur 2 :" << std::endl;
	vecteur2.affichePoint();

	//somme
	CVecteur3 sommeVec = CVecteur3();
	sommeVec = vecteur1.somme(vecteur2);
	std::cout << "Somme des vecteurs :" << std::endl;
	sommeVec.affichePoint();

	//prod scal
	std::cout << "Produit scalaire : " << vecteur1.produitScal(vecteur2) << std::endl;
	
	system("pause");

	return 0;
}