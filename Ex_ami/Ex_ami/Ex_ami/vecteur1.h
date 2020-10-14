#pragma once
class matrice;        // pour pouvoir compiler la déclaration de vect
class vect
{
	double v[3];      // vecteur à 3 composantes  

public:
	vect(double v1 = 0, double v2 = 0, double v3 = 0)      // constructeur      
	{
		v[0] = v1; v[1] = v2; v[2] = v3;
	}

	friend vect prod(const matrice&, const vect&);

	void affiche();

}; 
