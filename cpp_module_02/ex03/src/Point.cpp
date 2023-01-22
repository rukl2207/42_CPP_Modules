#include "../inc/Point.hpp"

Point::Point(): _x(0), _y(0)
{
//	std::cout << "Point default constructor called " << this << std::endl;
}

Point::Point(const Point &point): _x(point._x), _y(point._y)
{
//	std::cout << "Copy constructor called " << this << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
//	std::cout << "Float constructor called " << this << std::endl;
}

Point &Point::operator= (const Point &other)
{
	if (this != &other)
		*this = Point(other);
	return (*this);
}

Point::~Point()
{
//	std::cout << "Point destructor called " << this << std::endl;
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}
