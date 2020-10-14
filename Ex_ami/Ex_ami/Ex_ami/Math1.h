#pragma once
class vect;          // pour pouvoir compiler la d�claration de matrice

class matrice
{
    double mat[3] [3] ;       // matrice 3 X 3  

    public : 
        matrice () ;              // constructeur avec initialisation � z�ro   
        
        matrice (double t [3] [3] ) ; // constructeur � partir d'un tableau 
        friend vect prod (const matrice &, const vect &) ;  

} ;