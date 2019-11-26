#include <iostream>
#include "CVecteur3.h"


//assesseur
float CVecteur3::getFltX()
{
	return this->m_fltX;
}
float CVecteur3::getFltY()
{
	return this->m_fltY;
}
float CVecteur3::getFltZ()
{
	return this->m_fltZ;
}
//mutateur
void CVecteur3::setFtlX(float fltX)
{
	this->m_fltX = fltX;
}
void CVecteur3::setFtlY(float fltY)
{
	this->m_fltY = fltY;
}
void CVecteur3::setFtlZ(float fltZ)
{
	this->m_fltZ = fltZ;
}

//Méthode
/*-------------------------------------
But : Afficher les coordonner d'un point vecteur 3d
Entrer : Le point a afficher
Sortie : les coordonner d'un point afficher
-------------------------------------*/
void CVecteur3::affichePoint()
{
	std::cout << "X = " << this->m_fltX << " Y = " << this->m_fltY << " Z = " << this->m_fltZ << std::endl;
}


/*-------------------------------------
But : Permet d’obtenir, parmi deux vecteurs, celui qui a la plus grande norme.
Entrer : 2 point de type vecteur 3d
Sortie : le vecteur avec la plus grande norme
-------------------------------------*/
CVecteur3 CVecteur3::norMax(CVecteur3 vecteurTest)
{
	float ftlNorme1,ftlNorme2;

	ftlNorme1 = this->m_fltX * this->m_fltX + this->m_fltY * this->m_fltY + this->m_fltZ * this->m_fltZ;
	ftlNorme2 = vecteurTest.m_fltX * vecteurTest.m_fltX + vecteurTest.m_fltY * vecteurTest.m_fltY + vecteurTest.m_fltZ * vecteurTest.m_fltZ;
	
	if (ftlNorme1 > ftlNorme2)
	{
		return *this;
	}
	else
	{
		return vecteurTest;
	}
}



