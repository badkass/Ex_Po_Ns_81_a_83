/* déclaration de la classe point*/

class point {
	int m_X, m_Y;

public:
	friend void affiche(const point&);
	point(int abs = 0, int ord = 0)

	{
		m_X = abs; m_Y = ord;
	}

};
