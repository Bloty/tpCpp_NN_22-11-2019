#pragma once
class CVecteur3
{
private:
	float m_fltX, m_fltY, m_fltZ;
	

public:
	//assesseur
	float getFltX();
	float getFltY();
	float getFltZ();

	//mutateur
	void setFtlX(float fltX);
	void setFtlY(float fltY);
	void setFtlZ(float fltZ);

	//constructeur dans le fichier d'en-tête
	/*-------------------------------------
	But : Construction d'un vecteur 3D avec argument
	Entrer : l'instence crée avec argument
	Sortie : Le vecteur inisialiser avec des parametres
	-------------------------------------*/

	inline CVecteur3(float fltX, float fltY, float fltZ)
	{
		this->m_fltX = fltX;
		this->m_fltY = fltY;
		this->m_fltZ = fltZ;
	}

	//Méthode
	void affichePoint();
	CVecteur3  * norMax(CVecteur3 * vecteurTest);
};