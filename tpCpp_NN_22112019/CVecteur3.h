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

	//constructeur
	CVecteur3();
	CVecteur3(float fltX, float fltY, float fltZ);

	
};