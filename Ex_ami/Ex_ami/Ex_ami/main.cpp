#include "point1.h"
#include "vecteur1.h"
#include "Math1.h"
#include <iostream>
using namespace std;

void affiche(const point& p)

{
	cout << "Coordonnées : " << p.m_X << " " << p.m_Y << "\n";
}

int main() {
	point a(10, 2);
	affiche(a);
	point* adp;
	adp = new point(24, 2);
	affiche(*adp);

}


// Exercice 82 

#include "vecteur3d.h"   

int coincide (const vecteur3d & v1, const vecteur3d & v2)
{
	if ( (v1.m_X == v2.m_X) && (v1.m_Y == v2.m_Y) && (v1.m_Z == v2.m_Z) )    
		return 1 ;     
	else return 0 ;}

// Exercice 83 

void vect::affiche ()
{ 
	int i ; 
	
	for (i=0 ; i<3 ; i++) cout << v[i] << " " ; 
	cout << "\n" ;
}

matrice::matrice (double t [3] [3])
{
	int i ; int j ; 
	
	for (i=0 ; i<3 ; i++)   
		for (j=0 ; j<3 ; j++)       
			mat[i] [j] = t[i] [j] ;
}


vect prod (const matrice & m, const vect & x)

{   
	int i, j;   
	double som;
	vect res;          
	for (i=0 ; i<3 ; i++)
	{
		for (j=0, som=0 ; j<3 ; j++)   
			som += m.mat[i] [j] * x.v[j] ;
			res.v[i] = som ;       
	}   
	return res ;
}


int main()
{  
	vect w (9,8,7) ; 
	vect res  ; 
	double tb [3][3] = { 2, 4, 6, 8, 10, 12, 14, 16, 18 } ; 
	matrice a =  tb  ;  
	res = prod(a, w) ;  
	res.affiche () ;
}