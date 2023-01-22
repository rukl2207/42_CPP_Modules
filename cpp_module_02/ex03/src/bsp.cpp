#include "../inc/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	Fixed B = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	Fixed C = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	return ((A > 0 && B > 0 && C > 0) || (A < 0 && B < 0 && C < 0));
}
