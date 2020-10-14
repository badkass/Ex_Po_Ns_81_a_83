#include "point1.h"
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

