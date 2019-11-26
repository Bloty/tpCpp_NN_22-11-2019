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

	CVecteur3(float = 0.0, float= 0.0, float= 0.0);

	//Méthode
	void affichePoint();
	CVecteur3 somme(CVecteur3);
	float produitScal(CVecteur3);
};