#pragma once
class CVecteur3
{
private:
	float m_fltX, m_fltY, m_fltZ;
	
	//membre static pour compter le nombre d'instance
	static int nNbPoint;
	

public:
	//assesseur
	float getFltX();
	float getFltY();
	float getFltZ();

	//mutateur
	void setFtlX(float fltX);
	void setFtlY(float fltY);
	void setFtlZ(float fltZ);

	CVecteur3(float = 0.0, float= 0.0, float= 0.0);

	//methode statique
	static void compte();
};