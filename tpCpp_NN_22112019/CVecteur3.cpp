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

//constructeur
/*-------------------------------------
But : Construction d'un vecteur 3D sans ou avec argument
Entrer : l'instence crée sans ou avec argument
Sortie : Le vecteur inisialiser a 0 ou avec des parametres
-------------------------------------*/

CVecteur3::CVecteur3(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}

//Méthodes
/*-------------------------------------
But : Afficher les coordonner d'un point vecteur 3d
Entrer : Le point a afficher
Sortie : les coordonner d'un point afficher
-------------------------------------*/
void CVecteur3::affichePoint()
{
	std::cout << "<" << this->m_fltX << ", " << this->m_fltY << ", " << this->m_fltZ << ">" << std::endl;
}

/*-------------------------------------
But : Faire la somme entre deux vecteur
Entrer : deux vecteurs de type CVecteur
Sortie : la somme de type CVecteur
-------------------------------------*/
CVecteur3 CVecteur3::somme(CVecteur3 vecteur)
{
	CVecteur3 resultat;

	resultat.m_fltX = this->m_fltX + vecteur.m_fltX;
	resultat.m_fltY = this->m_fltY + vecteur.m_fltY;
	resultat.m_fltZ = this->m_fltZ + vecteur.m_fltZ;

	return resultat;
}

/*-------------------------------------
But : Donner le produit scalaire de 2 vecteur
Entrer : deux vecteurs de type CVecteur
Sortie : le produit scalaire de type float
-------------------------------------*/
float CVecteur3::produitScal(CVecteur3 vecteur)
{
	return this->m_fltX*vecteur.m_fltX + this->m_fltY * vecteur.m_fltY + this->m_fltZ * vecteur.m_fltZ;
}
