#include <iostream>
#include "../include/rect.h"

int main()
{
	Rectangle a;
	Rectangle b{12, 3, 1.5, 2.5};
	//construtor cópia
	Rectangle c{ b };
	Rectangle d = a;

	std::cout << ">>> Rentangulo A: " << a << std::endl;
	std::cout << ">>> Rentangulo B: " << b << std::endl;
	std::cout << ">>> Rentangulo C: " << c << std::endl;
	std::cout << ">>> Rentangulo d: " << d << std::endl;

	return 0;
}