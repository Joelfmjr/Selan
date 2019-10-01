#include "../include/rect.h"

std::ostream& operator<<( std::ostream& os, const Rectangle& r )
{
	os << "[{" << r.ox << ", " << r.oy << "}, w = " << r.width << ", h = " << r.height << "]";
	return os;
}


/*Rectangle::Rectangle(void)
	:width{ 1 },
	height{ 2 },
	ox{ 0.f },
	oy{ 0.f }
*/


//Lista inicializadora
Rectangle::Rectangle(int w, int h, float x, float y)
	:width{ w },
	height{ h },
	ox{ x },
	oy{ y }
{ /* empty */}