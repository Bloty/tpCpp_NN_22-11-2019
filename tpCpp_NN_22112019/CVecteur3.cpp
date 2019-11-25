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


//partie a--------------------------------------------------------------------------
//constructeur sans arguments
/*-------------------------------------
But : Construction d'un vecteur 3D sans argument
Entrer : l'instence crée
Sortie : Le vecteur inisialiser a 0
-------------------------------------*/

CVecteur3::CVecteur3()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	this->m_fltZ = 0;

}

//constructeur avec arguments
/*-------------------------------------
But : Construction d'un vecteur 3D avec argument
Entrer : l'instence crée et les parametre x, y, z
Sortie : Le vecteur inisialiser avec les donnée entrer en argument
-------------------------------------*/
CVecteur3::CVecteur3(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}
