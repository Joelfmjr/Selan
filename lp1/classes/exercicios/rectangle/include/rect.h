#ifndef RECT_H
#define RECT_H

#include <iostream>

class Rectangle 
{
	int width, height;// dimensoes
	float ox, oy; //Origem do retangulo; no canto superior esquerdo

	public:
		// Construtor default
		//Rectangle();
		Rectangle( int=1, int=1, float=0.f, float=0.f );

		//Método para calculo da area
		int area();

		bool operator==(const Rectangle &);

		friend std::ostream& operator<<( std::ostream&, const Rectangle& );
};



#endif