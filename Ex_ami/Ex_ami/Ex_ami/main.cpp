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

