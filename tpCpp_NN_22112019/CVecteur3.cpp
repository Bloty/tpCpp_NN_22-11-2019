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

//passage par  référence
/*-------------------------------------
But : Verifier si deux point dans un plan 3d son identique
Entrer : les deux point a comparer
Sortie : un booleen vrai ou faux
-------------------------------------*/
bool CVecteur3::coincide(CVecteur3 & vecteurTest)
{
	if ((this->m_fltX == vecteurTest.m_fltX) && (this->m_fltY == vecteurTest.m_fltY) && (this->m_fltZ == vecteurTest.m_fltZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

