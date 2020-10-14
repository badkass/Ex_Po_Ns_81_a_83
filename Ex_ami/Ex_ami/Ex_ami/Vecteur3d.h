#pragma once

class vecteur3d {
float m_X, m_Y, m_Z; 
public:  
	
	friend int coincide(const vecteur3d&, const vecteur3d&);
	vecteur3d(float c1 = 0, float c2 = 0, float c3 = 0)

	{
		m_X = c1; m_Y = c2; m_Z = c3;
	};  



